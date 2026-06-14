#include <iostream>
#include <numeric>
using namespace std;

// 방법 1: while 루프로 1판씩 늘려가며 확인
// (판 수 * 6) % n == 0 이면 → 모두 같은 조각 수로 나눌 수 있음
void example_loop()
{
    int n = 10;
    int count = 0;

    while (true)
    {
        count++;                       // 판 수 1 증가
        if ((count * 6) % n == 0)     // 총 조각이 n의 배수인지 확인
        {
            break;
        }
    }

    cout << count << "\n";  // 출력: 5
}

// 방법 2: LCM(최소공배수) 활용
// n명이 6조각을 나눠 먹으려면 → LCM(6, n) / 6 판 필요
void example_lcm()
{
    int n = 10;
    int result = lcm(6, n) / 6;  // LCM(6, 10) = 30 → 30/6 = 5
    cout << result << "\n";      // 출력: 5
}

int main()
{
    example_loop();
    example_lcm();
    return 0;
}
