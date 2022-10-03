#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

bool test[MAX + 1][2];

bool search(int x)
{
  if (x >= 0)
  {
    if (test[x][0] == 1)
      return true;
    else
      return false;
  }
  else
  {
    x = abs(x);
    if (test[x][0] == 1)
      return true;
    else
      return false;
  }
}

void insert(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0)
    {
      test[a[i]][0] = 1;
    }
    else
      test[abs(a[i])][1] = 1;
  }
}

int main()
{
  int arr[] = {
      -1, 9, 2, -8, 3, 1};

  insert(arr, 6);
  int s = 3;
  search(s) ? cout << "Ache" : cout << "Nei" << endl;
}