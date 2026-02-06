#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end(),greater<int>());
    int  answer1 = numbers[0]* numbers[1];
    int answer2 = numbers[numbers.size()-1]* numbers[numbers.size()-2];
    answer = max(answer1,answer2);
    return answer;
}