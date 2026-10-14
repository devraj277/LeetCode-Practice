class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int largest = 0, n = accounts.size();
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            if(sum>largest)
                largest = sum;
        }

        // int largest = accounts[0];
        // for(int i=1; i<n; i++){
        //     if(accounts[i]>largest){
        //         largest = accounts[i];
        //     }
        // }
        return largest;
    }
};