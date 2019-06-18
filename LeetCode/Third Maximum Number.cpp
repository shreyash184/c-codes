class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // int numsi  = nums.size();
        // set<int, greater<int>>s;
        // for(int i=0;i<nums.size();i++)
        //     s.insert(nums[i]);
        // int size = s.size();
        // for(auto itr=s.begin();itr!=s.end();itr++){
        //     nums.insert(nums.begin(), *itr);
        // }
        // nums.resize(size);
        // // for(int i=0;i<nums.size();i++)
        // //     cout<<nums[i]<<" ";
        // if(numsi>= 3){
        //     return nums[nums.size()-3];
        // }else{
        //     return nums[nums.size()-1];
        // }
        set<int>s(begin(nums), end(nums));
        if(s.size() < 3) return *s.rbegin();
        else return *(++++s.rbegin());
    }
};