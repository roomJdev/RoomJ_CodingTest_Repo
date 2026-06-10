#include <iostream>
using namespace std;

// 개념: if / else if / else — 조건 분기
void example_if_else() {
    int a = 5;
    int b = 5;

    if (a == b) {
        cout << 1 << "\n";   // 같으면 1
    } else {
        cout << -1 << "\n";  // 다르면 -1
    }
}

// 세 가지 이상 분기가 필요할 때 — else if
void example_else_if() {
    int a = 5;
    int b = 3;

    if (a > b) {
        cout << "a가 크다" << "\n";
    } else if (a == b) {
        cout << "같다" << "\n";
    } else {
        cout << "b가 크다" << "\n";
    }
}

int main() {
    example_if_else();
    example_else_if();
    return 0;
}
