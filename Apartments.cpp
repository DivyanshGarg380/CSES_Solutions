#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	for(int &x: a) cin >> x;
	
	vector<int> b(m);
	for(int &x: b) cin >> x;
	
	sort(b.begin(), b.end());
	sort(a.begin(), a.end());
	
	int ans = 0;
	int i = 0, j = 0;
	while(i < n && j < m) {
		if(b[j] < a[i] - k) {
			j++;
		} else if(b[j] > a[i] + k) {
			i++;
		} else {
			ans++;
			i++; j++;
		}
	}
	
	cout << ans;
	
	return 0;
}
