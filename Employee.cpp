//
// Created by Jeremy Kates on 8/2/16.
//

#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records {
    Employee::Employee()
    : mFirstName(" ")
    , mLastName(" ")
    , mEmployeeNumber(-1)
    , mSalary(kDefaultStartingSalary)
    , mHired(false)
    {

    }
}

