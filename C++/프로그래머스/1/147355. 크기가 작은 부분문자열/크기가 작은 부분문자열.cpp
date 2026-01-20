#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
	int answer = 0;
	//t를 p랑 같은크기로 나눠서 비교하는듯
	//그러면 t를 p만큼 조각내야함
	for(int i=0; i<=t.size()-p.size(); ++i)
	{
		//이러면 t를 i위치부터p사이즈만큼 조각냈음
        string stb = t.substr(i,p.size());
		if(stb <= p)
		{
			answer++;
		}
	}
	return answer;
}