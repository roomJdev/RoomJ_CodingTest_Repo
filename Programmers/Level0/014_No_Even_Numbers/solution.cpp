#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 짝수는 싫어요
// n 이하의 홀수를 오름차순으로 담은 배열을 return
// ============================================================

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            answer.push_back(i);
        }
    }
//    sort(answer.begin(), answer.end());

    return answer;
}
