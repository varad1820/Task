cc_library(
    name = "Calcy",
    srcs=glob(["Calculator.cpp"]),
    hdrs=glob(["Calculator.h"]),
    deps=[
        "//lib/addition:add",
        "//lib/Division:Divi",
        "//lib/Multipication:Multi",
        "//lib/Subraction:Sub",
    ],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "Build",
    srcs=["main.cpp"],
    deps=[
        ":Calcy",
    ],
)


