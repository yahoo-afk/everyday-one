#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string a;
    a = to_string(num);
    
    for(int i=0; i<a.size(); ++i)
    {
        if(a[i] -'0' == k)
        {
            return i+1;
        }
    }    
    return -1;
}