#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 100;

// 学生信息
struct Student {
    char name[31];  // 姓名
    float usual;    // 平时成绩
    float final;    // 期末成绩
    float total;    // 总成绩
};

// 总成绩计算函数
float calc_total(float usual, float final) {
    return usual * 0.4 + final * 0.6;
}

// 冒泡排序
void sort_students(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total < students[j + 1].total) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    Student students[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].usual >> students[i].final;
        students[i].total = calc_total(students[i].usual, students[i].final);
    }

    sort_students(students, n);

    for (int i = 0; i < n; i++) {
        printf("%s %.2f %.2f %.2f\n", students[i].name, students[i].usual, students[i].final, students[i].total);
    }

    return 0;
}

