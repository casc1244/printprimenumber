#include <iostream>

using namespace std;

int main()
{
	int n, i, x = 0;
	int totalnum = 100;

	for (n = 2; n < totalnum; n++) {

		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				x++;
			}

		}

		if (x == 0) {
		std:cout << "the number is:" << n << endl;
		}
		else {
			x = 0;
		}


	}
	return 0;
}