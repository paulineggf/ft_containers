#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  std::cout << "Please enter some integers (enter 0 to end):\n";

    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

  std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

  return 0;
}