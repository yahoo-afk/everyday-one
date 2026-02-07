#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxnum =  array[0];
     int maxindex = 0;
    for(int i=1; i<array.size(); i++)
    {
        if(maxnum <array[i])
        {
            maxnum =array[i];
        }
        if(maxnum == array[i])
        {
             maxindex = i;
        }
    }
    answer.push_back(maxnum); 
    answer.push_back(maxindex);
    return answer;
}