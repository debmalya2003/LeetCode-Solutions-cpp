//121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;//this ensures any array value will be lesser than INT_MAX,allowing arr[0] to be the minPrice value

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);//checks all array values
        maxPro = max(maxPro, arr[i] - minPrice);//compares minPrice to all array values after minimum value is set to minPrice
    }
    
    return maxPro;
}
};