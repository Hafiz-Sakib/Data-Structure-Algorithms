// C++ program to find first and last occurrences
// of a number in a given sorted array
#include <bits/stdc++.h>
using namespace std;


int first(vector<int>arr, int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else
		{
			res = mid;
			high = mid - 1;
		}
	}
	return res;
}


int last(vector<int>arr, int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else
		{
			res = mid;
			low = mid + 1;
		}
	}
	return res;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);

	int x = 8;
	cout <<"First Occurrence = " << first(arr, x, n);
	cout <<"\nLast Occurrence = "<< last(arr, x, n);

	return 0;
}

// This code is contributed by shivanisinghss2110
