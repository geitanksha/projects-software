/**
 * @file FloodFill.cpp
 * @author geitanksha@gmail.com
 * @brief 733. Flood Fill
 * @version 0.1
 * @date 2022-07-29
 *
 * @copyright Copyright (c) 2022 // LeetCode
 *
 */

class FloodFill
{
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color)
            return image;
        floodFillHelper(image, sr, sc, image[sr][sc], color);
        return image;
    }

    void floodFillHelper(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {
        image[sr][sc] = newColor;
        // check left
        if ((sc - 1 >= 0) && (oldColor == image[sr][sc - 1]))
            floodFillHelper(image, sr, sc - 1, oldColor, newColor);
        // check right
        if ((sc + 1 < (int)image[0].size()) && (oldColor == image[sr][sc + 1]))
            floodFillHelper(image, sr, sc + 1, oldColor, newColor);
        // check up
        if ((sr - 1 >= 0) && (oldColor == image[sr - 1][sc]))
            floodFillHelper(image, sr - 1, sc, oldColor, newColor);
        // check down
        if ((sr + 1 < (int)image.size()) && (oldColor == image[sr + 1][sc]))
            floodFillHelper(image, sr + 1, sc, oldColor, newColor);
    }
};