load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
package(
    default_visibility = ["//visibility:public"],
)

filegroup(
    name = "libcryptopp_fg",
    srcs = [
      "include/cryptopp/3way.h",
      "include/cryptopp/adler32.h",
      "include/cryptopp/adv_simd.h",
      "include/cryptopp/aes_armv4.h",
      "include/cryptopp/aes.h",
      "include/cryptopp/algebra.h",
      "include/cryptopp/algparam.h",
      "include/cryptopp/arc4.h",
      "include/cryptopp/argnames.h",
      "include/cryptopp/aria.h",
      "include/cryptopp/arm_simd.h",
      "include/cryptopp/asn.h",
      "include/cryptopp/authenc.h",
      "include/cryptopp/base32.h",
      "include/cryptopp/base64.h",
      "include/cryptopp/basecode.h",
      "include/cryptopp/bench.h",
      "include/cryptopp/blake2.h",
      "include/cryptopp/blowfish.h",
      "include/cryptopp/blumshub.h",
      "include/cryptopp/camellia.h",
      "include/cryptopp/cast.h",
      "include/cryptopp/cbcmac.h",
      "include/cryptopp/ccm.h",
      "include/cryptopp/chacha.h",
      "include/cryptopp/chachapoly.h",
      "include/cryptopp/cham.h",
      "include/cryptopp/channels.h",
      "include/cryptopp/cmac.h",
      "include/cryptopp/config.h",
      "include/cryptopp/cpu.h",
      "include/cryptopp/crc.h",
      "include/cryptopp/cryptlib.h",
      "include/cryptopp/darn.h",
      "include/cryptopp/default.h",
      "include/cryptopp/des.h",
      "include/cryptopp/dh2.h",
      "include/cryptopp/dh.h",
      "include/cryptopp/dll.h",
      "include/cryptopp/dmac.h",
      "include/cryptopp/donna_32.h",
      "include/cryptopp/donna_64.h",
      "include/cryptopp/donna.h",
      "include/cryptopp/donna_sse.h",
      "include/cryptopp/drbg.h",
      "include/cryptopp/dsa.h",
      "include/cryptopp/eax.h",
      "include/cryptopp/ec2n.h",
      "include/cryptopp/eccrypto.h",
      "include/cryptopp/ecp.h",
      "include/cryptopp/ecpoint.h",
      "include/cryptopp/elgamal.h",
      "include/cryptopp/emsa2.h",
      "include/cryptopp/eprecomp.h",
      "include/cryptopp/esign.h",
      "include/cryptopp/factory.h",
      "include/cryptopp/fhmqv.h",
      "include/cryptopp/files.h",
      "include/cryptopp/filters.h",
      "include/cryptopp/fips140.h",
      "include/cryptopp/fltrimpl.h",
      "include/cryptopp/gcm.h",
      "include/cryptopp/gf2_32.h",
      "include/cryptopp/gf256.h",
      "include/cryptopp/gf2n.h",
      "include/cryptopp/gfpcrypt.h",
      "include/cryptopp/gost.h",
      "include/cryptopp/gzip.h",
      "include/cryptopp/hashfwd.h",
      "include/cryptopp/hc128.h",
      "include/cryptopp/hc256.h",
      "include/cryptopp/hex.h",
      "include/cryptopp/hight.h",
      "include/cryptopp/hkdf.h",
      "include/cryptopp/hmac.h",
      "include/cryptopp/hmqv.h",
      "include/cryptopp/hrtimer.h",
      "include/cryptopp/ida.h",
      "include/cryptopp/idea.h",
      "include/cryptopp/integer.h",
      "include/cryptopp/iterhash.h",
      "include/cryptopp/kalyna.h",
      "include/cryptopp/keccak.h",
      "include/cryptopp/lea.h",
      "include/cryptopp/lubyrack.h",
      "include/cryptopp/luc.h",
      "include/cryptopp/mars.h",
      "include/cryptopp/md2.h",
      "include/cryptopp/md4.h",
      "include/cryptopp/md5.h",
      "include/cryptopp/mdc.h",
      "include/cryptopp/mersenne.h",
      "include/cryptopp/misc.h",
      "include/cryptopp/modarith.h",
      "include/cryptopp/modes.h",
      "include/cryptopp/modexppc.h",
      "include/cryptopp/mqueue.h",
      "include/cryptopp/mqv.h",
      "include/cryptopp/naclite.h",
      "include/cryptopp/nbtheory.h",
      "include/cryptopp/nr.h",
      "include/cryptopp/oaep.h",
      "include/cryptopp/oids.h",
      "include/cryptopp/osrng.h",
      "include/cryptopp/ossig.h",
      "include/cryptopp/padlkrng.h",
      "include/cryptopp/panama.h",
      "include/cryptopp/pch.h",
      "include/cryptopp/pkcspad.h",
      "include/cryptopp/poly1305.h",
      "include/cryptopp/polynomi.h",
      "include/cryptopp/ppc_simd.h",
      "include/cryptopp/pssr.h",
      "include/cryptopp/pubkey.h",
      "include/cryptopp/pwdbased.h",
      "include/cryptopp/queue.h",
      "include/cryptopp/rabbit.h",
      "include/cryptopp/rabin.h",
      "include/cryptopp/randpool.h",
      "include/cryptopp/rc2.h",
      "include/cryptopp/rc5.h",
      "include/cryptopp/rc6.h",
      "include/cryptopp/rdrand.h",
      "include/cryptopp/resource.h",
      "include/cryptopp/rijndael.h",
      "include/cryptopp/ripemd.h",
      "include/cryptopp/rng.h",
      "include/cryptopp/rsa.h",
      "include/cryptopp/rw.h",
      "include/cryptopp/safer.h",
      "include/cryptopp/salsa.h",
      "include/cryptopp/scrypt.h",
      "include/cryptopp/seal.h",
      "include/cryptopp/secblock.h",
      "include/cryptopp/seckey.h",
      "include/cryptopp/seed.h",
      "include/cryptopp/serpent.h",
      "include/cryptopp/serpentp.h",
      "include/cryptopp/sha3.h",
      "include/cryptopp/shacal2.h",
      "include/cryptopp/sha.h",
      "include/cryptopp/shake.h",
      "include/cryptopp/shark.h",
      "include/cryptopp/simeck.h",
      "include/cryptopp/simon.h",
      "include/cryptopp/simple.h",
      "include/cryptopp/siphash.h",
      "include/cryptopp/skipjack.h",
      "include/cryptopp/sm3.h",
      "include/cryptopp/sm4.h",
      "include/cryptopp/smartptr.h",
      "include/cryptopp/sosemanuk.h",
      "include/cryptopp/speck.h",
      "include/cryptopp/square.h",
      "include/cryptopp/stdcpp.h",
      "include/cryptopp/strciphr.h",
      "include/cryptopp/tea.h",
      "include/cryptopp/threefish.h",
      "include/cryptopp/tiger.h",
      "include/cryptopp/trap.h",
      "include/cryptopp/trunhash.h",
      "include/cryptopp/ttmac.h",
      "include/cryptopp/tweetnacl.h",
      "include/cryptopp/twofish.h",
      "include/cryptopp/validate.h",
      "include/cryptopp/vmac.h",
      "include/cryptopp/wake.h",
      "include/cryptopp/whrlpool.h",
      "include/cryptopp/words.h",
      "include/cryptopp/xed25519.h",
      "include/cryptopp/xtrcrypt.h",
      "include/cryptopp/xtr.h",
      "include/cryptopp/zdeflate.h",
      "include/cryptopp/zinflate.h",
      "include/cryptopp/zlib.h",
    ],
)

