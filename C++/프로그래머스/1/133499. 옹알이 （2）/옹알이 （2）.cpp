#include <string>
#include <vector>


int solution(std::vector<std::string> babbling) {
	int answer = 0;
	std::string arr[4];

	arr[0] = "aya";
	arr[1] = "ye";
	arr[2] = "woo";
	arr[3] = "ma";

	for (int i = 0; i < babbling.size(); ++i)
	{
		std::string word = babbling[i];
		bool isInvalid = false;
		for (int j = 0; j < 4; ++j)
		{
			if (word.find(arr[j] + arr[j]) != std::string::npos)
			{
				isInvalid = true;
				break;
			}
		}
		if (isInvalid) { continue; }

		for (int j = 0; j < 4; ++j)
		{
			size_t pos;
			while ((pos = word.find(arr[j])) != std::string::npos)
			{
				word.replace(pos, arr[j].length(), "1");
			}
		}

		bool isSucces = true;
		for(char c : word)
		{
			if(c !='1')
			{
				isSucces = false;
				break;
			}
		}

		if (isSucces) { answer++; }

	}
	return answer;
}