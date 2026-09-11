/*
Author :

███████╗████████╗ █████╗ ██████╗  ███╗   ███╗ █████╗ ███╗   ██╗
██╔════╝╚══██╔══╝██╔══██╗██╔══██╗ ████╗ ████║██╔══██╗████╗  ██║
███████╗   ██║   ███████║██████╔╝ ██╔████╔██║███████║██╔██╗ ██║
╚════██║   ██║   ██╔══██║██║  ██║ ██║╚██╔╝██║██╔══██║██║╚██╗██║
███████║   ██║   ██║  ██║██║  ██║ ██║ ╚═╝ ██║██║  ██║██║ ╚████║
╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝  STARMAN248
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	vector<pair<int, int>> events;
	
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		events.push_back({a, 1});
		events.push_back({b, -1});
	}
	
	sort(events.begin(), events.end());
	int curr = 0, ans = 0;
	for(auto [time, change]: events) {
		curr += change;
		ans = max(ans, curr);
	}
	
	cout << ans << "\n";
	return 0;
}