load("@envoy//api/bazel:api_build_system.bzl", "api_proto_library_internal")
load(
    "@envoy//bazel:envoy_build_system.bzl",
    "envoy_cc_library",
)

licenses(["notice"])  # Apache 2

api_proto_library_internal(
    name = "benchmark_options",
    srcs = [
        "options.proto",
        "output.proto",
    ],
    visibility = ["//visibility:public"],
)

envoy_cc_library(
    name = "nighthawk_client_lib",
    srcs = [
        "options_impl.cc",
    ],
    hdrs = [
        "options_impl.h",
    ],
    repository = "@envoy",
    visibility = ["//visibility:public"],
    deps = [
        ":benchmark_options_cc",
        "//nighthawk/include/nighthawk/client:client_includes",
        "//nighthawk/include/nighthawk/common:base_includes",
        "//nighthawk/source/common:nighthawk_common_lib",
        "@envoy//source/common/common:compiler_requirements_lib",
        "@envoy//source/common/common:thread_impl_lib_posix",
        "@envoy//source/exe:envoy_common_lib",
    ],
)
