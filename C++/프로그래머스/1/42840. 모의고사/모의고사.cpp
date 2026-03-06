#include <string>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    vector<int> student1 = { 1,2,3,4,5 };
    vector<int> student2 = { 2,1,2,3,2,4,2,5};
    vector<int> student3 = { 3,3,1,1,2,2,4,4,5,5 };
    vector<int> answerCount{ 0,0,0 };

    for(int i=0; i<answers.size();++i)
    {
        if (answers[i] == student1[i % 5]) { answerCount[0]++; }
        if (answers[i] == student2[i % 8]) { answerCount[1]++; }
        if (answers[i] == student3[i % 10]) { answerCount[2]++; }
    }
    int MaxScore = max({ answerCount[0],answerCount[1],answerCount[2] });
    for(int i=0; i<3; ++i)
    {
        if(answerCount[i]== MaxScore)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}