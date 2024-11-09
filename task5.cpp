#include <iostream>
using namespace std;
string result(string array[]);
main()
{
  string array[4];
  string output;

  cout << "Enter Elements, one per line: " << endl;
  for (int x = 0; x < 4; x++)
  {
    cin >> array[x];
  }
  output = result(array);
  cout << output;
}

string result(string array[])
{
  string result;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (array[i] == array[j])
      {
        result = "true";
      }
      else
      {
        result = "false";
        break;
      }
    }
  }
  return result;
}
