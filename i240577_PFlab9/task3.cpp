#include<iostream>
using namespace std;
int main(){
int matrix[5][5];
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
cin>>matrix[i][j];
}
}
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
cout<<matrix[i][j];
}
cout<<" "<<endl;
}

int sum[5]={0};

for(int i=0;i<5;i++){
int sum1=0;
for(int j=0;j<5;j++){

sum1+=matrix[i][j];
}
sum[i]=sum1;
}
for (int i=0;i<5;i++){
cout<<sum[i]<<" ";}





return 0;
}
