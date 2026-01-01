#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer = numlist;
    vector<int> box;
    for(auto it : answer)
    {
        if(it%n == 0)
        {
            box.push_back(it);
        }
    }
    return box;
}