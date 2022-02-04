"""Generated definition of swift_proto_library."""

load("//swift:swift_proto_compile.bzl", "swift_proto_compile")
load("//internal:compile.bzl", "proto_compile_attrs")
load("@build_bazel_rules_swift//swift:swift.bzl", "swift_library")

def swift_proto_library(name, **kwargs):
    # Compile protos
    name_pb = name + "_pb"
    swift_proto_compile(
        name = name_pb,
        **{
            k: v
            for (k, v) in kwargs.items()
            if k in ["protos" if "protos" in kwargs else "deps"] + proto_compile_attrs.keys()
        }  # Forward args
    )

    # Create swift library
    swift_library(
        name = name,
        srcs = [name_pb],
        deps = PROTO_DEPS + (kwargs.get("deps", []) if "protos" in kwargs else []),
        module_name = kwargs.get("module_name"),
        visibility = kwargs.get("visibility"),
        tags = kwargs.get("tags"),
    )

PROTO_DEPS = [
    "@com_github_apple_swift_protobuf//:SwiftProtobuf",
]
