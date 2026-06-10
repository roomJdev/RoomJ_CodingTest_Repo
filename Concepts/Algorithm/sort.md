# 정렬 — sort()

`<algorithm>` 헤더에 포함된 정렬 함수.

## 기본 사용법

```cpp
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v = {9, -1, 0, 5};

sort(v.begin(), v.end());   // 오름차순 → [-1, 0, 5, 9]
```

## 내림차순 정렬

```cpp
sort(v.begin(), v.end(), greater<int>());  // 내림차순 → [9, 5, 0, -1]
```

## 정렬 후 인덱스 접근

```cpp
vector<int> v = {1, 2, 7, 10, 11};
sort(v.begin(), v.end());

int mid = v.size() / 2;   // 가운데 인덱스 (길이가 홀수일 때)
cout << v[mid] << "\n";   // 중앙값: 7
```

## 코딩 테스트 적용 예시

```cpp
// 중앙값 구하기 — 정렬 후 가운데 인덱스 접근
int solution(vector<int> array) {
    sort(array.begin(), array.end());
    return array[array.size() / 2];
}
```
