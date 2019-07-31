#include <iostream>

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
        if(i < 9)
        {
            cout << (i + 1) << "      [";
        }
        else
        {
            cout << (i + 1) << "     [";
        }

        for(int k = 0; k < round(level[i] / step); k++)
        {
            cout << "=";
        }

        cout << endl;
    }
}