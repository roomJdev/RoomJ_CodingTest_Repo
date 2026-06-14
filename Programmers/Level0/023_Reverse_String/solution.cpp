#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ============================================================
// [v1] 뒤집힌 문자열
// my_string을 거꾸로 뒤집은 문자열을 return
// ============================================================

string solution(string my_string)
{
    string answer = "";

// Ver1

    for (int i = my_string.length()-1; i>=0;i--)
    {
        answer.push_back(my_string[i]);
    }
    //Ver 2
    reverse(my_string.begin(), my_string.end());
    answer = my_string;
    return answer;
}
