#include<iostream>
using namespace std;
int main(){
int num;
cout<<"please enter any 4-digit number"<<endl;
cin>>num;
int num1=num%10;
num1=num1*1000;
num=num/10;
int num2=num%10;
num2*=100;
num/=10;
int num3=num%10;
num3*=10;
int num4=num/10;
int reversed_number=num1+num2+num3+num4;
cout<<"the reversed number is "<<reversed_number<<endl;





return 0;
}
