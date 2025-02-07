#indef SEQUENCE_H
#define SEQUENCE_H

class Art_Sequence
{
    long long ft, d;
public :
    Art_Sequence(long long ft, long long d);
    Art_Sequence(long long ft);
    Art_Sequence();
    set(long long ft);
    set(long long d);
    set(long long ft, long long d);
    long long get_term(n);
    long long get_sum(n);
};

#endif SEQUENCE_H