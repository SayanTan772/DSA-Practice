#include <iostream>
using namespace std;

int BorrowMoney(int N, int cost[], int earn[]) {
    int sum = 0;
    
    for(int i = 0; i < N; i++) {
        sum += cost[i] - earn[i];
    }
    
    if(sum < 0) {
        return 0;
    } else {
        return sum;   
    }
}

int main() {
    int n = 3;
    int EarnArray[] = {3, 4, 2};
    int CostArray[] = {5, 3, 4};

    int result = BorrowMoney(n, CostArray, EarnArray);
    cout << result << endl;

    return 0;
}