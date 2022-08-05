/**
 * @file NumOfIslands.cpp
 * @author geitanksha@gmail.com
 * @version 0.1
 * @date 2022-08-01
 *
 * @copyright Copyright (c) 2022 // LeetCode
 *
 */

class numIslands {
public:
    int numIslands(vector<vector<char>>& grid) {
        int num = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    num++;
                    finishIsland(grid, i, j);
                }
            }
        }
        return num;
    }

    void finishIsland(vector<vector<char>>& grid, int i, int j) {

        //mark the curr location as arbitrary character so it is not counted again
        grid[i][j] = '-';

        //now complete the rest of this single island:

        //go left
        if (((i - 1) >= 0) && (grid[i - 1][j] == '1'))
            finishIsland(grid, i - 1, j);

        //go right
        if (((i + 1) < grid.size()) && (grid[i + 1][j] == '1'))
            finishIsland(grid, i + 1, j);

        //go up
        if (((j - 1) >= 0) && (grid[i][j - 1] == '1'))
            finishIsland(grid, i, j - 1);

        //go down
        if (((j + 1) < grid[0].size()) && (grid[i][j + 1] == '1'))
            finishIsland(grid, i, j + 1);
    }
};