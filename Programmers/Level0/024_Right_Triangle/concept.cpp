#include <iostream>
using namespace std;

// 개념: 중첩 for 루프 (Nested for loop)
// 바깥 루프: 줄 번호 (1 ~ n)
// 안쪽 루프: 해당 줄에 출력할 * 개수 (1 ~ i)

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)       // 줄 번호
    {
        for (int j = 1; j <= i; j++)   // 해당 줄에 * j개 출력
        {
            cout << "*";
        }
        cout << "\n";  // 줄 바꿈
    }

    return 0;
}
