#include <bits/stdc++.h>
using namespace std;
// compare 2 items each and arrang them
// Pushes the maximum to the last
// Time complexity => O(n) ; Space Complexity => O(1)

int main()
{
  vector<int> vec = {13, 46, 24, 52, 20, 9};
  int n = vec.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (vec[j] > vec[j + 1])
      {
        int temp = vec[j];
        vec[j] = vec[j + 1];
        vec[j + 1] = temp;
      }
    }
  }

  for (int item : vec)
  {
    cout << item << " ";
  }

  return 0;
}