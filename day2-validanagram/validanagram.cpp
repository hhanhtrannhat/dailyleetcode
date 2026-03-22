#include <iostream>
#include <string>
using namespace std;

class Solution{
    public:
    bool isAnagram(string s,string t){//ham tra ve kieu bool, tham so truyen vao la 2 chuoi
            if(s.size()!=t.size()){//neu do dai hai chuoi khac nhau thi end
                return false;
            }
            int count[26]={0};//khoi tao mang 26 phan tu de dem so lan xuat hien cua moi ky tu
            for(int i=0;i<s.size();i++){
                    count[s[i]-'a']++;//++ neu xuat hien o string s
                    count[t[i]-'a']--;//-- neu xuat hien o string t
            }
            for(int i=0;i<26;i++){
                if(count[i]!=0){//neu co phan tu khac 0 thi end
                    return false;//else
                }
            }
            return true;

    }
};
int main(){
    Solution s;
    string s1,s2;
    string temp;
    cin>>s1;
    cin>>s2;
    cout<<s.isAnagram(s1,s2)<<endl;
    return 0;
}