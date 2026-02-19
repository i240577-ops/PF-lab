#include<iostream>
using namespace std;
int main(){
int distance;
int rate;
int cost;
cout<<"enter distance(km), rate(l/km) and cost(Rs)"<<endl;
cin>>distance;
cin>>rate;
cin>>cost;
int fuel=distance*rate;
int total_fuel_required=fuel*cost;
cout<<"total fuel required = "<<total_fuel_required<<" liters"<<endl;




return 0;
}
