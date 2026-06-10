#include <iostream>
#include <vector>
using namespace std;

// 개념: vector에 값 추가하기 — push_back
void example_push_back() {
    vector<int> v;   // 빈 vector 선언

    v.push_back(5);  // 뒤에 추가 → [5]
    v.push_back(4);  // 뒤에 추가 → [5, 4]

    for (int x : v) {
        cout << x << " ";  // 출력: 5 4
    }
    cout << "\n";
}

// 개념: 분수 덧셈
// numer1/denom1 + numer2/denom2
//   = (numer1*denom2 + numer2*denom1) / (denom1*denom2)
void example_fraction_add() {
    int numer1 = 1, denom1 = 2;
    int numer2 = 3, denom2 = 4;

    int result_numer = numer1 * denom2 + numer2 * denom1;  // 1*4 + 3*2 = 10 → 하지만 약분 전
    int result_denom = denom1 * denom2;                     // 2*4 = 8

    cout << result_numer << "/" << result_denom << "\n";  // 출력: 10/8 (약분 전)
}

int main() {
    example_push_back();
    example_fraction_add();
    return 0;
}
