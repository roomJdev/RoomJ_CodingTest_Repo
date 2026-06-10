# 산술 연산자 (Arithmetic Operators)

## 종류

| 연산자 | 의미 | 예시 | 결과 |
|---|---|---|---|
| `+` | 더하기 | `2 + 3` | 5 |
| `-` | 빼기 | `100 - 2` | 98 |
| `*` | 곱하기 | `3 * 4` | 12 |
| `/` | 나누기 | `10 / 3` | 3 (소수점 버림) |
| `%` | 나머지 | `10 % 3` | 1 |

## 주의 — 정수 나누기

`int` 끼리 나누면 소수점이 버려진다.
소수점이 필요하면 `double`로 캐스팅해야 한다.

```cpp
int a = 10, b = 3;

int result1 = a / b;                      // 3 (소수점 버림)
double result2 = (double)a / b;           // 3.333...
```

## 코딩 테스트 적용 예시

```cpp
// 두 수의 합 구하기
int solution(int num1, int num2) {
    return num1 + num2;
}

// 두 수의 차 구하기
int solution(int num1, int num2) {
    return num1 - num2;
}
```
