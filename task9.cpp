#include <iostream>
using namespace std;
void code(string pin, string moves[]);
int main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabsque"};
    string pin;
    cout << "Enter four digit pin: ";
    cin >> pin;
    code(pin, moves);
}

void code(string pin, string moves[])
{
    bool check = true;
    if (pin.length() == 4)
    {
        for (int x = 0; x < 4; x++)
        {
            char c = pin[x];
            if (!(c <= '9' && c >= '0'))
            {
                check = false;
                cout << "Invalid Input";
                return;
            }
        }

        if (check)
        {
            for (int i = 0; i < 4; i++)
            {
                char c = pin[i];
                int idx = (c - '0') + i;
                if (idx > 9)
                    idx = idx - 10;
                cout << moves[idx] << ", ";
            }
        }
    }

    else
    {
        cout << "Invalid Input";
        return;
    }
}