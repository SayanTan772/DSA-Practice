#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int f = 0;
    
    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            f++;
        }
    }
    
    if(f == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int sum = a + b;
	    
	    if(isPrime(sum)) {
	        cout << "ALICE" << endl;
	    } else {
	        cout << "BOB" << endl;
	    }
	}

}