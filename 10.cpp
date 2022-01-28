// Generate Random Point in a Circle.

class Solution {
private:
    double r;
    double x;
    double y;
public:
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }

    vector<double> randPoint() {
        double len=((double)rand()/(RAND_MAX));
        len=sqrt(len)*r;
        double angle=((double)rand()/(RAND_MAX));
        angle*=360.0;
        vector<double> ans;
        ans.push_back(x+len*cos(angle));
        ans.push_back(y+len*sin(angle));
        return ans;
    }
};
