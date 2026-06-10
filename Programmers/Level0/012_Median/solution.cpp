#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ============================================================
// [v1] 중앙값 구하기
// 정수 배열 array의 중앙값을 return (array 길이는 항상 홀수)
// ============================================================

int solution(vector<int> array) {
    int answer = 0;

    // 여기에 작성하세요
    sort(array.begin(), array.end());
    answer = array[array.size()/2];

    return answer;
}
