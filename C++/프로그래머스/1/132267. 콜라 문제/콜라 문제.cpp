#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    //a 콜라교환에 필요한 병갯수
    //b 마트가 주는 콜라갯수
    //n 빈병갯수
    int answer = 0;
    //n/a*b 가 콜라갯수 한번교환했을때 
    while(n>=a)
    {
        answer +=(n/a)*b;
        // 콜라병남은갯수 확인
        n = (n/a*b + n%a);
    }
    
    
    
    
    
    return answer;
}