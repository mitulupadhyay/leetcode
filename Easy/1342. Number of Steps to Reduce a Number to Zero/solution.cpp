#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {

        int steps = 0;

        while (num > 0) {

            if (num % 2 == 0) {
                num = num / 2;
            }
            else {
                num = num - 1;
            }

            steps++;
        }

        return steps;
    }
};
int main(){
    Solution s;
    cout<<s.numberOfSteps(22);
}