#include<iostream>
using namespace std;
int main(){
int units;
cin>>units;
int bill;
cout<<"Enter number of units consumed"<<endl;
(units<=50)?(bill=units*0.5):(units<=150)?(bill=units*0.75):(units<=250)?(bill=units*1.2):((bill=units*1.2)+(bill+=0.2*bill));

cout<<"bill : "<<bill<<endl;



return 0;
}
