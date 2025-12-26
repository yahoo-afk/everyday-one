#include <iostream>

using namespace std;
int solution(int n)
{
    int sum = 0;
    while(0<n){
       
        sum += n % 10;
        n /= 10;
        cout << n << endl;
    }
    cout << sum << endl;
    return sum;
}
int main() {
    int a;
    cin >> a;
    solution(a);
}