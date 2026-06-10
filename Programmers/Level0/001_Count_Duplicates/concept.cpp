#include <iostream> // 출력 (cout, 씨 아웃) 사용을 위해 라이브러리 포함
#include <vector> // vector 사용을 위해 포함
using namespace std; // std::cout, std::vector를 매번 붙이지 않아도 됨. std:: 생략 가능

// 개념 1: 배열 순회 — for 루프
void example_loop() { // void: 반환값 없는 함
    vector<int> arr = {1, 1, 2, 3, 4, 5}; // vector<int> : int형 동적 배열 선언 & 초기화

    // 인덱스 기반 for
    for (int i = 0; i < arr.size(); i++) { // 배열을 0번째부터 i-1번째까지 순회 (결과적으로 전체 배열 수만큼 반복)
        cout << arr[i] << "\n"; // i번째 요소 출력 후 줄바꿈
    }

    // 범위 기반 for (range-based for) — 더 간결
    for (int x : arr) { // arr에서 원소를 하나씩 꺼내 x에 담음
        cout << x << "\n";
    }
}

// 개념 2: 조건 검사 + 카운터
void example_counter() {
    vector<int> arr = {1, 1, 2, 3, 4, 5}; // int형 동적 배열 선언 및 초기화
    int n = 1; // int형 변수 선언 및 초기화(값 1)
    int count = 0; // int형 변수 선언 및 초기화(값 0) — n과 같은 숫자 개수를 세기 위한 카운터

    // 범위 기반 for (range-based for) 사용
    for (int x : arr) { // arr에서 원소를 하나씩 꺼내 x에 담음
        if (x == n) { // x가 n과 같다면 (조건 검사)
            count++;  // count값 1 증가 // count = count + 1 과 동일한 기능
            // 만약 arr의 요소 값 x가 n(1)과 같다면 count 값에 +1하는 로직
        }
    }

    cout << count << "\n";  // 루프 순회 완료 후 count 값을 cout으로 출력 후 줄바꿈
}

int main() {
    example_loop(); // 첫번째 함수 실행
    example_counter(); // 두번째 함수 실행
    return 0;
}
