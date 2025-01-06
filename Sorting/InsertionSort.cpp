#include <bits/stdc++.h>
using namespace std;

// Time complexity => O(n)[Best],O(n^2)[Worst(full array is reversed)] ; Space Complexity => O(1);
// Takes an element and places it in its corectb position in the subarray

int main()
{
  vector<int> vec = {13, 46, 24, 52, 20, 9};
  int n = vec.size();

  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && vec[j] < vec[j - 1])
    {
      int temp = vec[j - 1];
      vec[j - 1] = vec[j];
      vec[j] = temp;
      j--;
    }
  }

  for (int item : vec)
  {
    cout << item << " ";
  }
  return 0;
}