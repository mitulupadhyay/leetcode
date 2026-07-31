#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;

        for (int num : nums) {
            sum += num;
            ans.push_back(sum);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = obj.runningSum(nums);

    cout << "Running Sum: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}