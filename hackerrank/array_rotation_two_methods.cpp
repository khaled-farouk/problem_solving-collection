
#include <bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[], int sz){
int temp= arr[0];
for(int j =0; j < sz-1;j++)
    arr[j]= arr[j+1];
arr[sz-1]= temp;

}
void rot(int arr[] , int d , int sz){
for (int i=0; i< d; i++)
    rotate_by_one(arr, sz);

}
void shift(int arr[], int sz,int d){


for (int i=0; i< sz-d;i++ )
arr[i]= arr[i+1];
 }
void rotate_2(int arr[], int sz, int d) {
  int tmp[d];
   for(int i =0; i< d; i++)
    tmp[i]= arr[i];
    shift(arr,sz , d );
for(int i =0; i< d; i++)

    arr[sz-d+i]= tmp[i];

}
int main()
{
	int arr[5]={4, 3,6,8,9};
	int szz=5;
//rot(arr, 2, szz);
rotate_2(arr, szz, 2);
for (int i=0; i< szz; i++)
    cout<< arr[i]<< " ";

return 0;
}
