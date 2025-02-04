#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

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
        
        cout << map.size() << endl;
    }
    	
    return 0;
}
