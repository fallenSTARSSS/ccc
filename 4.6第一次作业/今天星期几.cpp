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
    string weekdays[] = { "������", "����һ", "���ڶ�", "������", "������", "������", "������" };
    return weekdays[weekday];
}

int main() {
    int year, month, day;
    cout << "���������ڣ���ʽΪ yyyy-mm-dd��: ";
    scanf("%d-%d-%d", &year, &month, &day);
    string weekday = getWeekday(year, month, day);
    cout << year << "-" << month << "-" << day << " ��" << weekday << endl;
    return 0;
}
