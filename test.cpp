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

