#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    //x가음수
    if(dot[0] < 0)
    {
        if(dot[1]<0)
        {
            return 3;
        }
        else if(dot[1]>0)
        {
            return 2;
        }
    }
    // x가 양수
    else if(dot[0] >0)
    {
        if(dot[1] <0)
        {
            return 4;
        }else if(dot[1] > 0)
        {
            return 1;
        }
    }
}