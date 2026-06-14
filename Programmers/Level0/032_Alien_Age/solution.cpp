#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 외계행성의 나이
// a=0, b=1, ..., j=9 규칙으로 age를 알파벳 문자열로 변환해서 return
// ============================================================

string solution(int age)
{
    string answer = "";

    if (age/1000!=0)
    {
        answer += 'a'+age/1000;
        answer += 'a' + age%1000/100;
        answer += 'a' + age%100/10;
        answer += 'a' + age%10;
    }
    else
    {
        if (age/100!=0)
        {
            answer += 'a'+age/100;
            answer += 'a' + age%100/10;
            answer += 'a' + age%10;
        }
        else
        {

            if (age/10!=0)
            {
                answer += 'a'+age/10;
                answer += 'a' + age%10;
            }
            else
            {

                if (age%10!=0)
                {
                    answer += 'a'+age;
                }
            }
        }
    }

    return answer;
}

// ============================================================
// [v2] while 루프 버전 — 자리수와 관계없이 동작
// ============================================================

// string solution(int age)
// {
//     string answer = "";
//     while (age > 0)
//     {
//         answer = (char)('a' + age % 10) + answer;   // 앞에 붙이기
//         age /= 10;
//     }
//     return answer;
// }
