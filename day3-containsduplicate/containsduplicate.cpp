#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {//khai bao ham tra ve bool, tham so truyen vao la mang vector tham chieu
        unordered_set<int> seen;//khai bao hash set de luu cac gia tri da xuat hien
        for(int i=0;i<nums.size();i++){//duyet qua mang
            if(seen.find(nums[i])!=seen.end()){
                return true;//neu gia tri da xuat hien trong set thi tra ve true
            }
            else{
                seen.insert(nums[i]);//neu gia tri chua xuat hien thi them vao set
            }
        }
        return false;//duyet het mang ma khong co thi tra ve false
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