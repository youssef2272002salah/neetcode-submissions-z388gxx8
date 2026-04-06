
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx= 0;
        for(int i=0;i<(int)(nums.size())-1;i++){
            maxx= max (maxx,nums[i]+i);
            // cout<<"maxx "<<maxx<<" and i+1 is "<<i+1<<endl;
            if(i+1>maxx) return false;
        }
        return true;
    }
};