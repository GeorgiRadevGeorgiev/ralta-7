#include "stdafx.h"
#include <iostream>

using namespace std;


int main() {
	/*
	unsigned long long f1 = 0, f2 = 1, n, brat =0, counter = 0;
	cout << "Input n : ";
	cin >> n;

	while (counter < n) {

		brat = f1;
		f1 = f2;
		f2 = brat + f2;
		cout << f1 << " ";
		counter++;
	}

*/
 
/*
	int n, num = 0;
	cout << "input num ";
	cin >> n;

	for (int i = 0; i < n; n /= 10) {

		int a = n % 10;
		num = num * 10 + a;

	}
	cout << num;
	cout << "\n";

 */

	/* 
	int n, h;
	cout << "input num ";
	cin >> h;
	
	for (int i = 1; i <= h; i++) {

		for (int j = 1; j <= h; j++) {

			if (i + j - 1 == h || i == j)
				cout << '*';
			else
				cout << " ";
		}
		cout << endl;
	}
*/

		system("pause");
		return 0;
}
