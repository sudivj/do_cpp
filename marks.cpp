#include <iostream>
using namespace std;

class marks
{
public:
    int subject[100];
    double average;
    int highest = 0;
    int lowerst = 100;
    int subject_number;
    int current_marks;
    int total;

    void getMarks()
    {
        cout << "Enter number of subjects: " << endl;
        cin >> subject_number;
        for (int i = 0; i < subject_number; i++)
        {
            cout << "Enter subject" << i + 1 << " marks: ";
            cin >> current_marks;
            subject[i] = current_marks;
        }
    }

    void calculateAverage()
    {
        int t = 0;
        for (int i = 0; i < subject_number; i++)
        {
            t += subject[i];
        }
        average = t / subject_number;
        total = t;
        cout << "\nTotal: " << total << endl
             << "Average: " << average << endl;
    }

    void highest_lowest()
    {
        for (int i = 0; i < subject_number; i++)
        {
            if (highest < subject[i])
            {
                highest = subject[i];
            }
        }
        for (int i = 0; i < subject_number; i++)
        {
            if (lowerst > subject[i])
            {
                lowerst = subject[i];
            }
        }
        cout << "Highest marks: " << highest << endl
             << "Lowest marks: " << lowerst;
    }
};

marks getmarks()
{
    
}

int main()
{
    marks m;
    m.getMarks();
    m.calculateAverage();
    m.highest_lowest();
}