#include <iostream>
#include<iomanip>
using namespace std;





//TASK#1
void hourstominutes(int &hours,int minutes) {
int totalminutes=hours*60+minutes;
cout<<"Total minutes: "<<totalminutes<<endl;
}

void minutestohours(int hours,int &minutes) {
int totalminutes=hours*60+ minutes;
int newhours=totalminutes/60;
cout<<"Converted time: "<< newhours<<" hours "<<endl;
}



//TASK#2


void Square(int &num) {
num=num*num;
}
void power(int base,int exponent,int &result) {
result=1;
for (int i=0;i<exponent;i++) {
result*=base;
}
}

//TASK#3
void timesten(int number) {
int product=number*10;
cout<<"It's times 10 = "<<product<<endl;
}













int main(){
//TASK#1
int hours,minutes,choice;
    
cout<<"Enter hours: ";
cin>>hours;
cout<<"Enter minutes: ";
cin>>minutes;
    
cout<<"Choose conversion: 1. Hours to Minutes 2. Minutes to Hours: ";
cin>>choice;
    
switch(choice){
case 1:
hourstominutes(hours,minutes);
break;
case 2:
minutestohours(hours,minutes);
break;
default:
cout<<"Invalid choice"<<endl;
}


//TASK#2
int number;  
cout<<"Enter a number: ";
cin>>number;
cout<<"| NUMBER | SQUARES | POMERS    |"<<endl;
for (int i=1;i<=10;i++) {
int square=i;
Square(square);       
int power1;
power(7,i,power1);
cout<< "| "<<setw(6)<<i<< " | "<<setw(7)<<square<<" | "<<setw(9)<<power1<<" |"<<endl;
}








//TASK#3
number;    
cout<<"Enter the number: ";
cin>>number;
timesten(number);









return 0;
}
