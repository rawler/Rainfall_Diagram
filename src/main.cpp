#include <iostream>
#include <cmath>
#include "table.cpp"

using namespace std;

int main()
{
    cout << "\n=========================================\n"
         << "               Rainfall"
         << "\n=========================================\n";
    
    int level[20];

    inputTableData(level);

    printTable(level);
    
    cout << endl << "Press <Enter> to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
}
