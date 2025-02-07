#include <iostream>
#include "/home/user/Cpp-IDX/Sequence/sequence.h"
#include "/home/user/Cpp-IDX/Fraction/fraction.h"
using namespace std;

int main()
{
    Art_Sequence an((fraction)3/5, (fraction)-3/20);
    double s3 = an.get_sum(3), s6 = an.get_sum(6),s11 = an.get_sum(11);
     



    return 0;
}