/**
 * @file Employee.h
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief Header file containing the declaration of the Employee class.
 * 
 * The header file for the Employees.cpp that initializes a class called Employee
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Represents an employee in a company
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief Represents an employee
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
