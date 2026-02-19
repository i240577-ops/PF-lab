#include<iostream>
using namespace std;
int main(){
int count=0;
cout<<"enter any number"<<endl;
int num;
cin>>num;
for(int i=1;i<num;i++){
if(num%i==0){
count++;

}
else {
continue;
}
}
if(count>1){
cout<<"the number is not prime"<<endl;
}
else{
cout<<"The number is prime"<<endl;
}
return 0;
}
