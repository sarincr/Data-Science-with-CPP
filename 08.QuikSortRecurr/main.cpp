#include <iostream>
#include <algorithm>
using namespace std;

int divide(int x[], int left, int right)
{
  int point = x[right];
  int index = left;
  for (int i = left; i < right; i++)
    {
      if (x[i] <= point)
      {
        swap(x[i], x[index]);
        index++;
      }
    }
  swap (x[index], x[right]);
  return index;
}
 

void quicksort(int x[], int left, int right)
{
    if (left >= right) 
    {
      return;
    }
    int point = divide(x, left, right);
    quicksort(x, left, point - 1);
    quicksort(x, point + 1, right);
}
 
 
int main()
{
    int x[] = { 2,7,6,1,3,5,4,9,8,10 };
    cout << "Array \n";
    for (int i = 0; i < 10; i++) 
    {
        cout << x[i] << " ";
    }
    cout << " \n Sorted Array \n";
    int n = sizeof(x)/sizeof(x[0]);
    quicksort(x, 0, n - 1);
    for (int i = 0; i < n; i++) 
    {
      cout << x[i] << " ";
    }
 
    return 0;
}


