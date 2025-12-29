#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int sum = 0;
    int min = 1000000;
    for (int x = 1; x <= n; x++)
    {
        if (n % x == 1)
        {
            sum = x;
            if (sum < min)
            {
                min = sum;
            }
        }
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    cout << solution(n) << endl;

}