#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        answer += *it;
       
    }
     answer = 45 - answer;
    return answer;
}