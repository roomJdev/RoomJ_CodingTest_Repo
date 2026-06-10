# 조건 분기 — if / else if / else

조건에 따라 실행할 코드를 다르게 선택한다.

## 기본 구조

```cpp
if (조건) {
    // 조건이 true일 때 실행
} else {
    // 조건이 false일 때 실행
}
```

## else if — 세 가지 이상 분기

```cpp
int a = 5;
int b = 3;

if (a > b) {
    cout << "a가 크다" << "\n";
} else if (a == b) {
    cout << "같다" << "\n";
} else {
    cout << "b가 크다" << "\n";
}
```

## 주의 — 조건 순서

`else if`는 위에서부터 순서대로 검사하고, 처음으로 `true`인 조건만 실행된다.
나머지 조건은 검사하지 않고 건너뛴다.

```cpp
int n = 10;

if (n > 5) {
    cout << "5 초과" << "\n";   // 여기서 실행되고 끝
} else if (n > 3) {
    cout << "3 초과" << "\n";   // 실행되지 않음
}
```

## 코딩 테스트 적용 예시

```cpp
// 숫자 비교하기 — 같으면 1, 다르면 -1
int solution(int num1, int num2) {
    int answer = 0;

    if (num1 == num2) {
        answer = 1;
    } else {
        answer = -1;
    }

    return answer;
}
```
