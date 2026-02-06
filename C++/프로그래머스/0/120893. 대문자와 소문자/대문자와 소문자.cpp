#include <string>
#include <vector>

using namespace std;

string solution(string a) {
    string answer = "";
  for(int i=0; i<a.size(); i++)
  {
     if('A'<= a[i]&& 'Z'>= a[i])
      {
          answer.push_back(a[i] +=32);
      }
     else if('a'<= a[i]&& 'z'>= a[i])
     {
      answer.push_back(a[i] -=32);
     }
  }
  return answer;
}