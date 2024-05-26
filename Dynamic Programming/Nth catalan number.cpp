class Solution
{
    public:
    //Function to find the nth catalan number.
    
    int mod = (int)1e9+7;
    
     int findCatalan(int n) 
    {
        if(n<=1)
            return 1;
            
        vector<long long> dp(n + 1, 0);
        dp[0] = dp[1] = 1;
        
        for(int i=2; i<n+1; i++)
            for(int j=0; j<i; j++)
                {
                    dp[i] = ((dp[i]) + (dp[j] * dp[i-j-1]) )%mod;
                    
                }
                
        return (int)dp[n];
    }
};