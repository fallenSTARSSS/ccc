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
    cout << "������Բ�İ뾶��";
    cin >> radius;

    double diameter = Diameter(radius);
    double circumference = Circumference(radius);
    double area = Area(radius);

    cout << "ֱ��= "<< diameter << endl;
    cout << " �ܳ�=" << circumference << endl;
    cout << " ���=��" << area << endl;

    return 0;
}
