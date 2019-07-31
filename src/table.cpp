#include <iostream>
#include <math.h>

#include "table.hpp"

using namespace std;

void inputTableData(int level[])
{
    cout << "(mm)\n";

    for(int i = 0; i < 20; i++)
    {
        cout << "Rainfall year " << (i + 1) << ": "; cin >> level[i];
    }
}

void printTable(int level[])
{
    const double step = 100;

    cout << "year   0         1         2         3         4         5         6         7   (1000 mm)\n";

    for(int i = 0; i < 20; i++)
    {
        auto bar = std::string(round(level[i] / step), '=');
        cout << setw(8) << (i + 1) << "[" << bar << endl;
    }
}
