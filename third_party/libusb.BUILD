load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "libusb",
    srcs = [
      ":libusb_genrule",
      ],
    hdrs = [
      "include/libusb-1.0/libusb.h",
      "include/libusb-1.0/libusbi.h",
    ],
    linkstatic = 1,
)

genrule(
    name = "libusb_genrule",
    srcs = glob(
      ["**",],
      exclude = [
      "**/msvc/**",
      "**/Xcode/**",
    ]),
    outs = [
      "lib/libusb-1.0.a",
      "lib/libusb-1.0.la",
      "lib/libusb-1.0.so",
      "lib/libusb-1.0.so.0",
      "lib/libusb-1.0.so.0.3.0",
      "include/libusb-1.0/libusb.h",
      "include/libusb-1.0/libusbi.h",
    ],
    cmd = "tree . &&\
        cd external/libusb/ && \
        mkdir -p ../../$(GENDIR)/external/libusb/include && \
        cp libusb/libusbi.h ../../$(GENDIR)/external/libusb/include/libusb-1.0 && \
        ./autogen.sh && \
        ./configure --prefix=`pwd`/../../$(GENDIR)/external/libusb && \
        make -sj && \
        make install && \
        tree `pwd`/../../$(GENDIR)"
)
