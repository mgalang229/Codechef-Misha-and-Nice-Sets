#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long l, r, g;
		cin >> l >> r >> g;
		// find the number of multiples of 'g' from 1 to 'l - 1' and 1 to 'r'
		// we used 'l - 1' since each element of the set is between 'l' and 'r' (inclusive)
		// once you find that, calculate the difference to find the number of multiples of 'g'
		// within the range of 'l' and 'r' (inclusive)
		// edge case: if there is only one multiple of 'g' between 'l' and 'r', then we need
		// to check if that number 'x' is equal to 'g' (if yes, then output 1, otherwise 0)
		long long d = (r / g) - (l - 1) / g;
		if (d != 1) {
			cout << d;
		} else {
			cout << (g >= l && g <= r ? 1 : 0);
		}
		cout << '\n';
	}
	return 0;
}
