class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //Base Case
        if(amount==0)
        {
            return 0;
        }

        int mini = INT_MAX;
        int ans =INT_MAX;

        for(int i=0; i<coins.size(); i++)
        {
            int CurrentCoin = coins[i];

            //current coin tbhi use kar sakete hai 
            //jb uski value <=amount ho

            if(CurrentCoin <= amount)
            {
                int recAns = coinChange(coins, amount-CurrentCoin);

                if(recAns != INT_MAX)
                {
                    ans = 1+recAns;
                }
            }
            mini = min(mini , ans);
        }
        return mini;
    }
};