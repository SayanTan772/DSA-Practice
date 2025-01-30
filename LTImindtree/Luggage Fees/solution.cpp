#include <iostream>
using namespace std;

int LuggageFees(int n, int t, int weights[]) {
    int amt = 0;

    for(int i=0;i<n;i++) {
        if(weights[i] <= t) {
            amt++;
        } else {
            amt += 2;
        }
    }

    return amt;
}

int main() {
    int weights[] = {11,12,13,14,15};
    int N = 5;
    int T = 10;

    int result = LuggageFees(N,T,weights);

    cout << result;

    return 0;
}