class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        for (int i = 0; i < points.size() - 2; i++) {
            double x1 = points[i][0];
            double y1 = points[i][1];
            for (int j = i + 1; j < points.size() - 1; j++) {
                double x2 = points[j][0];
                double y2 = points[j][1];
                for (int k = j + 1; k < points.size(); k++) {
                    double x3 = points[k][0];
                    double y3 = points[k][1];
                    double curArea = 1 /(double) 2 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) *  (y2 - y1));
                    maxArea = curArea > maxArea ? curArea : maxArea;
                }
            }
        }
        return maxArea;
    }
};
