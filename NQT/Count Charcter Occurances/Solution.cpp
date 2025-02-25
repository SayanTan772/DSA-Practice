#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int sumOfOccurences(const string& st1, const string& st2) {
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    
    int sum = 0;
    
    for(int i=0; i<st1.length(); i++) {
        map1[st1[i]]++;
    }
    
    for(int j=0; j<st2.length(); j++) {
        map2[st2[j]]++;
    }
    
    for(auto it: map2) {
        if (map1.find(it.first) != map1.end()) {
            sum = sum + map1[it.first];
        }
    }
    
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1;
        cin >> str2;
        cout << sumOfOccurences(str1, str2) << "\n";
    }
}