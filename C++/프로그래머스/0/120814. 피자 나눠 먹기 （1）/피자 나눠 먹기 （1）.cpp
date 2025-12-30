#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    if(n<=7)
    {   //피자조각수랑 사람이랑 같거나 사람이더 적은경우
        return answer=1;
    }
    else if(n%7 == 0)
    {   // 나머지가 0인경우
        return answer = n/7;
    } 
    else if(n%7 !=0)  
    {    // 나머지가 0이아닌경우
       return answer = n/7 + 1;
    }
}
//사람수를 7로나눠서 나머지가생기면
// 무조건 +1?





//피자한판 7조각
// 사람수 나누기 피자한판(7)이 남는다면 +1을해라
// n%7 !=0 +1
//answer 가피자의 판수
//4가지 경우의수??
//n이 7보다 작으면 1
//n/7 0이라면 정수
//n /7 나머지가있다면 +1
//n<=7 이면 1
//7<n<=14 면 2
//14<n<=21 =3
