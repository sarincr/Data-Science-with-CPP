#include <iostream>
using namespace std;

int NewGap(int gap)
{ 
   gap = gap * 1.3;
   if (gap < 1)
   return 1;
   else
   return gap;
}
void combSort(int arr[], int n) 
{
  int gap = n;
  bool swapped = true;
  while (gap > 1 || swapped == true)
  {
    gap = NewGap(gap);
    swapped = false;
    for (int i = 0; i < (n - gap); i++)
    {
      int temp;
      if (arr[i] > arr[i + gap])
      {
        temp = arr[i];
        arr[i] = arr[i + gap];
        arr[i + gap] = temp;
        swapped = true;
      }
    }
  }
}
int main() {
  int arr[10] = {5,7,8,3,9,2,7,5,4,6};
  int n = 10;
  combSort(arr, n);
  cout << "Sorted array" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
} 