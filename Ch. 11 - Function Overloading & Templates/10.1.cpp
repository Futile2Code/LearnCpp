// define your factorial() function template here
template <int N>
constexpr auto factorial() -> int
{
    static_assert(N >= 0 && "Factorial is only defined for positive integers!");    
    return N * factorial<N - 1>();
}

template<>
constexpr auto factorial<0>() -> int
{
    return 1;
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

 // factorial<-3>(); // should fail to compile

    return 0;
}
