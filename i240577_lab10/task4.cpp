#include<iostream>
using namespace std;
int main(){
int arr[5][5];
int num=1;
for(int i=0;i<=5;i++){
num=1;
for(int j=0;j<=5;j++){
if(i>j){
arr[i][j]=num;
cout<<arr[i][j]<<" ";
num++;




}
}
cout<<endl;
}

return 0;
}
