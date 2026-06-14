#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 특정 문자 제거하기
// my_string에서 letter를 제거한 문자열을 return
// ============================================================

string solution(string my_string, string letter)
{
    string answer = "";
    //
    // for (int i = 0; i < my_string.length(); i++)
    // {
    //     if (my_string[i] == letter[0])
    //     {
    //         answer += "";
    //     } else
    //     {
    //         answer += my_string[i];
    //     }
    // }

    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] != letter[0])
        {
            answer += my_string[i];
        }
    }
    return answer;
}
