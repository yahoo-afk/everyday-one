#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
   
    int count =0;
    for(auto  s11  :s1)
    {
         for(auto  s22 : s2)
         {
             if(s11 == s22)
             {
                 count++;
             }
             //여기서 중복된 string링 횟수만큼 count를 늘리면됨
         }
    }
   return count;
}