#include<iostream>
using namespace std;
int main(){
int num;
int result;
int num1=2;
int num2=1;
cin>>num;
cout<<num1<<" "<<endl;
cout<<num2<<" "<<endl;
for(int i=0;i<num-2;i++){
result=num1+num2;
cout<<result<<endl;
num1=num2;
num2=result;
}
return 0;
}
