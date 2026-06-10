# map 기본 사용법

키-값(key-value) 쌍을 저장하는 자료구조. 키를 기준으로 자동 오름차순 정렬된다.

## 선언과 기본 사용

```cpp
#include <map>
using namespace std;

map<int, int> m;  // <키 타입, 값 타입>

m[3] = 1;   // 키 3에 값 1 저장
m[3]++;     // 키 3의 값 증가 → 2
m[1]++;     // 키 1의 값 1로 초기화 후 증가
```

## 등장 횟수 세기 패턴

```cpp
vector<int> v = {1, 2, 3, 3, 3, 4};
map<int, int> m;  // <숫자, 등장 횟수>

for (int x : v) {
    m[x]++;  // 등장할 때마다 횟수 증가
}
// m = {1:1, 2:1, 3:3, 4:1}
```

## 순회 — auto& p

```cpp
for (auto& p : m) {
    cout << p.first << ": " << p.second << "\n";
    // p.first  = 키 (숫자 값)
    // p.second = 값 (등장 횟수)
}
```

## 코딩 테스트 적용 예시 — 최빈값 구하기

```cpp
// 1단계: 횟수 세기
map<int, int> my_map;
for (int x : array) my_map[x]++;

// 2단계: 최대 횟수 찾기
int max_count = 0;
for (auto& p : my_map) {
    if (p.second > max_count)
        max_count = p.second;
}

// 3단계: 최대 횟수인 숫자 개수 & 값 확인
int cntCheck = 0, mode = 0;
for (auto& p : my_map) {
    if (p.second == max_count) {
        cntCheck++;
        mode = p.first;  // 숫자 값 저장
    }
}

answer = (cntCheck == 1) ? mode : -1;
```
