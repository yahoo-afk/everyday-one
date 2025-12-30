#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n)
{
	//n은100억 이하의 자연수 485914로생각함
	vector<int> answer;
	while (n > 0)
	{

		answer.push_back(n % 10);
		
        n /= 10;
		

	}
	return answer;
}