#include <string>
#include <vector>
#include <numeric>

using namespace std;

long long gcd(long long n, long long m)
{
	while (m) {
		n %= m;
		swap(n, m);
	}
	return n;
}
long long lcm(long long n, long long m)
{

	return (n * m) / gcd(n, m);
}
vector<int> solution(int n, int m)
{
	vector<int> answer;

	
	answer.push_back(gcd(n,m));
	answer.push_back(lcm(n, m));   
    return answer;
}