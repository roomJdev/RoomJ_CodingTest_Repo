#include <string>
#include <vector>
#include <numeric>
using namespace std;

// ============================================================
// [v1] 피자 나눠 먹기 (2)
// n명이 6조각 피자를 남기지 않고 모두 같은 수로 먹으려면 필요한 판 수를 return
// ============================================================

int solution(int n)
{
    int answer = 0;

    answer = lcm(6, n) / 6;
    return answer;
}
