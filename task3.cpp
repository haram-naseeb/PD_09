#include <iostream>
using namespace std;
bool result(string name);
int main()
{
    bool output;
    string name;
    cout << "Enter string: ";
    cin >> name;
    output = result(name);
    cout << output;
}

bool result(string name)
{
    int length;
    for (int x = 0; name[x] != '\0'; x++)
    {
        length++;
    }
    if (length % 2 == 0)
        return true;
    else
        return false;
}