#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2)
{
    int answer = 0;
    for(int i =0; i<str1.size();i++)
    {
        answer = 2; 
        if(str1[i] == str2[0])
        {answer =1;
            for(int j=1; j<str2.size(); j++)
            {
               if (str1[i+j] == str2[j])
               {
                   answer =1;
               }
                else
               {
                   answer =2;
                    break;
               }
            }
            if(answer == 1)
            {
                return 1;
            }
        }
    }
    return answer;
}