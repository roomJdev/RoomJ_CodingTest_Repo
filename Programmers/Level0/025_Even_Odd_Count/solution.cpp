#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 짝수 홀수 개수
// num_list에서 짝수와 홀수의 개수를 [짝수 개수, 홀수 개수] 로 return
// ============================================================

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;

int evenNum=0;
    int oddNum = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i]%2==0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
    }

    answer.push_back(evenNum);
    answer.push_back(oddNum);
    return answer;
}
