#include <dlfcn.h>
#include <iostream>
#include <vector>
#include <functional>

//#include "test.hpp"


int main(int argc, char** argv)
{
    //test_lib::f();

    void* tl = dlopen("./libtest_lib.so", RTLD_LAZY);

    if (nullptr == tl)
    {
        return -__LINE__;
    }

    const std::vector<std::string> symbols =
    {
          "f"
        , "g"
        , "h"
        , "test_lib::f"
        , "test_lib_extern::g"
        , "test_lib_extern::h"
    };

    for (const std::string& sym: symbols)
    {
        std::function <const char* (void)> f = reinterpret_cast<const char*(*)(void)>(dlsym(tl, sym.c_str()));

        if (nullptr == f)
        {
            std::cout << "\"" << sym << "\" not found" << std::endl;
        }
        else
        {
            std::cout << "\"" << sym << "\" found :\"" << f() << "\"" << std::endl;
        }
    }


    if (0 != dlclose(tl))
    {
        return -__LINE__;
    }

    return 0;
}

