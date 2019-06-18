class Solution {
public:
    //Best Solution ever
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        nums.insert( nums.begin(), nums.begin() + (size - k%size), nums.end());
        nums.resize(size);
    }
};