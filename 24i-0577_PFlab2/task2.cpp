#include<iostream>
using namespace std;
int main(){
cout<<"please enter the price of all items"<<endl;
int item1;
int item2;
int item3;
int item4;
cout<<"item 1"<<endl;
cin>>item1;
cout<<"item 2"<<endl;
cin>>item2;
cout<<"item 3"<<endl;
cin>>item3;
cout<<"item 4"<<endl;
cin>>item4;
int sum_of_costs_of_all_items=item1+item2+item3+item4;
int total_cost = sum_of_costs_of_all_items;
cout<<"total cost = "<<total_cost<<endl;
float tax_rate;
cout<<"please enter tax rate"<<endl;
cin>>tax_rate;
tax_rate/=100;
float tax;
cout<<"please enter tax"<<endl;
cin>>tax;
tax = total_cost*tax_rate;
cout<<"tax = "<<tax<<endl;
int final_cost=total_cost+tax;
cout<<"final cost = "<<final_cost<<endl;


return 0;
}
