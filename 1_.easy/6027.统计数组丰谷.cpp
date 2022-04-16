#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        for (auto x : nums) {
            cout << " " << x ;
        }
        cout << endl;

        int res = 0;
        
        int i = 1;
        while(i<nums.size()-1) {
            int j = i;

            if(nums[j] > nums[j-1] && nums[j] > nums[j+1]) {
                cout << "--: " << i <<endl;
                ++res;
            } else if(nums[j] < nums[j-1] && nums[j] < nums[j+1]) {
                cout << "--: " << i <<endl;
                ++res;
            } else if (nums[j] == nums[j-1]) {
                i++;
                continue;
            } else {
                    cout << " in j = " << j << endl;
                    while(j+1 < nums.size() - 1 && nums[j] == nums[j+1]) {
                        j++;
                    }
                    if (nums[j+1] > nums[i] && nums[i] < nums[i-1]) {
                        cout << "--x1: " << j <<endl;
                        ++res;
                    }
                    if (nums[j+1] < nums[i] && nums[i] > nums[i-1]) {
                        ++res;
                        cout << "--x: " << j  << " " << nums[j+1] <<endl;
                    }
                
            }
            i = j+1;
        }
        return res;
    }
};

int main() {
    Solution s; 
    vector<int> v{57,90,90,85,85,86,86};
    int res = s.countHillValley(v);
    cout << res << endl;
    return 0;
}