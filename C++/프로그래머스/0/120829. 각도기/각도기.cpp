#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int angle)
{
	if (0 < angle && angle< 90)
	{
		cout << "예각입니다" << endl;
		return 1;
	}
	else if (angle == 90)
	{
		cout << "직각입니다" << endl;
		return 2;
	}
	else if (90 < angle && angle< 180)
	{
		cout << "둔각입니다" << endl;
		return 3;
	}
	else if (angle == 180)
	{
		cout << "평각입니다" << endl;
		return 4;
	}
}

int main() {
	int angle;
	cin >> angle;
	solution(angle);
}

