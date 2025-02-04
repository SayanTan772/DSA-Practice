#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        for (auto it : freq) {
            if (it.second % 2 != 0) {
                cout << it.first << endl;
                break;
            }
        }
    }
    
    return 0;
}