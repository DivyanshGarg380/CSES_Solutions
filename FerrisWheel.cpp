#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int &x: a) cin >> x;
	
	sort(a.begin(), a.end());
	int ans = 0;
	
	int left = 0, right = n - 1;
	while(left <= right) {
		if(a[left] + a[right] <= x) left++;
		right--;
		ans++;
	}
	
	cout << ans;
	
    return 0;
}
