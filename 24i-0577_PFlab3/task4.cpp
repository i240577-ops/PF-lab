#include<iostream>
using namespace std;
int main(){
int num1;
cout<<"enter 1st number"<<endl;
cin>>num1;
int num2;
cout<<"enter 2nd number"<<endl;
cin>>num2;
switch(num1>num2){
case 1:
cout<<"1st number is greater"<<endl;
break;

case 0:
switch(num1<num2){
case 1:
cout<<"2nd number is greater"<<endl;

break;
case 0:
switch(num1==num2){
case 1:
cout<<"both are equal"<<endl;
case 0:
cout<<"invalid input"<<endl;
break;
}
}
}


return 0;
}
