#include <iostream>
using namespace std;

int checkCPU() {
	union MyUnion {
		int a;
		char c;
	}test;
	test.a = 1;
	return (test.c == 1);
}

int main() {
	cout<< checkCPU() << endl;
	system("pause");
	return 0;
}