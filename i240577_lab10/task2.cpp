#include<iostream>
using namespace std;
int main(){
const int n=10;
char arr[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i==0||i==n-1||j==0||j==n-1||i==j||i+j==n-1){
arr[i][j]='*';
cout<<arr[i][j];
}
else{
arr[i][j]=' ';
cout<<arr[i][j];
}
}
cout<<endl;
}



return 0;
}
