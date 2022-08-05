/**
 * @file First Bad Version
 * @author geitanksha@gmail.com
 * @brief 278. First Bad Version
 * @version 0.1
 * @date 2022-07-29
 *
 * @copyright Copyright (c) 2022 // LeetCode
 *
 */

 // The API isBadVersion is defined for you.
 // bool isBadVersion(int version);

class FirstBadVersion {
public:
    int firstBadVersion(int n) {
        int l = 0, r = n;
        long bad = 0;
        long m = (l + r) / 2;
        if (n == 1)
            return 1;
        while (l <= r) {
            if (isBadVersion(m) == true) {
                bad = m;
                r = m - 1;
            }
            else
                l = m + 1;
            m = l + ((r - l) / 2);
        }
        return bad;
    }
};