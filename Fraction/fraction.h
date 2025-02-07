#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class fraction 
{
private:
    long long num, den; // 분자, 분모

    // 약분하는 함수
    void reduce();

public:
    // 생성자
    fraction(long long n = 0, long long d = 1);
    fraction(int n);

    // 연산자 오버로딩
    fraction operator+(const fraction& other) const;
    fraction operator-(const fraction& other) const;
    fraction operator*(const fraction& other) const;
    fraction operator/(const fraction& other) const;

    // 출력 연산자 오버로딩
    friend std::ostream& operator<<(std::ostream& os, const fraction& f);
};

#endif // FRACTION_H