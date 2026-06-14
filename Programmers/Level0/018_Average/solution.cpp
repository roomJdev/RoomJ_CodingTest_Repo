#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 배열의 평균값
// numbers 원소의 평균값을 return
// ============================================================

double solution(vector<int> numbers)
{
    double answer = 0;

    int sum = 0;

    for ( int x : numbers)
    {
        sum +=x;
    }
    answer = (double) sum / numbers.size();

    return answer;
}
