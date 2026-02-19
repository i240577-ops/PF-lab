#include<iostream>
using namespace std;
int main(){
int unit_price;
cout<<"please enter the unit price of chocolate mini bar"<<endl;
cin>>unit_price;
int number_of_chocolates_sold_in_particular_day;
cout<<"please enter the number of chocolates sold in a particular day"<<endl;
cin>>number_of_chocolates_sold_in_particular_day;
int total_amount=number_of_chocolates_sold_in_particular_day*unit_price;
cout<<"total price = "<<total_amount<<endl;
int tax=total_amount*0.1;
cout<<"tax = "<<tax<<endl;
int amount_after_tax=total_amount+tax;
cout<<"total bill = "<<amount_after_tax<<endl;
return 0;
}
