#include <iostream>

using namespace std;

int main(void)
{
	int numOfCourses = 5;
	double grades = 0.0;
	double averageGrade = 0;
	double gradeTotal = 0;

	cout << "How many courses were taken?" << "\n";
	cin >> numOfCourses;

	for (int i = 0; i < numOfCourses; i++)
	{
		cout << "Enter the grade for each class: \n";
		cin >> grades;

		gradeTotal += grades;
		averageGrade = gradeTotal / numOfCourses;
	}
	cout << "The average grade is:\n" << averageGrade;

	if (averageGrade > 9 || averageGrade <= 10)
	{
		cout << "Grade is S.";
	}
	else if (averageGrade > 8 || averageGrade <= 9)
	{
		cout << "Grade is A.";
	}
	else if (averageGrade > 7 || averageGrade <= 8)
	{
		cout << "Grade is B.";
	}
	else if (averageGrade > 6 || averageGrade <= 7)
	{
		cout << "Grade is C.";
	}
	else if (averageGrade > 5 || averageGrade <= 6)
	{
		cout << "Grade is D.";
	}
	else if (averageGrade < 5 && averageGrade > 0)
	{
		cout << "Grade is E.";
	}
	else
	{
		cout << "Grade is F.";
	}

	return 0;
}