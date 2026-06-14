#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 문자 반복 출력하기
// my_string의 각 문자를 n번씩 반복한 문자열을 return
// ============================================================

string solution(string my_string, int n)
{
    string answer = "";

for (int i = 0; i < my_string.length(); i++)
{
    for (int j = 0; j < n; j++)
    {
        answer += my_string[i];
    }
}
    return answer;
}
