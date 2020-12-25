/*
 Name: Ahmed Haitham
 Class: 2
 Department: Computer
*/

#include <iostream>
#include <cstring>
/*libraries holding special functions like input output and more*/
using namespace std;
struct student
/*make structure class named student*/
{
    char name[20];
    char dep[20];
    int roll;
    float mat,avg;
/*definitions as integer and float and charachter*/
} a[10];
/*array size of 10*/
int main()
/*start program here*/
{
    for (int i = 0; i < 10; ++i)
/*loop inputs til it is done 10 students*/
    {
		if (i < 10)
		{
			do
			{
				cout << "Enter name: ";
				cin >> a[i].name;
				cout << "Enter section: ";
				cin >> a[i].dep;
				cout << "Enter university number: ";
				cin >> a[i].roll;
				cout << "Mark: ";
				cin >> a[i].mat;
				i = i + 1;
				if (i > 9) {
					break;
/* break the loop of do while before while to add 10 students*/
				}
			} while (i < 5);
/*the loop ends here in the while line*/
			cout << endl;
		}
	}
		for(int i = 0; i < 10; ++i)
		{
			cout << "\nName: " << a[i].name << endl;
			if (strcmp(a[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
/*instead of type full section just use single string*/
			else if (strcmp(a[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			else if (strcmp(a[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
/*output screen after input all student info*/
			else {
				cout << "Section: " << a[i].dep;
			}
			cout << "\nUniversity ID Number: " << a[i].roll << endl;
			a[i].avg = a[i].mat / 8;
			if (a[i].avg >= 90 && a[i].avg <= 100) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: A\n";
			}
			else if (a[i].avg >= 80 && a[i].avg <= 89) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: B\n";
			}
			else if (a[i].avg >= 70 && a[i].avg <= 79) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: C\n";
			}
/*markings and grades codes*/
			else if (a[i].avg >= 60 && a[i].avg <= 69) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: D\n";
			}
			else if (a[i].avg >= 50 && a[i].avg <= 59) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: F\n";
			}
			else {
				cout << "\nGrade Not Available\n";
			}
		}
    return 0;
/*success and end program*/
}
