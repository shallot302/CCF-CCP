#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	int a[100000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	if (n % 2 == 0) {
		if (a[n / 2] != a[n / 2 - 1]) {
			printf("-1");
			goto final;
		}
		int cnt1 = 0, cnt2 = 0;
		for (int i = n / 2 - 2; i >= 0; i--) {
			if (a[i] == a[n / 2]) {
				cnt1++;
			}
		}
		for (int i = n / 2 + 1; i < n; i++) {
			if (a[i] == a[n / 2]) {
				cnt2++;
			}
		}
		if (cnt1 == cnt2) {
			printf("%d", a[n / 2]);
		}
		if (cnt1 != cnt2) {
			printf("-1");
			goto final;
		}
	}
	if (n % 2 != 0) {
		int cnt1 = 0, cnt2 = 0;
		for (int i = n / 2 -1; i >= 0; i--) {
			if (a[i] == a[n / 2]) {
				cnt1++;
			}
		}
		for (int i = n / 2 + 1; i < n; i++) {
			if (a[i] == a[n / 2]) {
				cnt2++;
			}
		}
		if (cnt1 == cnt2) {
			printf("%d", a[n / 2]);
		}
		else {
			printf("-1");
			goto final;
		}
	}



	final:
	return 0;
}