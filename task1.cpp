#include <iostream>
using namespace std;
int total(string name, int quantity, string fruit[], int price[]);
main()
{
    string name;
    int quantity, result;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the name of the fruit: ";
    cin >> name;
    cout << "Quantity of the fruit (in kgs): ";
    cin >> quantity;
    result = total(name, quantity, fruit, price);
    cout << "Total_Bil: " << result;
}

int total(string name, int quantity, string fruit[], int price[])
{
    int total_price;
    for (int x = 0; x < 4; x++)
    {
        if (name == fruit[x])
        {
            total_price = price[x] * quantity;
        }
    }
    return total_price;
}