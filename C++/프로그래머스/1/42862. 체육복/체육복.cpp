#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    //reserve 애들은 두벌씩 //lost는 한벌잃어버린애들  //n은 학생수
    for (auto& l : lost)
    {
        for (auto& r : reserve)
        {
            if (l == r)
            {
                l = -1;
                r = -1;
                break;
            }
        }
    }
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for (int& l : lost) {
        if (l == -1) continue;

        for (int& r : reserve)
        {
            if (r == -1)
            {
                continue;
            }
            if (r == l - 1 || r == l + 1)
            {
                r = -1;
                l = -1;
                break;
            }
        }
    }

    int count = 0;
    for (int l : lost) {
        if (l != -1)
        {
            count++; 
        }
    }

    return n - count;
}