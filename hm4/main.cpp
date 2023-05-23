#include <iostream>
using namespace std;


void draw(int n, int k) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			cout << "#";
		}
		cout << '\n';
	}
}

int fact(int n) {
	int res = 1;
	for (int i = 2; i < n + 1; ++i) {
		res *= i;
	}
	return res;
}

bool isSimple(int n) {
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int pow(int n) {
	return n * n * n;
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int check(int a) {
	if (a > 0) return true;
	else return false;
}


int main() {
	draw(3, 4);
	cout << fact(3) << '\n';
	cout << isSimple(4) << '\n';
	cout << pow(3) << '\n';
	cout << max(4, 1) << '\n';
	cout << check(-12) << '\n';
	return 0;
}