#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 머쓱이보다 키 큰 사람
// array에서 height보다 큰 원소의 개수를 return
// ============================================================

// [v1-1] 인덱스 기반 for
int solution(vector<int> array, int height) {
    int answer = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > height) {
            answer++;
        }
    }
    return answer;
}
