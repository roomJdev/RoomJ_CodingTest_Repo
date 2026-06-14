#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ============================================================
// [v1] 배열 뒤집기
// num_list 원소의 순서를 거꾸로 뒤집은 배열을 return
// ============================================================

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;

// 방법 1
    // for (int i = num_list.size()-1; i>=0; i--)
    // {
    //     answer.push_back(num_list[i]);
    // }

    // 방법 2
    reverse(num_list.begin(), num_list.end());
    answer = num_list;
    return answer;
}
