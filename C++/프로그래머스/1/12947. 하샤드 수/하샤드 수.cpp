#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int box = x;
    int a =0 ;
    while(box>0)
    {
        a += box%10;
        box/=10;
    }
    if(x%a == 0 )
    {
        return true;
    }
    else if(x%a != 0)
    {
        return false;
    }
}