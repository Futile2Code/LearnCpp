// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>
#include <map>

bool isPrime(int x)
{
    // add static map cache for further optimisation
    static std::map<int, bool> cache{
        {
            {1, false},
            {2, true}
        }
    };
    if (cache.find(x) != cache.end())
        return cache[x];
    if (x % 2 == 0)
        return false;
    for (size_t i = 3; i < x - 1; i += 2)
        if (x % i == 0)
        {
            cache.insert({x, false});
            return false;
        }
    cache.insert({x, true});
    return true;
}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
