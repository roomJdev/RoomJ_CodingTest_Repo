#include <numeric>
#include <string>
#include <vector>
using namespace std;

// ============================================================
// [v1] 분수의 덧셈
// 두 분수를 더한 값을 약분해서 [분자, 분모] 순서로 return
// ============================================================

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    // 여기에 작성하세요

    auto my_gcd = gcd(numer1*denom2+numer2*denom1, denom1*denom2);

    //    answer = {(numer1*denom2+numer2*denom1)/my_gcd, (denom1*denom2)/my_gcd};

    answer.push_back((numer1*denom2+numer2*denom1)/my_gcd);
    answer.push_back((denom1*denom2)/my_gcd);

    return answer;
}
