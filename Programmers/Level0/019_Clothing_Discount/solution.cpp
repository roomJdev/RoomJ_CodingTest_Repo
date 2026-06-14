#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 옷가게 할인 받기
// 10만원 이상 5%, 30만원 이상 10%, 50만원 이상 20% 할인
// 소수점 이하 버린 정수를 return
// ============================================================

int discount(int price, float rate)
{
    return (int) price * rate;
}
int solution(int price)
{
    int answer = 0;

    if (price >= 500000)
    {
        answer = discount(price, 0.8);
    }
    else if (price >= 300000)
    {
        answer = discount(price, 0.9);
    }
    else if (price >= 100000)
    {
        answer = discount(price, 0.95);
    }
    else
    {
        answer = discount(price, 1);
    }
    return answer;
}
