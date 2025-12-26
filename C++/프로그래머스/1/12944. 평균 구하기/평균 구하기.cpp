#include <string>
#include <vector>
#include <iostream>
using namespace std;

double solution(vector<int> arr) {
    double sum =0;
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    return sum / arr.size();
}
int main() {
    int n;
    cin >> n;
    solution(vector<int>(n));
}