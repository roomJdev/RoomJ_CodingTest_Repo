#include <iostream>
using namespace std;

// 개념: 산술 연산자
void example_arithmetic() {
    int a = 10;
    int b = 3;

    int sum  = a + b;  // 13 — 더하기
    int diff = a - b;  // 7  — 빼기
    int mul  = a * b;  // 30 — 곱하기
    int div  = a / b;  // 3  — 나누기 (소수점 버림)
    int mod  = a % b;  // 1  — 나머지

    cout << sum  << "\n";
    cout << diff << "\n";
    cout << mul  << "\n";
    cout << div  << "\n";
    cout << mod  << "\n";
}

int main() {
    example_arithmetic();
    return 0;
}
