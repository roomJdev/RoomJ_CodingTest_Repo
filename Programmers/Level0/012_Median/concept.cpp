#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 개념 1: sort() — 오름차순 정렬
void example_sort() {
    vector<int> v = {9, -1, 0};

    sort(v.begin(), v.end());  // 오름차순 → [-1, 0, 9]

    for (int x : v) {
        cout << x << " ";  // 출력: -1 0 9
    }
    cout << "\n";
}

// 개념 2: 가운데 인덱스 접근
// 길이가 홀수인 배열에서 중앙 인덱스 = size / 2
void example_median() {
    vector<int> v = {1, 2, 7, 10, 11};

    sort(v.begin(), v.end());

    int mid = v.size() / 2;       // 5 / 2 = 2
    cout << v[mid] << "\n";       // 출력: 7
}

int main() {
    example_sort();
    example_median();
    return 0;
}
