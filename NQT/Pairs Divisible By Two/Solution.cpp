#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    long long int t;
    cin  >> t;
    
    while(t--){
        long long int n;
        cin >> n;
        vector<int> arr(n);
        
        long long int even = 0, odd = 0;
        
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        
        long long int result = (even * (even - 1) / 2) + (odd * (odd - 1) / 2);
        
        cout << result << endl;
        
    }

}