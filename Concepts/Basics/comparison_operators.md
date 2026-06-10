# 비교 연산자 (Comparison Operators)

조건식에서 두 값을 비교할 때 사용한다.
결과는 항상 `true` 또는 `false`.

| 연산자 | 의미 | 예시 | 결과 |
|---|---|---|---|
| `==` | 같다 | `3 == 3` | true |
| `!=` | 다르다 | `3 != 4` | true |
| `>` | 크다 | `5 > 3` | true |
| `<` | 작다 | `3 < 5` | true |
| `>=` | 크거나 같다 | `3 >= 3` | true |
| `<=` | 작거나 같다 | `3 <= 5` | true |

## 예제

```cpp
int n = 3;

if (n == 3)  // true — 같은 값 찾기
if (n != 0)  // true — 0이 아닌 값 찾기
if (n > 2)   // true — 기준보다 큰 값 찾기
if (n >= 3)  // true — 기준 이상인 값 찾기
```

## 코딩 테스트 적용 예시

```cpp
// 중복된 숫자 개수 — 같은 값(==)
for (int x : array) {
    if (x == n) answer++;
}

// 머쓱이보다 키 큰 사람 — 더 큰 값(>)
for (int x : array) {
    if (x > height) answer++;
}
```
