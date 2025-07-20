#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    double a, b, c, d, e, f;

    bool isSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int x1 = p2[0] - p1[0];
        int y1 = p2[1] - p1[1];
        int s1 = y1 * y1 + x1 * x1;
        a = pow(s1, 0.5);

        int x2 = p3[0] - p2[0];
        int y2 = p3[1] - p2[1];
        int s2 = y2 * y2 + x2 * x2;
        b = pow(s2, 0.5);

        int x3 = p4[0] - p3[0];
        int y3 = p4[1] - p3[1];
        int s3 = y3 * y3 + x3 * x3;
        c = pow(s3, 0.5);

        int x4 = p1[0] - p4[0];
        int y4 = p1[1] - p4[1];
        int s4 = y4 * y4 + x4 * x4;
        d = pow(s4, 0.5);

        int x5 = p3[0] - p1[0];
        int y5 = p3[1] - p1[1];
        int s5 = y5 * y5 + x5 * x5;
        e = pow(s5, 0.5);

        int x6 = p4[0] - p2[0];
        int y6 = p4[1] - p2[1];
        int s6 = y6 * y6 + x6 * x6;
        f = pow(s6, 0.5);

        if (a < 1e-6) return false;

        return fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6 &&
               fabs(c - d) < 1e-6 && fabs(d - a) < 1e-6 &&
               fabs(e - f) < 1e-6;
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<vector<int>> uniquePoints = {p1, p2, p3, p4};
        if (uniquePoints.size() < 4) return false;
        
        vector<vector<int>> pts = {p1, p2, p3, p4};
        sort(pts.begin(), pts.end());
        do {
            if (isSquare(pts[0], pts[1], pts[2], pts[3]))
                return true;
        } while (next_permutation(pts.begin(), pts.end()));

        return false;
    }
};
