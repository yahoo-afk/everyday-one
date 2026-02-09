#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
	int answer = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			for (int k = j + 1; k < nums.size(); ++k)
			{
				int sum = nums[i] + nums[j] + nums[k];
				
                bool isprime =true;
                for (int p = 2; p * p <= sum; ++p)
				{
					if (sum % p == 0)
					{
                        isprime = false;
						break;
					}
				}
                if(isprime) 
                    {
						answer++;
					}
			}
		}
	}
	return answer;
}
