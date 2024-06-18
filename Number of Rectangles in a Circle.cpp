class Solution {
public:
    int RectanglesInCircle(int r) {
        
        int count = 0;
        int r2 = r * r;  // r squared

        for (int i = 1; i <= 2 * r; ++i) {
            for (int j = 1; j <= 2 * r; ++j) {
                if (i * i + j * j <= 4 * r2) {
                    count++;
                } else {
                    break;
                }
            }
        }
        return count;
    }
};
