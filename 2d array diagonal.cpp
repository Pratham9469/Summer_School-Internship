#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3][3]={
    {1, 2, 3},
    {5, 6, 7},
    {4, 3, 1}
};
int diagonal1=0;
int diagonal2=0;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(i==j){
diagonal1+=arr[i][j];
}
if(i+j==2){
diagonal2+=arr[i][j];
}
}
}
cout<<"Diagonal l: "<<diagonal1<<endl<<"Diagonal 2: " <<diagonal2<<endl;
return 0;
}
