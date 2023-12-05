#include <iostream>
using namespace std;
//#include<string.h>
class Employee {
  string name;
  int employeeId;
  double salary,up_salary;

  public:
    // Constructor
	Employee(const string  empName, int empId, double empSalary)
	{
		name=empName;
		employeeId=empId;
		salary=empSalary;
	 } 

  // Member function to calculate salary based on performance
  void calculateSalary(double performanceRating) {
    if (performanceRating >= 0.0 && performanceRating <= 1.4) {
      up_salary =salary*performanceRating;
      salary=up_salary+salary;
      cout<<"updated salary is"<<salary;
    } else {
      cout << "Invalid performance rating. Salary remains unchanged." << endl;
    }
  }

 

  
};

int main() {
  // Create an employee object
  string empName;
  int empId;
  double empSalary;

  cout << "Input employee name: ";
  cin >> empName;

  cout << "Input employee ID: ";
  cin >> empId;

  cout << "Input employee salary: ";
  cin >> empSalary;

  Employee employee(empName, empId, empSalary);

  

  // Perform salary calculation based on performance
  double performanceRating;
  cout << "Input performance rating (0.0-1.2): ";
  cin >> performanceRating;

  employee.calculateSalary(performanceRating);

 
  return 0;
}
