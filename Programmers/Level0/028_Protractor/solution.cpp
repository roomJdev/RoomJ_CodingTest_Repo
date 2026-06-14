#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 각도기
// 예각(0<angle<90)=1, 직각(90)=2, 둔각(90<angle<180)=3, 평각(180)=4
// ============================================================

int solution(int angle)
{
    int answer = 0;

if (angle == 180)
{
    return 4;
}
    else if (angle == 90)
    {
        return 2;
    }
    else if (angle > 90)
    {
        return 3;
    }
    else
    {
        return 1;
    }
    return answer;
}
