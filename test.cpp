#include <iostream>


#include "test.hpp"


namespace test_lib
{
    // real original my guy
    const char* f(void)
    {
        return __PRETTY_FUNCTION__;
    }
}


namespace test_lib_extern
{
    const char* g(void)
    {
        return __PRETTY_FUNCTION__;
    }

    const char* h(void)
    {
        // test if we can indirectly obtain access to non-extern-declared functions
        return test_lib::f();
    }
}

