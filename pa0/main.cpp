#include<iostream>
#include<cmath>
#include<eigen3/Eigen/Core>
using namespace Eigen;
using namespace std;

int main() {
    double cos45 = cos(45.0 / 180.0 * M_PI);
    double sin45 = sin(45.0 / 180.0 * M_PI);
    double _sin45 = sin45 * (-1);
    Vector3d p(2, 1, 1);
    Matrix3d k;
    k << cos45, _sin45, 1,
            sin45, cos45, 2,
            0, 0, 1;
    Vector2d result = (k * p).head(2);
    cout << result << endl;
    return 0;
}