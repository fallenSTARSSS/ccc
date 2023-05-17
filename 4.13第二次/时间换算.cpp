#include <iostream>
using namespace std;

int main() {
    int bjt;
    cin >> bjt;
    int hour = bjt / 100;
    int minute = bjt % 100;
    int utc_hour = hour - 8;
    int utc_minute = minute;
    if (utc_hour < 0) {
        utc_hour += 24;
    }
    cout << "对应的UTC时间为：" << utc_hour / 10 << utc_hour % 10 << utc_minute / 10 << utc_minute % 10 << endl;
    return 0;
}
