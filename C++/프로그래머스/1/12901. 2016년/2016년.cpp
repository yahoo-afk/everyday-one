#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    //a는월 b는일 두개를 받아서 요일을 반환한다
    //365개를 일일히 할수는없잖아 
    //1월 1일 금요일1월 2일 토요일 1월 3일 월요일  1월4일 화요일 1월5일 수요일 1월 6일 1월 7일 목요일
    //이제 여기서 각각 7일씩 더하면 요일이 나옴 어떻게 할것인가?
    int totalday =0;
    int months[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
     string days[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    for(int i=0; i<a-1; ++i)
    {
       totalday+=months[i];
    }
    totalday += b;
    return days[totalday % 7];
}