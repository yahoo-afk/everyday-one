#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    string temp = to_string(age);
    
    for(int i=0; i<temp.size(); ++i)
    {
     answer += temp[i]-'0'+97;
    }
    return answer;
}