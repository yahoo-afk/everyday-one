#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

//지금 문제제는 s[i]가 비었으면 무시하고 위로올라가는건 좋은데 i++이 되고있나?
//공백 다음에는 무조건 다시 대문자로확인해야함.
string solution(string s) {
	string answer = "";
	int index = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			index = 0;
			continue;
		}
		//짝수일때만 0포함
		if (index % 2 == 0)
		{
			if (isalpha(s[i]))
			{
				s[i] = static_cast<char>(toupper(static_cast<unsigned char>(s[i])));
			}
			
		}
		//홀수일때만
		else
		{
			if (isalpha(s[i]))
			{
				s[i] = static_cast<char>(tolower(static_cast<unsigned char>(s[i])));
			}
			
		}
		index++;
	}
	answer = s;
	return answer;
}