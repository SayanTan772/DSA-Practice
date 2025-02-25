#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n,m,max = 0, pos, flag = true;
	    cin >> n >> m;
	    int arr[n][m];
	    
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<m;j++) {
	            cin >> arr[i][j];
	        }
	    }
	    
        for(int i=0; i<n; i++) {
            int count = 0;
            
            for(int j=0; j<m; j++) {
                if(arr[i][j] == 1) {
                    count++;
                    flag = false;
                }
            }
            
            if(count > max) {
                max = count;
                pos = i;
            }
        }
        
        if(flag == true) {
            cout << -1 << endl;
        } else {
            cout << pos << endl;
        }
        
	}

}