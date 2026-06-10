# 최대공약수(GCD)와 최소공배수(LCM)

## 최대공약수 (GCD, Greatest Common Divisor)

두 수를 나누어 떨어지게 하는 가장 큰 수.

```
GCD(10, 8) = 2
GCD(12, 8) = 4
```

### C++ 내장 함수 — gcd()

`<numeric>` 헤더에 포함 (C++17 이상).

```cpp
#include <numeric>
using namespace std;

int g = gcd(10, 8);  // 2
```

### 직접 구현 — 유클리드 호제법

```cpp
int my_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```

## 최소공배수 (LCM, Least Common Multiple)

두 수의 공통 배수 중 가장 작은 수.

```
LCM(a, b) = a * b / GCD(a, b)
```

```cpp
#include <numeric>
using namespace std;

int l = lcm(4, 6);  // 12  — C++17 내장 함수
// 또는
int l2 = 4 * 6 / gcd(4, 6);  // 12
```

## 코딩 테스트 적용 예시 — 분수 덧셈 약분

```cpp
#include <numeric>
using namespace std;

// numer1/denom1 + numer2/denom2
int result_numer = numer1 * denom2 + numer2 * denom1;
int result_denom = denom1 * denom2;

int g = gcd(result_numer, result_denom);

answer = {result_numer / g, result_denom / g};
```
