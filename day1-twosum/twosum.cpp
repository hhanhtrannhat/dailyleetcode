#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {// khai bao ham tra ve vector, tham so truyen vao la 1 mang vector tham chieu va 1 so muc tiec
        unordered_map<int,int> m;//khai bao map de luu key value tuong ung
        for(int i=0;i<nums.size();i++){//duyet qua mang
            int check=target-nums[i];//tinh toan gia tri can tim
            if(m.find(check)!=m.end()){//neu gia tri can tim ton tai trong map(!= phan tu cuoi cung trong map)
                return {m[check],i};//thi tra ve chi so cua phan tu can tim va chi so hien tai
            }
            m[nums[i]]=i;//neu gia tri can tim khong ton tai, thi them phan tu hien tai vao map
}
        return {};
    }};
int main(){
    Solution s;
    int target,temp;
    vector<int> nums;
    cin>>target;
    while(cin>>temp){
        nums.push_back(temp);
    }
    vector<int> result=s.twoSum(nums,target);
    cout<<result[0]<<" "<<result[1]<<endl;

}