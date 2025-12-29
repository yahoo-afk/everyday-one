#include <string>
#include <vector>
#include <algorithm>
//분자가 위 분모가 아래
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;
    answer.resize(2);
    int  numers1 = numer1*denom2;    //분자
    int  denoms1 = denom1*denom2;    // 분모
    int  numers2 = numer2*denom1;    //분자
    int  numers3 = numers1 + numers2; // 분모
                                         // 약분이 되지않으면 기약분수임 1제외하고
    
    for(int i=2;   i < max(numers3,denoms1)+1;  i++) //
    {
       if(numers3%i==0 && denoms1%i==0)  // 분자 분모를나눠서 나머지가 없음!!
        {  
             numers3 /= i;         //
             denoms1 /= i; 
             i--;                         //i로 나눈준 나머지값이 0일때만 나눈다
        } 
    }
    answer[0] = numers3;
    answer[1] = denoms1;
    return answer;
}