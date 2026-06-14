#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 아이스 아메리카노
// 아메리카노 한 잔 = 5500원
// [최대로 마실 수 있는 잔 수, 남는 돈] 을 담은 배열을 return
// ============================================================

vector<int> solution(int money)
{
    vector<int> answer;

answer.push_back(money/5500);
    answer.push_back(money%5500);
    return answer;
}
