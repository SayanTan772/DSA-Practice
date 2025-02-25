#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int temp = n, sum = 0;
	    
	    while(temp > 0) {
	        int rem = temp % 10;
	        sum = sum + rem;
	        temp = temp / 10;
	    }
	    
	    if(n % sum == 0) {
	        cout << "Good Number" << endl;
	    } else {
	        cout << "Bad Number" << endl;
	    }
	}

}