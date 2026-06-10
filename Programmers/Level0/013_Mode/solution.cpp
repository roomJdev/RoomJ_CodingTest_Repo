#include <string>
#include <vector>
#include <map>
using namespace std;

// ============================================================
// [v1] 최빈값 구하기
// 최빈값을 return, 최빈값이 여러 개이면 -1을 return
// ============================================================

int solution(vector<int> array)
{
    int answer = 0;

    //  map으로 array의 요소의 값 & 횟수 기록
    map<int, int> my_map;

    for (int x: array)
    {
        my_map[x]++; // array를 순회하면서 각 요소별로 값 1씩 증가
        // 예시: array = {1, 2, 3, 3, 3, 4} → my_map = {1:1, 2:1, 3:3, 4:1}
    }
    // p.first : 요소 값
    // p.second : 요소의 등장 횟수

    // 최대 횟수 찾기
    int max_count = 0;
    for (auto &p: my_map)
    {
        if (p.second > max_count)
        {
            max_count = p.second;
            // my_map을 순회하면서 p.second 값들을 조회하면서 그 중 가장 큰 값 (최빈값)을 max_count에 저장
        }
    }


    // map에서 최대 횟수 찾기
    int cntCheck = 0;
    int mode = 0; // 최빈값 숫자 저장용 변수

    for (auto &p: my_map)
    {
        // my_map의 각 요소 p(pair)에 대해 for문 수행
        // 최빈값이 여러 개인지 아닌지 확인 필요
        if (p.second == max_count)
        {
            cntCheck++;
            mode = p.first;
        }
    }

    // answer = (cntCheck)?max_count:-1;

    if (cntCheck == 1)
    {
        answer = mode;;
    } else
    {
        answer = -1;
    }

    return answer;
}
