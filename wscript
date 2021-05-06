from waflib.extras.test_base import summary


def depends(dep):
    dep("code-format")


def options(opt):
    opt.load("compiler_cxx")
    opt.load("gtest")


def configure(cfg):
    cfg.load("compiler_cxx")
    cfg.load("gtest")


def build(bld):
    bld(target="bss-hw-params_inc",
        export_includes="include")

    bld(target="bss-hw-params_swtests",
        features="gtest cxx cxxprogram",
        source=bld.path.ant_glob("tests/**/*.cpp"),
        use=["bss-hw-params_inc"])

    bld.add_post_fun(summary)
