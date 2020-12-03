int maxProfit(vector<int>& prices){
    int maxprofit = 0, minPrice = prices[0];

    for(int i=1; i<prices.size(); i++){
        minPrice = min(minPrice,prices[i]);
        maxProfit = max(maxProfit,prices[i]-minprice);
    }

    return maxProfit
}