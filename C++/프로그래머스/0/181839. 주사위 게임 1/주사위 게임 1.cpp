#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
   if(a%2 == 0 && b%2 == 0)
   {
      answer =a-b;
       if(answer <0)
       {
           int c= 0;
           c= a-b;
          answer= (c*c)/-c;
       }
   }else if(a%2 != 0 && b%2 == 0 )
   {
      answer =(a+b)*2;
   }else if(a%2 == 0 && b%2 != 0 )
   {
       answer = (a+b)*2;
   }else if(a%2 != 0 && b%2 != 0)
   {
        answer=(a*a)+(b*b);
   }
    
    return answer;
}