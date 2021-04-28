#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,x;
    int a[10] = {5,7,8,3,9,2,10,1,4,6};
    int n=10;
    cout<<"Array = ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i = 1; i<10; i++) 
    {
      x = a[i]; 
      j = i;
      while(j > 0 && a[j-1]>x) 
      {
         a[j] = a[j-1];
         j--;
      }
      a[j] = x; 
   }
    cout<<"\nSorted Array = ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
