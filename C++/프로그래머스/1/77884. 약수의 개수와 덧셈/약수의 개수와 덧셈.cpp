#include <string>
#include <vector>

using namespace std;

int solution(int left, int right)
{
    int answer = 0;
    //0.left 부터 right 까지모든수 구하기
    //1.left 부터 right까지 약수 갯수구하기
    //2.약수 갯수가 홀수면 -
    //3.약수 갯수가 짝수면 +
    int count = 0;
    int i = 1;
    for (i = left ; i <= right; i++) //범위 정하는 루프문
    {
       count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
          if (count % 2 == 0)//j루프끝날때마다 약수개수확인해서 구해야함
        {
            answer += i;
        }
        else if (count % 2 != 0)
        {
            answer -= i;
        }

    }
    return answer;
}