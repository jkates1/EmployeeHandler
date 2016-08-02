//
// Created by Jeremy Kates on 8/2/16.
//

#ifndef EMPLOYEEHANDLER_DATABASE_H
#define EMPLOYEEHANDLER_DATABASE_H
#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
namespace Records {
    const int kFirstEmployeeNumber = 1000;


    class Database {
        public:
            Database();
            Employee& addEmployee(const std::string& firstName, const std::string& lastName);
            Employee& getEmployee(int employeeNumber);
            Employee& getEmployee(const std::string& firstName, const std::string& lastName);

            void displayAll() const;
            void displayCurrent() const;
            void displayFormer() const;

        private:
            std::vector<Employee> mEmployees;
            int mNextEmployeeNumber;

    };
}


#endif //EMPLOYEEHANDLER_DATABASE_H
