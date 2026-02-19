#include<iostream>
#include<cmath>
using namespace std;
int main(){
int P;
float A;
int r;
int t;
cout<<"enter the values of P,r and t"<<endl;
cin>>P;
cin>>r;
cin>>t;
A=P* pow(1+(r/100),t);
cout<<"final amount = "<<A<<endl;


return 0;
}
