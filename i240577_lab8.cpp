#include<iostream>
using namespace std;
int main(){

cout<<"TASK NUMBER 1"<<endl;

//QUESTION # 11111111
int n;
int k;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"Enter array elements"<<endl;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the position"<<endl;
cin>>k;
k=k%n;

for(int i=0;i<k;i++){
int last=arr[n-1];
for(int j=n-1;j>0;j--){
arr[j]=arr[j-1];
}
arr[0]=last;
}

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}


cout<<"TASK NUMBER 2"<<endl;


//QUETION # 222222222
int m;
cout<<"enter the size of array"<<endl;
cin>>m;
cout<<"Enter array elements"<<endl;
int arr2[m];
for(int i=0;i<m;i++){
cin>>arr2[i];
}

for(int i=0;i<m;i++){
if(arr2[i]!=-1){
int count=1;
for(int j=i+1;j<m;j++){
if(arr2[i]==arr2[j]){
count++;
arr2[j]=-1;
}
}
cout<<arr2[i]<<" repeats "<<count<<" times "<<endl;
}
}


cout<<"TASK NUMBER 3"<<endl;

int arr3[]={1,2,3,4,5,6,7,8,9,10};
int a;
cout<<"enter the size"<<endl;
cin>>a;
cout<<"Enter array elements"<<endl;
int arr4[a];
for(int i=0;i<a;i++){
cin>>arr4[i];
}
for(int i=0;i<10;i++){
bool check=false;
for(int j=0;j<a;j++){
if(arr3[i]==arr4[j]){
check=true;
break;
}
}
if(!check){
cout<<arr3[i]<<" is missing from the series"<<endl;
}
}

cout<<"TASK NUMBER 4"<<endl;

int b;
int target;
    
cout<<"Enter array size";
cin>>b;
int arr5[b];
    
cout<<"Enter array elements"<<endl;
for(int i=0;i<b;i++){
cin>>arr5[i];
}
cout<<"Enter target sum";
cin>>target;
    
for(int i=0;i<b;i++){
for(int j=i+1;j<b;j++){
if(arr5[i]+arr5[j]==target){
cout<<"Pair found"<<arr5[i]<<"+"<<arr5[j]<<"="<<target<<endl;
return 0;
}
}
}
cout << "No pair found with sum " << target << endl;




return 0;
}

