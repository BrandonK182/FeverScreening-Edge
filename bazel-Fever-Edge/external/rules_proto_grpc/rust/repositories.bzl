"""Common dependencies for rules_proto_grpc Rust rules."""

load(
    "//:repositories.bzl",
    "rules_proto_grpc_repos",
    "rules_rust",
)
load(
    "//rust/raze:crates.bzl",
    "raze_fetch_remote_crates",
)

def rust_repos(**kwargs):  # buildifier: disable=function-docstring
    rules_proto_grpc_repos(**kwargs)
    rules_rust(**kwargs)
    raze_fetch_remote_crates()
