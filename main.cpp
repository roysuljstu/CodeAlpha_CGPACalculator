
#include <bits/stdc++.h>
using namespace std;

class Course
{
public:
    string courseName;
    double grade;
    double credit;

    void input()
    {
        cout << "Enter course name: ";
        cin >> courseName;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;
    }

    void display()
    {
        cout << left << setw(15) << courseName
             << setw(15) << grade
             << setw(15) << credit
             << setw(15) << grade * credit
             << endl;
    }
};

class CGPACalculator
{
public:
    vector<Course> courses;
    double totalCredits = 0;
    double totalGradePoints = 0;

    void inputCourses()
    {
        int n;

        cout << "Enter number of courses: ";
        cin >> n;

        if (n <= 0)
        {
            cout << "Invalid number of courses!\n";
            return;
        }

        courses.resize(n);

        for (int i = 0; i < n; i++)
        {
            cout << "\nCourse " << i + 1 << endl;
            courses[i].input();

            if (courses[i].grade < 0 ||
                courses[i].grade > 4 ||
                courses[i].credit <= 0)
            {
                cout << "Invalid grade or credit!\n";
                courses.clear();
                return;
            }

            totalCredits += courses[i].credit;

            totalGradePoints +=
                courses[i].grade * courses[i].credit;
        }
    }

    double calculateGPA()
    {
        if (totalCredits == 0)
            return 0;

        return totalGradePoints / totalCredits;
    }

    void displayResult()
    {
        if (courses.empty())
        {
            cout << "No valid course data available!\n";
            return;
        }

        cout << "\n========== COURSE RESULTS ==========\n";

        cout << left << setw(15) << "Course"
             << setw(15) << "Grade"
             << setw(15) << "Credit"
             << setw(15) << "Grade Points"
             << endl;

        for (int i = 0; i < courses.size(); i++)
        {
            courses[i].display();
        }

        cout << "\nTotal Credits: " << totalCredits << endl;

        cout << "Total Grade Points: "
             << totalGradePoints << endl;

        cout << "Semester GPA: "
             << fixed << setprecision(2)
             << calculateGPA() << endl;
    }
};

int main()
{
    CGPACalculator student;

    student.inputCourses();
    student.displayResult();

    return 0;
}
