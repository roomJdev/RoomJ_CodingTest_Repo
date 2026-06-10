#include <iostream>
using namespace std;

// 개념: 연산 순서에 따른 결과 차이
void example_order_of_operations() {
    int a = 3;
    int b = 2;

    // 나누기 후 곱하기 — 소수점이 먼저 버려져서 틀린 결과
    int wrong  = (a / b) * 1000;  // (1) * 1000 = 1000  (3/2=1.5 → 1로 버림)

    // 곱하기 후 나누기 — 소수점 보존 후 정수 부분 추출
    int correct = (a * 1000) / b;  // 3000 / 2 = 1500

    cout << wrong   << "\n";  // 출력: 1000
    cout << correct << "\n";  // 출력: 1500
}

int main() {
    example_order_of_operations();
    return 0;
}
