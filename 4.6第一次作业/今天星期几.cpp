#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

string getWeekday(int year, int month, int day) {
    int weekday = 0; 
    for (int i = 1990; i < year; i++) {
        weekday += isLeapYear(i) ? 366 : 365;
    }
    int daysPerMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysPerMonth[1] = 29;
    }
    for (int i = 0; i < month - 1; i++) {
        weekday += daysPerMonth[i];
    }
    weekday += day;
    weekday %= 7;
    string weekdays[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
    return weekdays[weekday];
}

int main() {
    int year, month, day;
    cout << "请输入日期（格式为 yyyy-mm-dd）: ";
    scanf("%d-%d-%d", &year, &month, &day);
    string weekday = getWeekday(year, month, day);
    cout << year << "-" << month << "-" << day << " 是" << weekday << endl;
    return 0;
}
