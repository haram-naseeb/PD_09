#include <iostream>
using namespace std;
int common(string array1, string array2);
int main()
{
    string array1, array2;
    int result;
    cout << "Enter string 1: ";
    cin >> array1;
    cout << "Enter string 2: ";
    cin >> array2;
    result = common(array1, array2);
    cout << "Strings have " << result << " common characters";
}

int common(string array1, string array2)
{
    int count = 0;
    for (int i = 0; array1[i] != '\0'; i++)
    {
        for (int j = 0; array2[j] != '\0'; j++)
        {
            if (array1[i] == array2[j])
            {
                count++;
                array2[j] = 238;
                break;
            }
        }
    }
    return count;
}