/**
 * @file Supervisor.cpp
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief This is the cpp file for its header file Supervisor.h
 * 
 * This is the cpp file for its' header file that implements the h file's methods and members 
 */


#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * Constructor for the Supervisor class that initializes the number of supervised employees
 * to a default value of -1
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * Parameterized constructor for the Supervisor class. It initializes the number of 
 * supervised employees with the provided value.
 *
 * @param int ID The supervisor's ID.
 * @param int years The number of years the supervisor has been employed.
 * @param double hourlyRate The hourly rate of the supervisor.
 * @param float hoursWorked The number of hours worked by the supervisor.
 * @param int numSupervised The number of employees supervised by the supervisor.
 * @pre The parameters 'ID', 'years', 'hourlyRate', and 'hoursWorked' should represent valid values  * for an employee. Additionally, numSupervised should be a valid integer value.
 * @post The member variables of the Supervisor object are set to the values provided as parameters, * including the number of supervised employees.
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * Prints information about the supervisor, including the number of employees supervised. 
 * It uses the base class print function to print basic employee information.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * Calculates the total pay for the supervisor, including a bonus based on the number of 
 * supervised employees.
 *
 * @pre 
 * @return double The total pay based on the hourly rate, hours worked, and number of 
 * supervised employees.
 * @post 
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
