#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    long long a = sqrt(n); 
    //   n/루트n이 정수라면 제곱근이겠지?
    //   그럼 그때만 answer (나온정수 +1)*(나온 정수 +1) 
    //   아니라면  answer = -1;
    if (a*a == n)
    {
        answer = (n / a + 1) * (n /a + 1);
    }
    else 
    {
        answer = -1;
    }
    return answer;
}