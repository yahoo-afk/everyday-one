#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    //그냥 배열길이는 같으니까 알아서 다곱해라인건가봄
    for(int i =0; i<a.size(); i++)
    {
       answer += a[i]*b[i];
    }
    return answer;
}