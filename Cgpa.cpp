#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int courses;
    double grade, credits;
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    cout << "===== CGPA CALCULATOR =====" << endl;

    cout << "Enter number of courses: ";
    cin >> courses;

    if (courses <= 0)
    {
        cout << "Invalid number of courses." << endl;
        return 0;
    }

    for (int i = 0; i < courses; ++i)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credits;

        if (grade < 0.0 || grade > 10.0 || credits <= 0.0)
        {
            cout << "Invalid input." << endl;
            return 0;
        }

        double points = grade * credits;

        totalCredits = totalCredits + credits;
        totalGradePoints = totalGradePoints + points;

        cout << "Grade = " << grade << endl;
        cout << "Credit Hours = " << credits << endl;
        cout << "Grade Points = " << points << endl;
    }

    double GPA = totalGradePoints / totalCredits;
    double CGPA = GPA;

    cout << fixed << setprecision(2);

    cout << "\n========== RESULT ==========" << endl;
    cout << "Total Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Semester GPA = " << GPA << endl;
    cout << "Final CGPA = " << CGPA << endl;
    cout << "============================" << endl;

    return 0;
}
