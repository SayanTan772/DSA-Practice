#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    unordered_map<int, int> map;
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    
	    for(int i=0;i<n;i++) {
	        cin >> arr[i];
	        map[arr[i]]++;
	    }
	    
	    if(map.size() == 1) {
	        cout << "YES" << endl;
	    } else {
	        int max = 0, count = 0;
	        
	        for(auto it: map) {
	            if(it.second > max) {
	                max = it.second;
	                count = 1;
	            } else if(it.second == max) {
	                count++;
	            }
	        }
	        
	        if(max > 1 && count == 1) {
	            cout << "YES" << endl;
	        } else {
	            cout << "NO" << endl;
	        }
	    }
	}
	
	return 0;

}