#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"please enter the values of a,b,c"<<endl;
cin>>a;
cin>>b;
cin>>c;
int result = (a*a)+(b*b)+(c*c)+2*((a*b)+(b*c)+(c*a));
cout<<"result = "<<result<<endl;

return 0;
}
