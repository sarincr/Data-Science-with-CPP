#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,x,temp,min_id;
    int a[10] = {5,7,8,3,9,2,10,1,4,6};
    int n=10;
    cout<<"Array = ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n-1;i++)
    {
        min_id=a[i];
        x=i;
        for(j=i+1;j<n;j++)
        {
            if(min_id>a[j])
            {
                min_id=a[j];
                x=j;
            }
        }
 
        temp=a[i];
        a[i]=a[x];
        a[x]=temp;
    }
 
    cout<<"\nSorted Array = ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}