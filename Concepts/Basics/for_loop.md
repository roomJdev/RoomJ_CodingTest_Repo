# for 루프 — 인덱스 기반 vs 범위 기반

## 인덱스 기반 for

`i`라는 위치 정보를 함께 다룬다.
앞뒤 원소(`arr[i-1]`, `arr[i+1]`)에 접근해야 할 때 유용하지만, off-by-one 실수 여지가 있다.

```cpp
vector<int> arr = {1, 1, 2, 3, 4, 5};
int n = 1;
int count = 0;

for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == n) {
        count++;
    }
}
```

## 범위 기반 for (range-based for)

원소 값만 필요할 때 간결하고 의도가 명확하다.
위치 정보가 없어서 `i`가 필요한 상황엔 사용 불가.
값 비교, 카운팅처럼 단순 순회엔 범위 기반이 적합하다.

```cpp
vector<int> arr = {1, 1, 2, 3, 4, 5};
int n = 1;
int count = 0;

for (int x : arr) {
    if (x == n) {
        count++;
    }
}
```

## 비교 정리

| | 인덱스 기반 | 범위 기반 |
|---|---|---|
| 위치(i) 접근 | O | X |
| 코드 길이 | 길다 | 짧다 |
| 단순 순회 | 가능 | 적합 |
| 실수 여지 | 있음 | 적음 |
