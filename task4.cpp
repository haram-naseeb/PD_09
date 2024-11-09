#include <iostream>
using namespace std;
bool seven(int size, int array[]);
main()
{

    int size, output;
    cout << "Enter size of your array: ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " numbers, one per line: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    output = seven(size, array);
    if (output == true)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no seven in the array";
    }
}

bool seven(int size, int array[])
{
    int digit;
    bool result = false;
    for (int j = 0; j < size; j++)
    {
        if (array[j] == 7)
        {
            result = true;
            break;
        }
        else if (array[j] > 9)
        {
            digit = array[j];
            while (digit != 0)
            {
                digit = array[j] % 10;
                array[j] = array[j] / 10;
                if (digit == 7)
                {
                    result = true;
                    break;
                }
            }
        }
    }
    return result;
}