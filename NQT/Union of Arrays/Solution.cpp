#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

vector<int> findUnion(int n, int m, vector<int>& arr1, vector<int>& arr2) {
    set<int> unionSet;
    
    unionSet.insert(arr1.begin(), arr1.end());
    unionSet.insert(arr2.begin(), arr2.end());

    return vector<int>(unionSet.begin(), unionSet.end());  
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);

        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        vector<int> result = findUnion(n, m, arr1, arr2);

        for (auto & val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}