#include <string>
#include <vector>
#include <algorithm>
using namespace std;



vector<string> solution(vector<string> strings, int n)
{
	vector<string> answer;
	//문자열 크기 비교 하는데 그냥 솔트못쓰나
	{
		sort(strings.begin(), strings.end(), [n](string a, string b) { return a[n] == b[n] ? (a < b) : (a[n] < b[n]); });
	}
	answer = strings;								//여기 3번째에 비교를 어떻게 할지를 설정해라?
	//strings의 n번째 인덱스가 작은것부터 오게 해야하니
	return answer;
}
    
    
