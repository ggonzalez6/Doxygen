/**
 * @file Officer.cpp
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief This file implements the methods from it's header file
 * 
 * This cpp file initializes and implements the methods from its' header file 'Officer.h'
 */


#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * Default constructor for the Officer class, and Initializes the evilness level of the officer 
 * to a default value of 500.
 *
 * @pre 
 * @post The evilness level of the officer is initialized to a value of 500.
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * Parameterized constructor for the Officer class.
 *
 * @param int ID The officer's ID.
 * @param int years The number of years the officer has been employed.
 * @param double hourlyRate The hourly rate of the officer.
 * @param float hoursWorked The number of hours worked by the officer.
 * @param double evilness The evilness level of the officer.
 * @pre The parameters 'ID', 'years', 'hourlyRate', and 'hoursWorked' should represent valid 
 * values for an employee. Additionally, evilness should be a valid double value.
 * @post The member variables of the Officer object are set to the values provided as parameters, 
 * including the evilness level.
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * Prints information about the officer, including their evilness level. 
 * Uses the base class print function to print basic employee information.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * Calculates the total pay for the officer, considering the evilness factor.
 *
 * @pre 
 * @return double The total pay based on the hourly rate, hours worked, and evilness level.
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
