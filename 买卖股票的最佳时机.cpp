给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。

如果你最多只允许完成一笔交易（即买入和卖出一支股票一次），设计一个算法来计算你所能获取的最大利润。

注意：你不能在买入股票前卖出股票。

int maxProfit(vector<int>& prices) {
    int ans = 0;
    vector<int> v;
    prices.emplace_back(-1);
    for (int i = 0; i < prices.size(); ++i) {
        while (!v.empty() && v.back() > prices[i]) {
            ans = max(ans, v.back()-v.front());
            v.pop_back();
        }
        v.emplace_back(prices[i]);
    }
    return ans;
}

int maxProfit(vector<int>& prices) {
    int minprice = INT_MAX, maxprofit = 0;
    for (int price : prices) {
        maxprofit = max(maxprofit,price-minprice);
        minprice = min(price, minprice);
    }
    return maxprofit;
}