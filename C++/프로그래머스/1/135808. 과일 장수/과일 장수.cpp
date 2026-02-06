#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    // 내림차순 정렬
    sort(score.begin(), score.end(), greater<int>());
//m-1인덱스 즉 한상자에서 가장 작은 부분을 i로 두고 i가 score사이즈보다 작다면 m만큼 더해줘서 다음 마지막상자의 위치로이동
    for (int i = m - 1; i < score.size(); i += m)
    {
        //한상자에서 가장작은수 * 한상자에담긴 사과갯수를 곱한다
        answer +=  score[i]*m ;
    }
    return answer;
}