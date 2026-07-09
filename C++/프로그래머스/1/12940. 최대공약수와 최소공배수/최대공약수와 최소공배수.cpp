#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int origin_n = n;
    int origin_m = m;
    
    while(m!=0)
    {
        int temp =  n%m;
        n = m;
        m=temp;
    }
    int gcd = n;
    
    int icm = (origin_n*origin_m) /gcd;
    answer.push_back(gcd);
    answer.push_back(icm);
        
        

    return answer;
}