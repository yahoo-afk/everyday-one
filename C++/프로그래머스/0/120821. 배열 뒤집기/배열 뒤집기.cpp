#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i = num_list.size()-1  ; i >=0 ; i--)
    {
        cout<<num_list[i]<<endl;
        answer.push_back(num_list[i]);
    }
    
    return answer;
}
//vec{1,2,3,25,25}
//역방향으로 돌려라?
//vec{25,25,3,2,1}
//vec[i] 