#include <bits/stdc++.h>

using namespace std;

void mergeofarrays(int a[], int left, int point, int right)
 {
  int i = left, j = point + 1, x = left, temp[100], k;

  while ((i <= point) && (j <= right)) 
  {
    if (a[i] < a[j]) {
      temp[x] = a[i];
      i++;
    } else {
      temp[x] = a[j];
      j++;
    }
    x++;
  }
  if (i > point) 
  {
    while (j <= right) {
      temp[x] = a[j];
      j++;
      x++;
    }
  } else 
  {
    while (i <= point) 
	{
      temp[x] = a[i];
      i++;
      x++;
    }
  }

  for (k = left; k < x; k++) 
  {
    a[k] = temp[k];
  }

}

void mergesort(int a[], int left, int right) {
  if (left < right) {
    int pointdle = (left + right) / 2; 
    mergesort(a, left, pointdle); 
    mergesort(a, pointdle + 1, right);  
    mergeofarrays(a, left, pointdle, right);  
  }
}

int main() 
{
  int n = 7;
  int a[100] = {6,9,7,3,4,1,8,5,2};
  cout <<" \n Array ";
    for (int i = 0; i < n; i++) 
	{
    cout << a[i] << " ";
  }
  mergesort(a, 0, 9);
 cout << " \n Sorted Array ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}