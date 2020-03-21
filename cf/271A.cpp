#include <bits/stdc++.h>
using namespace std;

int main() {
	int year;
	cin >> year;
	//brute force, increment yr by 1 until all digits are unique
	while (1)
	{
		year += 1;
		int a = year / 1000; //first digit
		int b = year / 100 % 10; //second
		int c = year / 10 % 10; //third
		int d = year % 10; //fourth
		if (a != b && a != c && a != d && b != c && b != d && c != d) break;
	}
	cout << year << "\n";
}
