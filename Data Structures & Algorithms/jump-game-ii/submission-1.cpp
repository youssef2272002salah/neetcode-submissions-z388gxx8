class Solution {
public:
    int jump(vector<int>& nums) {
        int oldmax=0,newmax=0;
        int movements[nums.size()+2];
        movements[0]=0;

        for(int i=0;i<(int)nums.size();i++){
            oldmax=newmax;
            newmax = max(newmax,i+nums[i]);
            cout<<"old max "<<oldmax<<" new max "<<newmax<<" which is num "<<nums[i]<<endl;
            for(int j=oldmax+1;j<newmax+1;j++){
                if (j>=nums.size()) break;
                movements[j]=movements[i]+1;
                cout<<"movements of "<<j<<" is "<<movements[j]<<endl;
            }
        }

        return movements[nums.size()-1];
     }

};
