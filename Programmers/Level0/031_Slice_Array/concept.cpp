#include <iostream>
#include <vector>
using namespace std;

// 개념: vector 범위 자르기
// vector 생성자에 begin+offset, end+offset 을 넘기면 그 범위만 복사된 새 vector가 만들어진다.

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // 인덱스 1부터 3까지 자르기 → [2, 3, 4]
    vector<int> sliced(v.begin() + 1, v.begin() + 3 + 1);

    for (int x : sliced)
    {
        cout << x << " ";  // 출력: 2 3 4
    }
    cout << "\n";
}
