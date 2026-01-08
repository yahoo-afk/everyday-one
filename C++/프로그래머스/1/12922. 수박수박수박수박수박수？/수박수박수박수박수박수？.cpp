#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
   for(int i =0; i<n; i++)
   {
     if(i%2 == 0)
        {
            answer += "수";
        //짝수라면 박
        }
        else if(i%2 != 0)
        {
            answer += "박";
         //홀수라면 수
        }
   }
    return answer;
}