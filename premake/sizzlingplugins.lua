
solution "SizzlingPlugins"
    basedir ".."
    location (_ACTION)
    startproject "SizzlingStats"
    platforms "x32"
    
    vectorextensions "SSE2"
    floatingpoint "Fast"
    warnings "Default"
    
    vpaths
    {
        ["Header Files"] = { "../**.h", "../**.hxx", "../**.hpp" },
        ["Source Files"] = { "../**.c", "../**.cxx", "../**.cpp", "../**.cc" },
        ["Protobuf"] = { "../**.proto" },
        ["*"] = "../**.licenseheader"
    }
    flags
    {
        "StaticRuntime",
        "NoExceptions",
        "Symbols"
    }
    defines
    {
    }
    
    -- build configurations
    configurations { "Debug", "Release" }
    configuration "Debug"
        targetdir (_ACTION .. "/build/Debug")
        defines
        {
            "_DEBUG"
        }
    configuration "Release"
        targetdir (_ACTION .. "/build/Release")
        optimize "Full"
        defines
        {
            "NDEBUG"
        }
        flags
        {
            "LinkTimeOptimization",
            "MultiProcessorCompile"
        }
    
    -- os specific configurations
    configuration "windows"
        defines
        {
            "_WINDOWS",
            "_WIN32",
            "WIN32",
            "_CRT_SECURE_NO_DEPRECATE",
            "_CRT_NONSTDC_NO_DEPRECATE",
            "_CRT_SECURE_NO_WARNINGS",
            "_CRT_NONSTDC_NO_WARNINGS"
        }
    configuration "linux"
        toolset "clang"
    
    -- compiler specific configurations
    configuration "vs*"
        buildoptions
        {
            -- warning C4530: C++ exception handler used,
            -- but unwind semantics are not enabled.
            "/EHsc"
        }
    configuration {}
    
    -- the projects
    dofile "libcurl.lua"
    dofile "polarssl.lua"
    dofile "snappy.lua"
    dofile "protobuf_lite.lua"
    
    -- having files "../sizzlingplugins.licenseheader"
    -- after the dofile adds it to the project
    dofile "sizzlinglib.lua"
    files "../sizzlingplugins.licenseheader"
    
    dofile "sizzlingstats.lua"
    files "../sizzlingplugins.licenseheader"
    
    dofile "autotimer.lua"
    files "../sizzlingplugins.licenseheader"
    
    dofile "new_plugin.lua"
    files "../sizzlingplugins.licenseheader"
    
    dofile "sizzlingmatches.lua"
    files "../sizzlingplugins.licenseheader"
    
    dofile "sizzlingrecord.lua"
    files "../sizzlingplugins.licenseheader"