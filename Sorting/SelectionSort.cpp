#include <bits/stdc++.h>
using namespace std;

// Selct minimums and swap them

int main()
{
  vector<int> p = {6, 2, 9, 8, 1, 7}; // unsorted array
  int n = p.size();
  for (int i = 0; i <= n - 2; i++)
  {
    int mini = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (p[j] < p[mini])
      {
        mini = j; // Finding min index
      }
    }
    int temp = p[i];
    p[i] = p[mini]; // Swaping minimum with forst element of subarray
    p[mini] = temp;
  }

  for (int item : p)
  {
    cout << item << " ";
  }

  return 0;
}