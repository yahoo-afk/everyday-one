#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n)
{
	int ns = sqrt(n);
	
    if ( n== ns*ns)
	{
		return 1;
	}
	return 2;
}