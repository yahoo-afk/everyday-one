#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(price <100000)
    {
        return price;
    }
    else if(price<300000)
    {
        return price -= price* 0.05;
    }
    else if(price<500000)
    {
        return price -= price*0.1;
    }
    else
    {
       return price -= price*0.2;
    }
    
    
    
    return answer;
}