cc_library(
    name = "libcryptopp",
    srcs = [
      ":libcryptopp_genrule",
      ],
    hdrs = [
      ":libcryptopp_fg",
    ],
    linkstatic = 1,
    strip_include_prefix = "include",
)

genrule(
    name = "libcryptopp_genrule",
    srcs = glob(
      ["**",],
      exclude = [
      "**/msvc/**",
      "**/Xcode/**",
    ]),
    outs = [
      "lib/libcryptopp.a",
      "include/cryptopp/3way.h",
      "include/cryptopp/adler32.h",
      "include/cryptopp/adv_simd.h",
      "include/cryptopp/aes_armv4.h",
      "include/cryptopp/aes.h",
      "include/cryptopp/algebra.h",
      "include/cryptopp/algparam.h",
      "include/cryptopp/arc4.h",
      "include/cryptopp/argnames.h",
      "include/cryptopp/aria.h",
      "include/cryptopp/arm_simd.h",
      "include/cryptopp/asn.h",
      "include/cryptopp/authenc.h",
      "include/cryptopp/base32.h",
      "include/cryptopp/base64.h",
      "include/cryptopp/basecode.h",
      "include/cryptopp/bench.h",
      "include/cryptopp/blake2.h",
      "include/cryptopp/blowfish.h",
      "include/cryptopp/blumshub.h",
      "include/cryptopp/camellia.h",
      "include/cryptopp/cast.h",
      "include/cryptopp/cbcmac.h",
      "include/cryptopp/ccm.h",
      "include/cryptopp/chacha.h",
      "include/cryptopp/chachapoly.h",
      "include/cryptopp/cham.h",
      "include/cryptopp/channels.h",
      "include/cryptopp/cmac.h",
      "include/cryptopp/config.h",
      "include/cryptopp/cpu.h",
      "include/cryptopp/crc.h",
      "include/cryptopp/cryptlib.h",
      "include/cryptopp/darn.h",
      "include/cryptopp/default.h",
      "include/cryptopp/des.h",
      "include/cryptopp/dh2.h",
      "include/cryptopp/dh.h",
      "include/cryptopp/dll.h",
      "include/cryptopp/dmac.h",
      "include/cryptopp/donna_32.h",
      "include/cryptopp/donna_64.h",
      "include/cryptopp/donna.h",
      "include/cryptopp/donna_sse.h",
      "include/cryptopp/drbg.h",
      "include/cryptopp/dsa.h",
      "include/cryptopp/eax.h",
      "include/cryptopp/ec2n.h",
      "include/cryptopp/eccrypto.h",
      "include/cryptopp/ecp.h",
      "include/cryptopp/ecpoint.h",
      "include/cryptopp/elgamal.h",
      "include/cryptopp/emsa2.h",
      "include/cryptopp/eprecomp.h",
      "include/cryptopp/esign.h",
      "include/cryptopp/factory.h",
      "include/cryptopp/fhmqv.h",
      "include/cryptopp/files.h",
      "include/cryptopp/filters.h",
      "include/cryptopp/fips140.h",
      "include/cryptopp/fltrimpl.h",
      "include/cryptopp/gcm.h",
      "include/cryptopp/gf2_32.h",
      "include/cryptopp/gf256.h",
      "include/cryptopp/gf2n.h",
      "include/cryptopp/gfpcrypt.h",
      "include/cryptopp/gost.h",
      "include/cryptopp/gzip.h",
      "include/cryptopp/hashfwd.h",
      "include/cryptopp/hc128.h",
      "include/cryptopp/hc256.h",
      "include/cryptopp/hex.h",
      "include/cryptopp/hight.h",
      "include/cryptopp/hkdf.h",
      "include/cryptopp/hmac.h",
      "include/cryptopp/hmqv.h",
      "include/cryptopp/hrtimer.h",
      "include/cryptopp/ida.h",
      "include/cryptopp/idea.h",
      "include/cryptopp/integer.h",
      "include/cryptopp/iterhash.h",
      "include/cryptopp/kalyna.h",
      "include/cryptopp/keccak.h",
      "include/cryptopp/lea.h",
      "include/cryptopp/lubyrack.h",
      "include/cryptopp/luc.h",
      "include/cryptopp/mars.h",
      "include/cryptopp/md2.h",
      "include/cryptopp/md4.h",
      "include/cryptopp/md5.h",
      "include/cryptopp/mdc.h",
      "include/cryptopp/mersenne.h",
      "include/cryptopp/misc.h",
      "include/cryptopp/modarith.h",
      "include/cryptopp/modes.h",
      "include/cryptopp/modexppc.h",
      "include/cryptopp/mqueue.h",
      "include/cryptopp/mqv.h",
      "include/cryptopp/naclite.h",
      "include/cryptopp/nbtheory.h",
      "include/cryptopp/nr.h",
      "include/cryptopp/oaep.h",
      "include/cryptopp/oids.h",
      "include/cryptopp/osrng.h",
      "include/cryptopp/ossig.h",
      "include/cryptopp/padlkrng.h",
      "include/cryptopp/panama.h",
      "include/cryptopp/pch.h",
      "include/cryptopp/pkcspad.h",
      "include/cryptopp/poly1305.h",
      "include/cryptopp/polynomi.h",
      "include/cryptopp/ppc_simd.h",
      "include/cryptopp/pssr.h",
      "include/cryptopp/pubkey.h",
      "include/cryptopp/pwdbased.h",
      "include/cryptopp/queue.h",
      "include/cryptopp/rabbit.h",
      "include/cryptopp/rabin.h",
      "include/cryptopp/randpool.h",
      "include/cryptopp/rc2.h",
      "include/cryptopp/rc5.h",
      "include/cryptopp/rc6.h",
      "include/cryptopp/rdrand.h",
      "include/cryptopp/resource.h",
      "include/cryptopp/rijndael.h",
      "include/cryptopp/ripemd.h",
      "include/cryptopp/rng.h",
      "include/cryptopp/rsa.h",
      "include/cryptopp/rw.h",
      "include/cryptopp/safer.h",
      "include/cryptopp/salsa.h",
      "include/cryptopp/scrypt.h",
      "include/cryptopp/seal.h",
      "include/cryptopp/secblock.h",
      "include/cryptopp/seckey.h",
      "include/cryptopp/seed.h",
      "include/cryptopp/serpent.h",
      "include/cryptopp/serpentp.h",
      "include/cryptopp/sha3.h",
      "include/cryptopp/shacal2.h",
      "include/cryptopp/sha.h",
      "include/cryptopp/shake.h",
      "include/cryptopp/shark.h",
      "include/cryptopp/simeck.h",
      "include/cryptopp/simon.h",
      "include/cryptopp/simple.h",
      "include/cryptopp/siphash.h",
      "include/cryptopp/skipjack.h",
      "include/cryptopp/sm3.h",
      "include/cryptopp/sm4.h",
      "include/cryptopp/smartptr.h",
      "include/cryptopp/sosemanuk.h",
      "include/cryptopp/speck.h",
      "include/cryptopp/square.h",
      "include/cryptopp/stdcpp.h",
      "include/cryptopp/strciphr.h",
      "include/cryptopp/tea.h",
      "include/cryptopp/threefish.h",
      "include/cryptopp/tiger.h",
      "include/cryptopp/trap.h",
      "include/cryptopp/trunhash.h",
      "include/cryptopp/ttmac.h",
      "include/cryptopp/tweetnacl.h",
      "include/cryptopp/twofish.h",
      "include/cryptopp/validate.h",
      "include/cryptopp/vmac.h",
      "include/cryptopp/wake.h",
      "include/cryptopp/whrlpool.h",
      "include/cryptopp/words.h",
      "include/cryptopp/xed25519.h",
      "include/cryptopp/xtrcrypt.h",
      "include/cryptopp/xtr.h",
      "include/cryptopp/zdeflate.h",
      "include/cryptopp/zinflate.h",
      "include/cryptopp/zlib.h",
    ],
    cmd = "tree . &&\
        cd external/libcryptopp/ && \
        mkdir -p ../../$(GENDIR)/external/libcryptopp/ && \
        make -j8 && \
        make install PREFIX=`pwd`/../../$(GENDIR)/external/libcryptopp && \
        tree `pwd`/../../$(GENDIR)"
)
