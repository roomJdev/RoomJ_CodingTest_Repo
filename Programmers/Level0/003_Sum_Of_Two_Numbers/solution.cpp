#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 두 수의 합 구하기
// num1과 num2의 합을 return
/*제한사항
-50,000 ≤ num1 ≤ 50,000
-50,000 ≤ num2 ≤ 50,000
*/
// ============================================================

int solution(int num1, int num2) {
    int answer = -1;

    if (num1 >=-50000 && num1 <= 50000 && num2 >= -50000 && num2 <= 50000) {
        answer = num1 + num2;
    }


    return answer;
}
