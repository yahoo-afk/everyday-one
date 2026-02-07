#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int maxX = dots[0][0];
    int minX = dots[0][0];
    int maxY = dots[0][1];
    int minY = dots[0][1];
    //0,0을 기준으로 좌표가 4개 주어지고 그좌표를 이어서 4각형을 만들때 그사각형의 넓이를 구해라?
    for(int i=0; i<4; ++i)
    {
        maxX = max(maxX,dots[i][0]);
        minX = min(minX,dots[i][0]);
        maxY = max(maxY,dots[i][1]);
        minY = min(minY,dots[i][1]);
    }
    int a = maxX-minX;
    int b = maxY-minY;
    return a*b;
}