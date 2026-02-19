#include <iostream>
#include<cmath>
using namespace std;
bool isPerfectNumber(int num){
int sum=0;
for (int i=1;i<=num/2;i++) {
if (num%i==0){ 
sum+=i;
}
}
return sum==num;
}







bool isarmstrong(int num){
int originalnum=num;
int sum=0;
int numdigits=0;
while (num>0){
num/=10;
numdigits++;
}
num=originalnum;
while (num>0){
int digit=num%10;
sum+=pow(digit,numdigits);
num/=10;
}
return sum==originalnum;
}
bool isPrime(int num) {
if (num<=1) return false;
if (num==2) return true;
if (num%2==0) return false;
for (int i=3;i<=sqrt(num);i+=2){
if (num%i==0){
return false;
}
}
return true;
}
void findPrimeInRange(int start,int end){
for(int num=start;num<=end;num++){
if(isPrime(num)){
cout<<num<<endl;
}
}
}


int fibonacciPosition(int n){
if (n<=1){
return n;
}
int a=0,b=1;
for (int i=2;i<=n;i++) {
int next=a+b;
a=b;
b=next;
}
return b;
}









int main(){
int number;
cout<<"Enter a number(armsstrong)= ";
cin>>number;
if(isarmstrong(number)){
cout<<number<<" is an Armstrong number"<<endl;
}
else
cout<<number<<" is not an Armstrong number"<<endl;


number;
cout<<"Enter a number(perfect number) ";
cin>>number;
if (isPerfectNumber(number)) {
cout << number << " is a perfect number." <<endl;
}
else
cout << number << " is not a perfect number." << endl;




int start,end;
cout<<"enter range"<<endl;
cin>>start>>end;
findPrimeInRange(start,end);



int n;
cout<<"Enter the position in Fibonacci sequence= ";
cin>>n;
cout<<"Fibonacci number at position "<<n<<" is="<<fibonacciPosition(n)<<endl;
























return 0;
}


