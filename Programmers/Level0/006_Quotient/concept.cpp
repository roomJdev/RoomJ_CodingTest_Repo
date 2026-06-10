#include <iostream>
using namespace std;

// 개념: 산술 연산자 — 나누기 (몫)
void example_division() {
    int a = 10;
    int b = 5;

    int result = a / b;  // 2 — int끼리 나누면 소수점 버림, 몫만 남음

    cout << result << "\n";  // 출력: 2

    // 주의: 소수점이 생기는 경우
    int c = 7;
    int d = 2;
    cout << c / d << "\n";  // 출력: 3 (3.5에서 소수점 버림)
}

int main() {
    example_division();
    return 0;
}
