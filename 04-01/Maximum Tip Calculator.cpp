#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x, y, i, ans;
		ans = 0;
		cin >> n >> x >> y;
		int arr1[n], arr2[n];
		for (i = 0; i < n; ++i){
			cin >> arr1[i];
		}
		for (i = 0; i < n; ++i){
			cin >> arr2[i];
		}
		pair <int, int> diffpos[n];
		int arr[n];
		for (i = 0; i < n; ++i){
			diffpos[i].first = abs(arr1[i]-arr2[i]);
			diffpos[i].second = i;
			arr[i] = arr1[i] > arr2[i] ? 1 : 2;
		}
		sort(diffpos, diffpos+n);
		// for (i = 0; i < n; ++i){
		// 	cout << diffpos[i].first << " ";
		// }
		// cout << endl;
		// for (i = 0; i < n; ++i){
		// 	cout << diffpos[i].second << " ";
		// }
		// cout << endl;
		// for (i = 0; i < n; ++i){
		// 	cout << arr[i] << " ";
		// }
		// cout << endl;
		// cout << "done\n";
		int temp;
		for (i = n-1; i >= 0; i--){
			temp = diffpos[i].second;
			// cout << temp << endl;
			if (x > 0 && y > 0){
				if (arr[temp] == 1){
					x -= 1;
					ans += arr1[temp];
				}
				else{
					y -= 1;
					ans += arr2[temp];
				}
			}
			else if (x > 0){
				x -= 1;
				ans += arr1[temp];
			}
			else{
				y -= 1;
				ans += arr2[temp];
			}
		}
		cout << ans << endl;
	}
	return 0;
}