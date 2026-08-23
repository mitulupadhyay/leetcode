#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp =x;
        int rev =0;
        while(x > 0){
            int lastDigit = x%10;
            rev = rev*10 + lastDigit;
            x = x/10;
        }
        if(temp == rev){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Solution s1;
    cout<<s1.isPalindrome(121);
}