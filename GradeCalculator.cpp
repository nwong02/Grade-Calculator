#include <iostream>

using namespace std;

int main(void)
{
	int numOfCourses = 5;
	double grades = 0.0;
	double averageGrade = 0;
	double gradeTotal = 0;

	cout << "How many courses were taken? \n";
	cin >> numOfCourses;

	for (int i = 0; i < numOfCourses; i++)
	{
		cout << "Enter the grade for each class: \n" ;
		cin >> grades;

		gradeTotal += grades;
		averageGrade = gradeTotal / numOfCourses;
	}
	cout << "The average grade is: \n" << averageGrade;

	return 0;
}