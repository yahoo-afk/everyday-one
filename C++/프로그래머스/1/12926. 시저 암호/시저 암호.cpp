#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";

	//1문자열을다 문자로바꾼다
	//2그리고나서 수를 더한다
	//if()문으로 z가 넘어가면 어떻게 할지?
	for (auto& it : s)
	{
		if (it >= 'A' && it <= 'Z')
		{
		    it = (it- 'A' + n) % 26+'A';
            
		}
		else if (it >= 'a' && it <= 'z')
		{
			it = (it-'a' + n) % 26 +'a';
            
		}
        answer = s;
	}

	return answer;
}