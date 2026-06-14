#include <iostream>
#include <string>
using namespace std;

// 개념 1: char와 ASCII — 'a'에 숫자를 더하면 해당 알파벳이 나온다
void example_char()
{
    char c = 'a' + 2;   // 'a'(97) + 2 = 'c'(99)
    cout << c << "\n";  // 출력: c

    // 숫자 → 알파벳 변환
    for (int i = 0; i <= 9; i++)
    {
        cout << i << " → " << (char)('a' + i) << "\n";
    }
}

// 개념 2: 각 자리 숫자 추출
// % 10 → 1의 자리
// / 10  → 나머지 자리로 이동
void example_digits()
{
    int n = 23;
    while (n > 0)
    {
        int digit = n % 10;   // 마지막 자리 숫자
        cout << digit << "\n";
        n /= 10;              // 다음 자리로 이동
    }
    // 출력: 3, 2 (뒤에서부터 나옴 — 역순이므로 string에 앞에 붙여야 함)
}

int main()
{
    example_char();
    example_digits();
    return 0;
}
