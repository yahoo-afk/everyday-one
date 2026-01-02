#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = 0;
    if (a < b)
    {
        for (a; a <= b; a++)
        {
            sum += a;
        }
        return sum;
    }
    else if (a > b)
    {
        for (b; b <= a; b++)
        {
            sum += b;
        }
        return sum;
    }
    else
    {
        return a;
    }
    return answer;
}