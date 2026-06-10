#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 배열 두 배 만들기
// numbers의 각 원소에 두배한 원소를 가진 배열을 return
// ============================================================

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    // 여기에 작성하세요

    for (int x : numbers) {
        answer.push_back(x*2);
    }
    return answer;
}
