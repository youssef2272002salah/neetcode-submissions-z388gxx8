
class Solution {
public:
    int findMin(vector<int> &nums) {

        int l= 0 , r=nums.size()-1,mid;
        while(nums[l]>nums[r]){
            mid =(r+l)/2;
            // cout <<"l "<<l<<" mid "<<mid<<" r"<<r<<endl;
            // cout <<"nums[l] "<<nums[l]<<"numsay of mid "<<nums[mid]<<"nums of r"<<nums[r]<<endl;

            if(r==l+1) return r;
            else if (nums[mid]>nums[l] ) l=mid;
            else r=mid;
        }
        return l;
    }

        int search(vector<int>& nums, int target) {

            int split = findMin(nums);

            int l=0, r= split,mid;
            while (l<=r){
                mid =(l+r)/2;
                if (nums[mid]==target) return mid;
                else if (nums[mid]>target) r= mid-1;
                else l=mid+1;
            }

            l=split;
            r=nums.size()-1;

            while (l<=r){
                mid =(l+r)/2;
                if (nums[mid]==target) return mid;
                else if (nums[mid]>target) r= mid-1;
                else l=mid+1;
            }

            return -1;


        }

};