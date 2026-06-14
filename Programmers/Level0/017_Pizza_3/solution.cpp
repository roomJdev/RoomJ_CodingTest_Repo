#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 피자 나눠 먹기 (3)
// n명이 slice조각 피자를 한 조각 이상 먹으려면 필요한 판 수를 return
// ============================================================

int solution(int slice, int n)
{
    int answer = 0;

answer = (n + slice-1)/slice;
    return answer;
}
