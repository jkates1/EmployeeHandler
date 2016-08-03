//
// Created by Jeremy Kates on 8/2/16.
//

#include "Database.h"
#include <iostream>
#include <stdexcept>
using namespace std;
namespace Records {
    Database::Database() : mNextEmployeeNumber(kFirstEmployeeNumber)
    {

    }

    Employee& Database::addEmployee(const std::string &firstName, const std::string &lastName)
    {
        Employee theEmployee;
        theEmployee.setFirstName(firstName);
        theEmployee.setLastName(lastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);
        return mEmployees[mEmployees.size() - 1];
    }

    Employee& Database::getEmployee(int employeeNumber)
    {
        for (auto& employee : mEmployees) {
            if (employee.getEmployeeNumber() == employeeNumber) {
                return employee;
            }
        }
        throw runtime_error("No employee found");
    }

    void Database::displayAll() const
    {
      for (const auto& employee : mEmployees) {
          employee.display();
      }
    }

    void Database::displayCurrent() const {
        for (const auto& employee : mEmployees) {
            if (employee.getisHired())
                employee.display();
        }
    }

    void Database::displayFormer() const {
        for (const auto& employee : mEmployees) {
            if (!employee.getisHired())
                employee.display();
        }
    }
}
