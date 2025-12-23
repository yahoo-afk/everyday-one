#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int sum = 0;
    sum = num1 + num2;
 cout<< sum<<endl;
    return sum;
}
int main(){
    int n1;
    int n2;
    cin>> n1>>n2;
    solution(n1,n2);
}