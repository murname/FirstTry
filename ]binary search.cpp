#include <iostream>
using namespace std;
void selection_sort(int, int[]);
int main()
{
	int n;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
	selection_sort(n, A);
	for(int i=0;i<n;i++)
		cout << A[i] << " ";
}
void selection_sort(int n,int A[])
{
	int i=0,j=0,min,temp;
	
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		}
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
	}
}