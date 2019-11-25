#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()


{
int   n , ss;
cin>> n>> ss;
int *p[n];

  int s;
for (int i =0; i< n ; i++){
    cin>>s;
    p[i]=new int [s];

    for (int j=0; j< s ; j++)
        cin>> p[i][j];



}

for (int jj= 0; jj< n;jj++ ){
   int query, idx;

    cin>> query>> idx;
    cout<< p[query][idx]<<"\n";

}




    return 0;
}
