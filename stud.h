#include <iostream>
#include <string>
using namespace std;

struct Student
{
    char surname[12];
    int group_number;
    float math_score;
    float history_score;
    float programming_score;
    float average_score;
};

void New_list(Student* student, const int size)
{
    float sum2 = 0;

    for (int a = 0; a < size; a++)
    {
        for (int i = 0; i < size; i++)
        {
            if (student[i].group_number > student[i + 1].group_number)
            {
                swap(student[i], student[i + 1]);
            }
        }
    }
    cout << "Впорядкований список по групах: \n" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Прізвище: " << student[i].surname;
        cout << "\tГрупа: " << student[i].group_number << endl << endl;
        cout << "Бали: " << endl;
        cout << "Математика: " << student[i].math_score;
        cout << "\tІсторія: " << student[i].history_score;
        cout << "\tПрограмувння: " << student[i].programming_score;

        sum2 = student[i].math_score + student[i].history_score + student[i].programming_score;
        student[i].average_score = (sum2 / 3);
        cout << "\tCередній бал = " << student[i].average_score << endl << endl;
    }
}

void Student_element(Student* student, const int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Введіть прізвище " << i + 1 << " студента: ";
        cin.ignore(cin.rdbuf()->in_avail());
        cin.getline(student[i].surname, 12);
        cout << endl;
        cout << "Введіть номер групи : ";
        cin >> student[i].group_number;
        cout << endl;
        cout << "Введіть оцінки. ";
        cout << "\nМатематика: ";
        cin >> student[i].math_score;
        cout << "\nІсторія: ";
        cin >> student[i].history_score;
        cout << "\nПрограмувння: ";
        cin >> student[i].programming_score;

        sum = student[i].math_score + student[i].history_score + student[i].programming_score;
        student[i].average_score = (sum / 3);
        cout << "\nCередній бал = " << student[i].average_score << endl;
    }   cout << endl;
}

void Upor_list(Student* student, const int size)
{
    for (int a = 0; a < size; a++)
    {
        for (int i = 0; i < size; i++)
            if (student[i].average_score < student[i + 1].average_score)
            {
                swap(student[i], student[i + 1]);
            }
    }
    cout << "Впорядкований список : \n\n";
    for (int i = 0; i < size; i++)
    {
        cout << student[i].surname << "\tCередній бал = " << student[i].average_score << endl;
    }cout << endl << endl;
}
void Gotovo(Student* student, const int size)
{
    student[0] = { "Maugli", 2, 3.0, 3.0, 3.0, 0 };
    student[1] = { "Akella", 2, 4.0, 5.0, 2.0, 0 };
    student[2] = { "Kaa   ", 2, 5.0, 5.0, 5.0, 0 };
    student[3] = { "Balu  ", 2, 5.0, 5.0, 3.0, 0 };
    student[4] = { "Bagira", 2, 4.0, 5.0, 5.0, 0 };
    student[5] = { "Sherhan", 1, 3.0, 3.0, 5.0, 0 };
    student[6] = { "Tabaki", 1, 3.0, 3.0, 3.0, 0 };
}
