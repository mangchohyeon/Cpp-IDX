#include "fraction.h"
#include <algorithm> // std::gcd

// 생성자: 기본 및 분수 초기화
fraction::fraction(long long n, long long d) : num(n), den(d) {
    reduce();
}

// 정수를 fraction으로 변환하는 생성자
fraction::fraction(int n) : num(n), den(1) {}

// 약분하는 함수
void fraction::reduce() {
    long long g = std::gcd(num, den);
    num /= g;
    den /= g;
    // 분모를 항상 양수로 유지
    if (den < 0) {
        num = -num;
        den = -den;
    }
}

// 덧셈 연산자 오버로딩
fraction fraction::operator+(const fraction& other) const {
    return fraction(num * other.den + other.num * den, den * other.den);
}

// 뺄셈 연산자 오버로딩
fraction fraction::operator-(const fraction& other) const {
    return fraction(num * other.den - other.num * den, den * other.den);
}

// 곱셈 연산자 오버로딩
fraction fraction::operator*(const fraction& other) const {
    return fraction(num * other.num, den * other.den);
}

// 나눗셈 연산자 오버로딩
fraction fraction::operator/(const fraction& other) const {
    return fraction(num * other.den, den * other.num);
}

// 출력 연산자 오버로딩
std::ostream& operator<<(std::ostream& os, const fraction& f) {
    if (f.den == 1)
        os << f.num; // 정수로 출력
    else
        os << f.num << "/" << f.den;
    return os;
}