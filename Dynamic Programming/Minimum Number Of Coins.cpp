class Solution{
public:
    vector<int> minPartition(int n)
    {
        vector<int> ans;
        
        vector<int> coins;
        coins.push_back(1);
        coins.push_back(2);
        coins.push_back(5);
        coins.push_back(10);
        coins.push_back(20);
        coins.push_back(50);
        coins.push_back(100);
        coins.push_back(200);
        coins.push_back(500);
        coins.push_back(2000);
        
        int idx = coins.size() - 1;
        
        // while(n){
        //     while(coins[idx] > n){
        //         idx--;
        //     }
            
        //     n = n - coins[idx];
            
        //     ans.push_back(coins[idx]);
        // }
        
        for(int i=idx; i>=0; i--){
            while(n>=coins[i]){
                ans.push_back(coins[i]);
                n = n - coins[i];
            }
        }
        
        return ans;
    }
};