#include <iostream>
using namespace std;

int fun(long x) 
{
	int count = 0;
	while(x) 
	{
		if(x % 10 == 1)
			++count;
		x /= 10;
	}
	return count;
}

int main()
{
	cout << fun(1211) << endl;

	return 0;
}