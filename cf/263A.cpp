#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	// valid transformations:
	// swap two rows (i and i+1)
	// swap two columns (j and j+1)
	// beautiful: 1 -> (3,3) one-indexed, or (2,2) zero-indexed

	int mi, mj;
	int x;
	for(int i = 1; i < 6; i++) {
		for(int j = 1; j < 6; j++) {
			cin >> x;
			if(x == 1) {
				mi = i;
				mj = j;
				goto found;
			}
		}
	}
	found:
		cout << abs(3 - mi) + abs(3 - mj) << "\n";
}
