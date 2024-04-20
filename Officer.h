/**
 * @file Officer.h
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief Header file for the class Officer 
 * 
 * This is a header file that initializes a class called 'Officer' and also conjoins with the header * file for Employee
 */


#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Represents an officer in the company, inheriting from the Employee class.
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief Represents an officer in the company
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
