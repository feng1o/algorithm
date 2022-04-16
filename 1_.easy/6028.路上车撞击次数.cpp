#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int res = 0;

        int len = directions.size();
        int l = 0;
        int r = len - 1; // len > 0

        cout << directions << endl;
        while(directions[l] == 'L') ++l;
        while(directions[r] == 'R') ++r;

            int lr = 0;
            int ls = 0;
            while(l <= r) {
                if(directions[l] == 'R') {
                    ++lr;
                }
                if(directions[l] == 'S') {
                    res += lr;
                    lr = 0;
                    ls = 1;
                }
                if (directions[l] == 'L') {
                    res = res + (lr > 0 ? (lr + 1) : 1);
                    lr = 0;
                    ls = 1;
                }
                ++l;
            }

        return res;
    }
};

int main() {
    Solution s;
    std::cout << s.countCollisions("RLRSLL");
    return 0;
}