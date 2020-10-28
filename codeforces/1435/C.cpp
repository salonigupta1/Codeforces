#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[6];
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	int n;
	cin >> n;

	vector<int> notes(n);
	for (int i = 0; i < n; i++) {
		cin >> notes[i];
	}

	// all pair of fret poss for i th note {fretVal,i}
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[j] < notes[i])
				arr.push_back({notes[i] - a[j], i});
		}
	}
	sort(arr.begin(), arr.end());

	vector<int> cnt(n, 0);
	int minDiff = INT_MAX, cnt_diff = 0, right = 0;

	for (int left = 0; left < arr.size(); left++) {
		while (right < arr.size() and cnt_diff < n) {
			if (cnt[arr[right].second] == 0)
				++cnt_diff;
			cnt[arr[right].second]++;
			right++;
		}
		if (cnt_diff == n) {
			minDiff = min(minDiff, arr[right - 1].first - arr[left].first);
		}
		--cnt[arr[left].second];
		if (cnt[arr[left].second] == 0)
			cnt_diff--;
	}


	cout << minDiff << endl;

	return 0;
}