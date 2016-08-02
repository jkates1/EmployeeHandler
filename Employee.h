//
// Created by Jeremy Kates on 8/2/16.
//

#ifndef EMPLOYEEHANDLER_EMPLOYEE_H
#define EMPLOYEEHANDLER_EMPLOYEE_H

#endif //EMPLOYEEHANDLER_EMPLOYEE_H

#pragma once
#include <string>
namespace Records {
    const int kDefaultStartingSalary = 30000;

    class Employee {
    public:
        Employee();

        void promote(int raiseAmount = 1000);

        void demote(int demeritAmount = 1000);

        void hire();

        void fire();

        void display() const;

        void setFirstName(const std::string &firstName);

        const std::string &getFirstName() const;

        void setLastName(const std::string &lastName);

        const std::string &getLastName() const;

        void setEmployeeNumber(int employeeNumber);

        int getEmployeeNumber() const;

        void setSalary(int newSalary);

        int getSalary() const;

        bool getisHired() const;

    private:
        std::string mFirstName;
        std::string mLastName;
        int mEmployeeNumber;
        int mSalary;
        bool mHired;
    };
}