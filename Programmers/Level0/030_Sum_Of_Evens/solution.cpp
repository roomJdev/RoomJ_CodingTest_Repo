#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 짝수의 합
// n 이하의 짝수를 모두 더한 값을 return
// ============================================================

int solution(int n)
{
    int answer = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            answer += i;
        } else
        {
            answer += 0;
        }
    }
    return answer;
}
