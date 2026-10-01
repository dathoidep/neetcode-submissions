class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        for ( int i = 0 ; i < nums.size() ; i++ ){
            int count = 0;
            for ( int j = i + 1 ; j <= nums.size() -1 ; j++){
                if ( nums[j] == nums[i] ){
                    count++;
                }
            }
            if (count >=1) return true;
        }
        return false;
    }
};