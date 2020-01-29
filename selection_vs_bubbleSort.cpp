
#include <bits/stdc++.h>
using namespace std;




void swap(int & x, int & y){
int temp;
temp= x;
x=y;
y= temp;}
int minimize (int arr[], int beginn, int sz ){
    int minn= arr[beginn];
       int min_idx;
 min_idx= beginn;
for (int i = beginn+1; i< sz; i++){
    if (arr[i]< minn)
    {minn=arr[i];
    min_idx=i;
    }
    }

return min_idx;}

void selection_sort(int arr[], int sz){int index_of_min;
int start;

for(int i =0; i< sz; i++){
         start= i;
        index_of_min= minimize(arr, start, sz);
swap(arr[i], arr[index_of_min]);
}
}
void bubble_sort(int arr[], int sz){
for (int i = sz-1; i>0; i--)
    for (int j =0; j < i; j++)
if (arr[j]>arr[j+1])
{int temp = arr[j];
arr[j]= arr[j+1];
arr[j+1]=temp;
}
}


int main()
{
	int arr[5]={4, 3,6,8,9};
	int szz=5;
bubble_sort(arr, szz);
//selection_sort( arr, szz);
for (int i=0; i< szz; i++)
    cout<< arr[i]<< " ";
    // in case the rotating factor is
    // greater than array length
return 0;
}
