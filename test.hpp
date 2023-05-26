#ifndef TEST_HPP
#define TEST_HPP

namespace test_lib
{
    // real original my guy
    void f(void);
};


extern "C"
{
    namespace test_lib_extern
    {
        void g(void);
        void h(void);
    }
}

#endif //TEST_HPP

