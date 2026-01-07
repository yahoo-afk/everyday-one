#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minnum = arr[0];
    if (arr.size() == 1)
    {
        answer.push_back(-1);
    }
    else 
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if( arr[i]<minnum)
            {
                minnum = arr[i];
            }
            answer = arr;
            answer.erase(remove(answer.begin(), answer.end(), minnum),answer.end());
        }
    }
    return answer;
}