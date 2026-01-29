#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    //모든 인덱스 번호를 비교해서 같은문자가있나 확인?
    //처음나온 문자는 -1을 반환하고 
    //앞에나왔던문자는 몇칸이 떨어져있나 확인하기
    for (int i = 0; i < s.size(); ++i)
    {
        int pos = -1;
        for (int j = i-1; j >=0; --j)
        {
            if (s[i] == s[j])
            {
                pos = i - j;
                break;
            }
        }

        answer.push_back(pos);
    }
    return answer;
}