#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int solution(vector<vector<int>> sizes) {
	int answer = 0;
	int maxw = 0;
	int maxh = 0;
	for (int i = 0; i < sizes.size(); ++i)
	{
		sort(sizes[i].begin(), sizes[i].end());
		
		if(sizes[i][0]>maxw)
		{
			maxw = sizes[i][0];
		}
		if(sizes[i][1]>maxh)
		{
			maxh = sizes[i][1];
		}
	}
	answer = maxh * maxw;
	return answer;
}