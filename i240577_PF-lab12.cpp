#include<iostream>
#include<fstream>

using namespace std;
int main(){
ofstream qasim("output.txt");
int size;
cout<<"enter size"<<endl;
cin>>size;
int arr[size];
if(qasim.is_open()){
cout<<"file opened successfully for writing"<<endl;

for(int i=0;i<size;i++){
cin>>arr[i];
}

for(int i=0;i<size-1;i++){
for(int j=0;j<size-i-1;j++){
if(arr[j]<arr[j+1]){
int temp;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";}
}
else {
cout<<"error in opening the file"<<endl;
}





return 0;
}
