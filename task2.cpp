#include <iostream>
using namespace std;
int price(string name, string movies[]);
main()
{
    int result;
    string name;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter the name of the movie: ";
    cin >> name;
    result = price(name, movies);
    cout << "Discounted_price: " << result;
}

int price(string name, string movies[])
{
    int total_price, price = 500;
    for (int x = 1; x < 5; x = x + 2)
    {
        if (name == movies[x])
        {
            total_price = price - (price * 0.05);
        }
        else
        {
            total_price = price - (price * 0.1);
        }
    }
    return total_price;
}
