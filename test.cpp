#include <iostream>


#include "test.hpp"


namespace test_lib
{
    // real original my guy
    void f(void)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}


namespace test_lib_extern
{
    void g(void)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void h(void)
    {
        // test if we can indirectly obtain access to non-extern-declared functions
        test_lib::f();
    }
}

