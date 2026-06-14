#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 배열 자르기
// numbers의 num1번째 인덱스부터 num2번째 인덱스까지 자른 배열을 return
// ============================================================

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    vector<int> answer;
    vector<int> sliced(numbers.begin() + num1, numbers.begin() + num2+1 );
    answer = sliced;
    return answer;
}
