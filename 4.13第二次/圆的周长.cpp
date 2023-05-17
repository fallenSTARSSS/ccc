#include <iostream>
using namespace std;
double Diameter(double radius) {
    return 2 * radius;
}
double Circumference(double radius) {
    return 2 * 3.14 * radius;
}
double Area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius;
    cout << "请输入圆的半径：";
    cin >> radius;

    double diameter = Diameter(radius);
    double circumference = Circumference(radius);
    double area = Area(radius);

    cout << "直径= "<< diameter << endl;
    cout << " 周长=" << circumference << endl;
    cout << " 面积=：" << area << endl;

    return 0;
}
