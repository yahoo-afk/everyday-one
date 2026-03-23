#include <string>
#include <vector>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
   int arrX[10] = {0,};
   int arrY[10] = {0,};
   for(int i=0; i<X.size(); ++i)
   {
       arrX[X[i]-'0']++;
   }
   for(int i=0; i<Y.size(); ++i)
   {
       arrY[Y[i]-'0']++;
   }
    for(int i=9; i>=0; --i)
    {
        int samenum = min(arrX[i],arrY[i]);
        for(int j=0; j<samenum; ++j)
        {
            answer += to_string(i);
        }
    }
    if(answer.empty()){return "-1";}
    if(answer[0] == '0'){return "0";}
    return answer;
}