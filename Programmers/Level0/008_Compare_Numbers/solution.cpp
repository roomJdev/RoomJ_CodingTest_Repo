#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 숫자 비교하기
// num1과 num2가 같으면 1, 다르면 -1을 return
// ============================================================

int solution(int num1, int num2) {
    int answer = 0;

    // 여기에 작성하세요
    if(num1==num2)
    {
        answer = 1;
    }
    else
    {
        answer = -1;
    }
    return answer;
}
