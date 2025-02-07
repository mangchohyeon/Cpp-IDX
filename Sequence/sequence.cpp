#include "sequence.h"
#include <iostream>
using namespace std;

Art_Sequence::Art_Sequence(long long ft, long long d)
{
    set(ft, d);
}


Art_Sequence::Art_Sequence(long long ft)
{
    set(ft);
}


Art_Sequence::Art_Sequence();
{
    ft = 0, d = 0;
}

Art_Sequence::set(long long ft)
{
    ft = ft;
}

Art_Sequence::set(long long d)
{
    d = d;
}

Art_Sequence::set(long long ft, long long d)
{
    ft = ft, d = d;
}

long long Art_Sequence::get_term(n)
{
    long long res = a + (n-1)*d;
    return res;
}

long long Art_Sequence::get_sum(n)
{
    long long res = (a + get_term(n))*n/2;
    return res;
}
