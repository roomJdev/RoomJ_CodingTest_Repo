#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 양꼬치
// 양꼬치 1인분 12,000원, 음료수 2,000원
// 10인분마다 음료수 1개 서비스
// n인분과 음료수 k개를 먹었을 때 총 금액을 return
// ============================================================

int solution(int n, int k)
{
    int answer = 0;

answer = n * 12000 + (k-n/10)*2000;
    return answer;
}
