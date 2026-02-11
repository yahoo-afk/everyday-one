#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int a=0;
    //n 벽갯수 개당 1미터
    //m 롤러의길이
    // section 칠해야할구역
    sort(section.begin(),section.end());
    for(int i = 0; i<section.size(); ++i)
    {
        if(a<section[i])
        {
            a = section[i]+m-1;
            answer++;
        }
    }
    return answer;
}