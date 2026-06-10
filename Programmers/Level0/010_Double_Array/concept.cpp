#include <iostream>
#include <vector>
using namespace std;

// 개념: 배열 순회 + 연산 결과를 새 vector에 담기
void example_transform() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result;

    for (int x : numbers) {
        result.push_back(x * 2);  // 각 원소를 2배해서 추가
    }

    for (int x : result) {
        cout << x << " ";  // 출력: 2 4 6 8 10
    }
    cout << "\n";
}

int main() {
    example_transform();
    return 0;
}
