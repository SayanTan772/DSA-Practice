#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    vector <int> arr(n);
	    
	    int max = 0;
	    
	    for(int i=0;i<n;i++) {
	        cin >> arr[i];
	        
	        if(arr[i] > max) {
	            max = arr[i];
	        }
	    }
	    
	    cout << max << endl;
	}
	
	
    return 0;
}