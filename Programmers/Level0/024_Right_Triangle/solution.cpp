#include <iostream>
using namespace std;

// ============================================================
// [v1] 직각삼각형 출력하기
// n이 주어지면 높이와 너비가 n인 직각 이등변 삼각형을 출력
// ============================================================

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j  = 0; j < n; j++)
        {
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}
