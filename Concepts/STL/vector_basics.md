# vector 기본 사용법

`vector`는 크기가 동적으로 늘어나는 배열이다.

## 선언과 초기화

```cpp
#include <vector>
using namespace std;

vector<int> v1;              // 빈 vector
vector<int> v2 = {1, 2, 3}; // 초기값과 함께 선언
vector<int> v3(5, 0);        // 크기 5, 모든 원소 0으로 초기화
```

## 원소 추가 — push_back

```cpp
vector<int> v;
v.push_back(5);  // [5]
v.push_back(4);  // [5, 4]
```

## 초기화 리스트로 한 번에 할당

```cpp
vector<int> answer;
answer = {10, 8};  // [10, 8]
```

## 원소 접근 및 순회

```cpp
vector<int> v = {1, 2, 3};

// 인덱스 접근
cout << v[0] << "\n";  // 1

// 범위 기반 for
for (int x : v) {
    cout << x << "\n";
}
```

## 크기 확인

```cpp
vector<int> v = {1, 2, 3};
cout << v.size() << "\n";  // 3
```
