/**
 * @file 70. ClimbingStairs.cpp
 * @author geitanksha@gmail.com
 * @brief 70. Climbing Stairs
 * @version 0.1
 * @date 2022-08-01
 *
 * @copyright Copyright (c) 2022 // LeetCode
 *
 */

class ClimbingStairs {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1 || n == 2 || n == 3)
            return n;
        vector<int> dp;
        dp.push_back(1);
        dp.push_back(2);
        dp.push_back(3);
        for (int i = 3; i < n; i++) {
            dp.push_back(dp[i - 1] + dp[i - 2]);
        }
        return dp[n - 1];
    }
};