#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = (double)num1 / num2 * 1000;
    return answer;
}
int main() {
    int a;
    int b;
    cin >> a >> b;
    cout << "num1 은" << a << "num2 는" << b << solution(a, b) << endl;
}