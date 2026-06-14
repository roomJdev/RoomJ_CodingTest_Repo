#include <iostream>
using namespace std;

// 개념: 올림 나눗셈 (Ceiling Division)
// int / int 는 소수점을 버리므로(내림), 올림이 필요하면 아래 공식을 사용
// (n + (divisor - 1)) / divisor

void example_ceiling_division()
{
    int divisor = 7;

    // 내림 나눗셈 — 나머지가 있어도 버림
    cout << 7  / divisor << "\n";  // 1
    cout << 8  / divisor << "\n";  // 1 (틀림 — 올림하면 2여야 함)
    cout << 15 / divisor << "\n";  // 2 (틀림 — 올림하면 3이어야 함)

    // 올림 나눗셈
    cout << (7  + 6) / divisor << "\n";  // 1
    cout << (8  + 6) / divisor << "\n";  // 2
    cout << (15 + 6) / divisor << "\n";  // 3
}

int main()
{
    example_ceiling_division();
    return 0;
}
