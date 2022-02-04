"""Generated definition of java_grpc_library."""

load("//java:java_grpc_compile.bzl", "java_grpc_compile")
load("//internal:compile.bzl", "proto_compile_attrs")
load("@rules_java//java:defs.bzl", "java_library")

def java_grpc_library(name, **kwargs):
    # Compile protos
    name_pb = name + "_pb"
    java_grpc_compile(
        name = name_pb,
        **{
            k: v
            for (k, v) in kwargs.items()
            if k in ["protos" if "protos" in kwargs else "deps"] + proto_compile_attrs.keys()
        }  # Forward args
    )

    # Create java library
    java_library(
        name = name,
        srcs = [name_pb],
        deps = GRPC_DEPS + (kwargs.get("deps", []) if "protos" in kwargs else []),
        runtime_deps = ["@io_grpc_grpc_java//netty"],
        exports = GRPC_DEPS + kwargs.get("exports", []),
        visibility = kwargs.get("visibility"),
        tags = kwargs.get("tags"),
    )

GRPC_DEPS = [
    # From https://github.com/grpc/grpc-java/blob/f6c2d221e2b6c975c6cf465d68fe11ab12dabe55/BUILD.bazel#L32-L38
    "@io_grpc_grpc_java//api",
    "@io_grpc_grpc_java//protobuf",
    "@io_grpc_grpc_java//stub",
    "@io_grpc_grpc_java//stub:javax_annotation",
    "@com_google_code_findbugs_jsr305//jar",
    "@com_google_guava_guava//jar",
    "@com_google_protobuf//:protobuf_java",
    "@com_google_protobuf//:protobuf_java_util",
]
