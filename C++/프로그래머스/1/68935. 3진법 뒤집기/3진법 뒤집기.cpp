#include <string>
#include <vector>
using namespace std;

int solution(int n)
{
	int answer = 0;
	vector<int> temp;
	vector<int> temp1;
	while (n != 0)
	{
		temp.push_back(n % 3);
		n /= 3;
	}
	//이미 역순으로담음
	//이걸 10진법으로 변환만 하면됨..
	int x = 1;
	for (int i = temp.size() - 1; i >=0; i--)
	{
		answer += temp[i] * x;
		x *= 3;
	}
	return answer;
}

