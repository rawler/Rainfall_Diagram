#include <iostream>
#include <math.h>

#include "table.hpp"

using namespace std;

void RainfallTable::addMeasurement(int year, int millimeters)
{
    // TODO: implement!
}

void RainfallTable::printTable() const
{
    const double step = 100;

    cout << "year   0         1         2         3         4         5         6         7   (1000 mm)\n";

    // NOTE: This will require your compiler to be set to C++11, but 2011
    // was 8 years ago. It's about time
    for (std::pair<int, int> measurement : _measurements)
    {
        // TODO: implement table printing
    }
}
