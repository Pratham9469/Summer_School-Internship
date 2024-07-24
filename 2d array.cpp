#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3][3]={
    {1, 2, 3},
    {5, 6, 7},
    {4, 3, 1}
};
//for(int i=0;i<3;i++){
//    for(int j=0;j<4;j++)
  //  {
    //    cout<< arr[i][j]<<" ";
    //}
    //cout<<endl;
//}
int sum=0;
for(int i=0;i<3;i++){

    sum+=arr[0][i];
}
cout<<sum;
return 0;
}
