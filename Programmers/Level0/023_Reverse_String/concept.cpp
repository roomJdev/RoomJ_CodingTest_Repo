#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 개념 1: string 기본 접근
void example_string()
{
    string s = "jaron";

    cout << s.size() << "\n";  // 5 — 길이
    cout << s[0]     << "\n";  // 'j' — 인덱스 접근
    cout << s[4]     << "\n";  // 'n'
}

// 개념 2: string 뒤집기
void example_reverse()
{
    string s = "jaron";

    // 방법 1: reverse() 함수
    reverse(s.begin(), s.end());
    cout << s << "\n";  // 출력: noraj

    // 방법 2: 뒤에서부터 순회해서 새 string에 추가
    string s2 = "bread";
    string result = "";
    for (int i = s2.size()-1; i >= 0; i--)
    {
        result += s2[i];  // 문자 하나씩 뒤에 붙이기
    }
    cout << result << "\n";  // 출력: daerb
}

int main()
{
    example_string();
    example_reverse();
    return 0;
}
