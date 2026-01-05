#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int answer = 0;
    long long n =num;
   while(n != 1)
   {
       if(n == 1)
       {
           return 0;
       }
       else if(n%2 ==0)
       {
           n/=2;
       }
       else if(n%2 != 0)
       {
           n= n*3+1;
       }
       answer++;
       if(answer >=500)
       {
           answer = -1;
           return answer;
       }
   }
    return answer;
}
//홀수면 곱3 플1
//짝수면 나누기 2
// 이것들을 반복하는 횟수구하기라