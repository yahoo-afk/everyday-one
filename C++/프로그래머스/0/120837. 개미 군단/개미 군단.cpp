#include <string>
#include <vector>

using namespace std;

int solution(int hp)
{
    vector<int> atk = {5, 3, 1};
    int answer = 0;
   for(int i=0; i<atk.size(); ++i)
   {
        answer += (hp/atk[i]);
        hp %= atk[i];
   }
    return answer;
}