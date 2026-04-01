#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> min_press;

    for(int i=0; i<keymap.size(); ++i)
    {
       for(int j=0; j<keymap[i].size(); ++j)
       {
           char c = keymap[i][j];
           int count = j + 1;
           if(min_press.count(c)  == 0)
           {
               min_press[c] = count;
           }
           else
           {
               min_press[c] = min(min_press[c], count);
           }
       } 
    }
    for(int i=0; i<targets.size(); ++i)
    {
        int sum = 0;
        bool isPossible = true;
        for(int j=0; j<targets[i].size();++j)
        {
            char currentchar = targets[i][j];

            if(min_press.find(currentchar)!= min_press.end())
            {
                sum += min_press[currentchar];
            }
            else
            {
                isPossible = false;
                break;
            }
        }
        if(isPossible)
        {
            answer.push_back(sum);

        }
        else { answer.push_back(-1); }

    }
    return answer;

}