#include <iostream>
using namespace std;
void heapify(int x[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && x[l] > x[largest])
		largest = l;
	if (r < n && x[r] > x[largest])
		largest = r;
	if (largest != i) {
		swap(x[i], x[largest]);
		heapify(x, n, largest);
	}
}
void heapSort(int x[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(x, n, i);
	for (int i = n - 1; i >= 0; i--) {
		swap(x[0], x[i]);
		heapify(x, i, 0);
	}
}
void printArray(int x[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << x[i] << " ";
	cout << "\n";
}

int main()
{

	int x[] = {2,7,6,1,3,5,4,9,8,10 };
  
	int n = sizeof(x) / sizeof(x[0]);
  cout << "Array = \n";
	printArray(x, n);

	heapSort(x, n);

	cout << "Sorted array = \n";
	printArray(x, n);
}
