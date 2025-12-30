#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    
    int answer = 0;
    for(int i =0; i<t; i++)
    {
       answer=(n*=2);
    }
    return answer;
}

//n을 t횟수만큼?
//n*2    t    n*=2 t만큼 반복
// 한시간당 n이두배
//