#include <iostream>
using namespace std;
int time(int x, string colors[]);
main()
{
    int x, result;
    ;
    cout << "Enter the siza of array: ";
    cin >> x;
    string colors[x];
    cout << "Enter Colours, one per line: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> colors[i];
    }
    result = time(x, colors);
    cout << "To colour the whole pattern, it takes " << result << " seconds";
}

int time(int x, string colors[])
{
    int quantity, pencils;
    int y = x;
    for (int j = 0; j < x; j++)
    {
        if (colors[j] == colors[j + 1])
        {
            y = y - 1;
        }
    }
    quantity = x * 2;
    pencils = y - 1;
    int seconds = quantity + pencils;
    return seconds;
}