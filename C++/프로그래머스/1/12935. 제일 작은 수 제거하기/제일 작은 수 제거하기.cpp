#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min =arr[0];
    int minindex =0;
    if(arr.size() <=1)
    {
        answer.push_back(-1);
        return answer;
    }
    for(int i=0; i<arr.size(); ++i)
    {
        if(min >arr[i])
        {
            min = arr[i];
            minindex = i;
        }
    }    
    arr.erase(arr.begin()+minindex);
    
    return arr;
}