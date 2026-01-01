#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
   answer = numbers;
    // 여기 사이에만 있는거빼고는 다잘라야함 num1 num2 
    // erase쓰는게 맞는거같음
   
    answer.erase(answer.begin() + num2+1 , answer.end());
   
    answer.erase(answer.begin(), answer.begin() + num1);

    return answer;
}