#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    float TotalGrades = 0.f;
    float TotalScores = 0.f;
    for (int i = 0; i < 20; ++i)
    {
        string name;
        float  grade;
        string credit;
        cin >> name >> grade >> credit;

        if (credit == "P")
            continue;

        TotalGrades += grade;
        float SubjectScore = 0.f;
        if (credit == "A+")
            SubjectScore = 4.5f;
        else if (credit == "A0")
            SubjectScore = 4.0f;
        else if (credit == "B+")
            SubjectScore = 3.5f;
        else if (credit == "B0")
            SubjectScore = 3.0f;
        else if (credit == "C+")
            SubjectScore = 2.5f;
        else if (credit == "C0")
            SubjectScore = 2.0f;
        else if (credit == "D+")
            SubjectScore = 1.5f;
        else if (credit == "D0")
            SubjectScore = 1.0f;
        else if (credit == "F")
            SubjectScore = 0.0f;
        TotalScores += grade * SubjectScore;
    }

    cout << TotalScores / TotalGrades;
    return 0;
}