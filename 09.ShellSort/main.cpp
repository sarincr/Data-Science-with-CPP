#include <iostream>
using namespace std;
int main()
{
	int x[] = {7,6,3,8,5,2,1,4,9,10}, i;
  for (int i=0; i<10; i++)
  cout << x[i] << " ";
	int n = sizeof(x)/sizeof(x[0]);
	cout << "Array before sorting: \n";
	for (int index = n/2; index > 0; index /= 2)
	{
    for (int i = index; i < n; i += 1)
		{
		int temp = x[i];
    int j;	
    for (j = i; j >= index && x[j - index] > temp; j -= index)
    x[j] = x[j - index];
    x[j] = temp;
		}
	}
	cout << "\nArray after sorting: \n";
	for (int i=0; i<n; i++)
  cout << x[i] << " ";
	return 0;
}
