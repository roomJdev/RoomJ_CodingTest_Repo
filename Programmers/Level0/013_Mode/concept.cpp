#include <iostream>
#include <vector>
#include <map>
using namespace std;

// 개념 1: map으로 등장 횟수 세기
void example_count() {
    vector<int> v = {1, 2, 3, 3, 3, 4};
    map<int, int> m;  // <값, 횟수>

    for (int x : v) {
        m[x]++;  // 해당 값의 횟수 1 증가
    }

    // m = {1:1, 2:1, 3:3, 4:1}
    for (auto& p : m) {
        cout << p.first << ": " << p.second << "\n";
    }
}

// 개념 2: map에서 최대 횟수 찾기
void example_max_count() {
    map<int, int> m = {{1,1}, {2,1}, {3,3}, {4,1}};

    int max_count = 0;
    for (auto& p : m) {
        if (p.second > max_count) {
            max_count = p.second;  // 가장 큰 횟수 갱신
        }
    }

    cout << max_count << "\n";  // 출력: 3
}

int main() {
    example_count();
    example_max_count();
    return 0;
}
