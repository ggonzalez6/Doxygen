/**
 * @file Supervisor.h
 * @author Gerardo Gonzalez
 * @date 2024-04-19
 * @brief This is the header file for Supervisor.cpp
 * 
 * This is a header file for Supervisor.cpp that initilizes a class called Supervisor that is 
 * companied by Employee.h
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Represents a supervisor in the company, inheriting from the Employee class.
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief Represents a supervisor
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
