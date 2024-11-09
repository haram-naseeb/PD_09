#include <iostream>
using namespace std;
void transform(int size, int array[], int transformation);
int main()
{
    int size, transformation;
    cout << "Enter the size of array: ";
    cin >> size;
    int array[size];
    cout << "Enter the array, one per line: " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> array[x];
    }
    cout << "Enter the number of times even-odd transformation need to be done: ";
    cin >> transformation;
    transform(size, array, transformation);
}

void transform(int size, int array[], int transformation)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            array[i] = array[i] - 2 * transformation;
            cout << array[i] << ", ";
        }
        else
        {
            array[i] = array[i] + 2 * transformation;
            cout << array[i] << ", ";
        }
    }
}