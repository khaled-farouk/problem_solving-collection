#include<iostream>
/*
Following are steps.
1) Store last element in a variable say x.
2) Shift all elements one position ahead.
3) Replace first element of array with x.
*/
using namespace std;

void rot (int arr [], int sz){
int  temp=arr[sz-1];
for (int i= sz-1; i> 0; i--){
    arr[i]=arr[i-1];
    arr[i-1]=temp;

}
}
void pr(int arr[], int sz){
rot(arr, sz);
for(int i=0; i<sz;i++)
    cout<<arr[i]<< " ";
}
int main()
{
	int arr[]={1,2,3,4,5};
	int ss= sizeof(arr)/sizeof(arr[0]);
	pr(arr, ss);

		return 0;
}
