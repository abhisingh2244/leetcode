class Solution {
public:
    int maxProfit(vector<int>& prices) {
       //It's wrong if you choose the minimum price for buy2 , but you can maximize the left money.
    //
    int buy1 = INT_MIN, sale1 = 0, buy2 = INT_MIN, sale2 = 0;
    for(int i=0; i<prices.size(); i++){                      //the more money left, the happier you will be
        buy1 = max(buy1, -prices[i]);                        //left money after buy1
        sale1 = max(sale1, prices[i] + buy1);                //left money after sale1
        buy2 = max(buy2, sale1 - prices[i]);                 //left money after buy2
        sale2 = max(sale2, prices[i] + buy2);                //left money after sale2
    }
    return sale2;  
    }
};