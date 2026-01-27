#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	// 어레이가size에서 commands의 0번째 1번째 인덱스만큼짜르고 정렬후 2번째 인덱스구하기
	for (int i = 0; i < commands.size(); ++i)
	{
		vector<int>Box(array.begin() + commands[i][0]-1, array.begin() + commands[i][1]);
		sort(Box.begin(), Box.end());
		answer.push_back(*(Box.begin() + commands[i][2]-1));
	}
	return answer;
}