#include <iostream>
#include <limits>

#include "table.hpp"

using namespace std;

void readInput(RainfallTable &table);

int main()
{
    cout << "\n=========================================\n"
         << "               Rainfall"
         << "\n=========================================\n";

    RainfallTable rainfall;

    readInput(rainfall);

    rainfall.printTable();
    
    cout << endl << "Press <Enter> to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
}

void readInput(RainfallTable &table) {  // QUESTION: What does "&" mean?
    cout << "Input year (empty to finish input): " << endl;
    // TODO: implement reading year, or aborting in empty

    cout << "Input measurement: " << endl;
    // TODO: implement reading value, and adding year and value to table
}
