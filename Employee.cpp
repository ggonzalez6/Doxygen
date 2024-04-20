/**
 * @file Employee.cpp
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief Implementation file for the Employee class
 * 
 * This cpp file initializes and implements the methods from its' header file 
 */


#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * The constructor for the Employee class that initializes all member variables to -1
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * Parameterized constructor for the Employee class.
 *
 * @param int ID The employee's ID.
 * @param int years The number of years the employee has been employed.
 * @param double hourlyRate The hourly rate of the employee.
 * @param float hoursWorked The number of hours worked by the employee.
 * @pre the parameters should represent valid values for an employee, for example,
 * 'ID' should be a non-negative integer.
 * @post the member variables are set to the values provided as parameters 
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * Prints information about the employee
 *
 * @pre 
 * @post 
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * Increments the years employed and adjusts the hourly rate for the employee's anniversary.
 *
 * @pre 
 * @return void 
 * @post 'years' member variable is incremented by one, and the 'hourlyRate' is 
 *adjusted for the employee's anniversary
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * Calculates the total pay for the employee.
 *
 * @pre 
 * @return double The total pay based on the hourly rate and hours worked.
 * @post 
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

