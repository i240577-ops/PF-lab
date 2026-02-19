#include<iostream>
using namespace std;
int main(){
int matrix[6][6];
for(int i=0;i<6;i++){
for(int j=0;j<6;j++){
cin>>matrix[i][j];
}
}
for(int i=0;i<6;i++){
for(int j=0;j<6;j++){
cout<<matrix[i][j];
}
}
cout<<endl;

for(int i=0;i<6;i++){
for(int j=0;j<6;j++){
cout<<matrix[j][i]<<" ";
}
cout<<endl;
}





return 0;
}
