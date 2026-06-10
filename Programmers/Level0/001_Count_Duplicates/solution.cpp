#include <vector>
using namespace std;

// ============================================================
// [v1] 중복된 숫자 개수
// array에 n이 몇 개 있는지 return
// ============================================================

// [v1-1] 인덱스 기반 for
// int solution(vector<int> array, int n) {
//     int answer = 0;
//     for (int i = 0; i < array.size(); i++) {
//         if (array[i] == n) {
//             answer++;
//         }
//     }
//     return answer;
// }

// [v1-2] 범위 기반 for
int solution(vector<int> array, int n) {
    int answer = 0;
    for (int x : array) {
        if (x == n) {
            answer++;
        }
    }
    return answer;
}


