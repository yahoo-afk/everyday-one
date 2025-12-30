#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    //벡터안에 작은수부터 정렬
   answer = numbers[numbers.size()-1] * numbers[(numbers.size() -2)];
    return answer;
}
