#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer; //벡터의 크기를 n으로 지정해줬고 i는 n보다 항상 작으니까 인덱스 범위를 넘을일이없는데.. 왜 벡터 사이즈가 1이지?
    answer.resize(n);
    
    for (long long i =0 ; i<n ; i++)
    {
        answer[i] = (i+1) * x;
    }
    
    for(long long a: answer)
    {
        cout << a << endl;
    }
    return answer;
}

int main()
{
    int x;
    int n;
    cin >> x;  //2
    cin >> n;  //5
    solution(x, n);
    // x를 n만큼 곱해라?
}