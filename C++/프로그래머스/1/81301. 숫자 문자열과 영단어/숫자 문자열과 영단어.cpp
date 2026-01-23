#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<regex> re { regex("zero"),regex("one"),regex("two"),regex("three"),regex("four"),regex("five"),regex("six"),regex("seven"),regex("eight"),regex("nine") };
    vector<string >numbers{"0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    for (int i = 0; i <=9; ++i)
    {
       //기준열,기준열에 존재하는것, 바꿀것;
       //애는 원본을 수정하지않은 즉 s를 수정하지않음
        //비교를해도 처음 s만 쳐보고있음 
      s =  regex_replace(s, re[i], numbers[i]);
    }
    return stoi(s);
}