#include<iostream>
using namespace std;
int main ()
{
  int i, j,temp= 0;
  int a[10] = {1,11,6,3,10,9,2,7,5,14};
  cout <<"Input list = .\n";
  for(i = 0; i<10; i++) 
  cout <<a[i]<<"\t";
  for(i = 0; i<10; i++) 
  {
    for(j = i+1; j<10; j++)
    {
      if(a[j] < a[i])
       {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"\n Sorted List = \n";
for(i = 0; i<10; i++) 
{
   cout <<a[i]<<"\t";
}
return 0;
}