#include<iostream>
using namespace std;
int main(){
int radius;
int height;
cout<<"enter radius"<<endl;
cin>>radius;
cout<<"enter height"<<endl;
cin>>height;
const float pi= 3.414;
int perimeter=2*pi*radius;
cout<<"perimeter = "<<perimeter<<endl;
int surface_area=2*pi*radius*height;
cout<<"surface area = "<<surface_area<<endl;
int volume=pi*radius*radius*height;
cout<<"volume = "<<volume<<endl;
return 0;
}
