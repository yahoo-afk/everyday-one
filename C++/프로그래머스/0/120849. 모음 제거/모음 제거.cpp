#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a) {
	string answer = "";
	auto ISstirng = "aeiou";
	for (int i = 0; i < 5; ++i) 
	{
		a.erase(remove(a.begin(), a.end(), ISstirng[i]), a.end());
	}
	return a;
}