#include<bits/stdc++.h>
using namespace std;
/*
int maxProfit(vector<int>& prices) {
    int min = prices[0];
    int sum = 0;
    for (int i= 1;i<prices.size();i++) {
        if (sum < prices[i]-min) {
            sum = prices[i]-min;
        }
        if (prices[i]<min)
        {
            min-prices[i];
        }
    }
    return sum;
}
*/


int maxProfit (vector<int>& prices){
int minSoFar = prices[0];
    int ans = 0;
        for (int i=1;i<prices.size();i++) {
            int profit = prices[i] - minSoFar;
                if (profit > ans) {
                    ans = profit;
                }
                minSoFar = min(prices[i], minSoFar);
        }
        return ans;
}

int main () {
    int profit;
    vector<int> stock {2,4,1};
    profit = maxProfit(stock);
    cout << profit;
}