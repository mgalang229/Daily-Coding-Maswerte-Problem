#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e6;
int a[mxN], n;

void decode() {
	cin >> n;
	int cnt = 0;
	while (n != 0) {
		a[cnt] = n % 10;
		n /= 10;
		cnt++;
	}
	int sum = 0, sum2 = 0;
	for (int i = 0; i < cnt / 2; i++) {
		sum += a[i];
	}
	for (int i = cnt / 2; i < cnt; i++) {
		sum2 += a[i];
	}
	if (sum == sum2) cout << "True";
	else cout << "False";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);	
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
