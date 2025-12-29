#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += n / i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << solution(n) << endl;

}