#include <iostream>
#include <vector>
using namespace std;

// 개념: double과 형변환 (cast)
void example_double()
{
    int a = 5, b = 2;

    int    result1 = a / b;           // 2   — 소수점 버림
    double result2 = (double)a / b;   // 2.5 — 형변환으로 소수점 유지

    cout << result1 << "\n";  // 출력: 2
    cout << result2 << "\n";  // 출력: 2.5
}

// 개념: 배열 합계 구하기 + 평균
void example_average()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int x : numbers)
    {
        sum += x;  // sum = sum + x
    }

    double avg = (double)sum / numbers.size();
    cout << avg << "\n";  // 출력: 5.5
}

int main()
{
    example_double();
    example_average();
    return 0;
}
