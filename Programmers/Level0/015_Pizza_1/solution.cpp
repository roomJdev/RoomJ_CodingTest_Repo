#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 피자 나눠 먹기 (1)
// n명이 7조각 피자를 한 조각 이상 먹으려면 필요한 피자 수를 return
// ============================================================

int solution(int n)
{
    int answer = 0;


    // 클로드 솔루션
    int divisor = 7;

    answer = (n + divisor -1) / divisor;

    // 내 솔루션
    // if (n % divisor == 0)
    // {
    //     answer = n / divisor;
    // }
    // else
    // {
    //     answer = n / divisor + 1;
    // }

    return answer;
}
