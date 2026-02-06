#include <string>
#include <vector>

using namespace std;

int solution(string a) 
{
    int answer = 0;
    for(int i=0; i<a.size(); ++i)
    {
        if(isdigit(a[i]))
        {
              answer += a[i] -'0';
        }
    }
    return answer;
}