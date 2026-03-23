#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i])!=seen.end()){
                return true;
            }
            else{
                seen.insert(nums[i]);
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    vector<int> nums;
    int n,temp;
    while(cin>>temp){
        nums.push_back(temp);
    }
    cout<<s.containsDuplicate(nums)<<endl;
    return 0;
}