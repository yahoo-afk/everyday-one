#include <string>
#include <vector>

using namespace std;

string solution(string a, int n) {
    string answer = "";
    // 문자인덱스 하나
    // n 크기하나 두개를 증가시켜야되고
    // n횟수만큼 반복으로값을넣어줘야함
    for(int i=0; i<a.size(); ++i)
    {
        for(int j=0; j<n; ++j)
        {
        
             answer += a[i];
        } 
    }
    return answer;
}