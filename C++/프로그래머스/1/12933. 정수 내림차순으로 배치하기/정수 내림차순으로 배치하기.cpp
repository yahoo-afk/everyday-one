#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    string s = to_string(n);       //n을 문자형으로
    sort(s.begin(), s.end(), greater<char>()); // n크기비교해서정렬
    answer = stoll(s); // 다시 숫자로
    return answer;  // 근데 오류?
}


