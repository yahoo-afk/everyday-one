#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string a) {
    vector<int> answer;
    a.erase(remove_if(a.begin(),
                      a.end(),
 // 여기있는 c는 a[i] 의 char값을 remove_if 가 값을 전달해줌
                      [](char c)
                      //그래서 이친구가 알파벳이면 지운다 
                      //여기서 리턴값을 true false로 구분되는데 true라면 지우고 false라면 통과
                      {return isalpha(c);})
                        ,a.end()); 
    sort(a.begin(),a.end());
    for(int i=0; i<a.size(); ++i)
    {
        answer.push_back(a[i] -'0');
    }
    return answer;
}