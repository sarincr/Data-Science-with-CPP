#include <iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int x[], int left, int right) 
{ 
    int pivot = x[right];    // pivot 
    int i = (left - 1);   
   
    for (int j = left; j <= right- 1; j++) 
    { 
      if (x[j] <= pivot) 
        { 
            i++; 
            swap(&x[i], &x[j]); 
        } 
    } 
    swap(&x[i + 1], &x[right]); 
    return (i + 1); 
} 
 
void quickSort(int x[], int left, int right) 
{ 
    if (left < right) 
    { 
        //partition the array 
        int pivot = partition(x, left, right); 
   
        //sort the sub arrays independently 
        quickSort(x, left, pivot - 1); 
        quickSort(x, pivot + 1, right); 
    } 
} 
   
void displayArray(int x[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<x[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int x[] = {3,6,7,9,1,5,10,2,4,1}; 
    int n = sizeof(x)/sizeof(x[0]); 
    cout<<"Input array"<<endl;
    displayArray(x,n);
    cout<<endl;
    quickSort(x, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(x,n); 
    return 0; 
}