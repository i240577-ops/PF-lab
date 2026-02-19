#include<iostream>
using namespace std;
int main(){
short int num;
cout<<"please enter any 16-bits number"<<endl;
cin>>num;
int result=(num<<6)-num;
cout<<result<<endl;



return 0;
}
