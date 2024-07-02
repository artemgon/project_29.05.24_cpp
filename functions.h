#include "lib.h" 

template<class T1, class T2>
T2 Gcd(T1 a, T2 b)
{
    if (a == 0)
        return b;
    return Gcd(b % a, a);
}