// C++ program to rotate an array by
// d elements
#include <bits/stdc++.h>
using namespace std;

/*Function to left Rotate arr[] of
size n by 1*/
void rvereseArray(int arr[], int start, int end)
{
    for(int i =start; i<=end/2; i++)
           swap(arr[i], arr[end-i]);


}

void leftRotate(int arr[], int d, int n)
{
    if (d == 0)
        return;
    rvereseArray(arr, 0, d - 1);
    rvereseArray(arr, d, n - 1);
    rvereseArray(arr, 0, n - 1);
}

/*Function to left rotate arr[] of size n by d*/


/* utility function to print an array */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
	    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // in case the rotating factor is
    // greater than array length
    d = d % n;

    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n); return 0;
}
