#ifndef TEST_HPP
#define TEST_HPP

namespace test_lib
{
    // real original my guy
    const char* f(void);
};


extern "C"
{
    namespace test_lib_extern
    {
        const char* g(void);
        const char* h(void);
    }
}

#endif //TEST_HPP

