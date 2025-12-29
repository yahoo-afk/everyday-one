#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int a;
    a = n/10;
    answer = n*12000 + (k-a)* 2000;
    return answer;
}

// 1인분 12000원      n 
// 음료 한개 2000원    k
// n<= 10             k-1   
//n * 12000
//k * 2000
//n

