#include<iostream>
using namespace std;
int main(){

cout<<"TASK NUMBER 1"<<endl;

//QUESTION # 11111111
int n;
int k;
cout << "Enter the size of array" << endl;
cin >> n;
    
int arr[n];
int *ptr=arr;
cout << "Enter array elements" << endl;
for(int i = 0; i < n; i++) {
cin >> *(ptr+i);  // Using pointer arithmetic for input
}
    
cout << "Enter the position" << endl;
cin >> k;
k = k % n;

for(int i = 0; i < k; i++) {
int last=*(ptr+n-1);
for(int j=n-1;j>0;j--) {
*(ptr+j)=*(ptr+j-1);
}
*ptr=last;
}

for(int i=0;i<n;i++) {
cout<<*(ptr+i)<<" ";
}
cout<<endl;

cout<<"TASK NUMBER 2"<<endl;


//QUETION # 222222222
int m;
cout<<"enter the size of array"<<endl;
cin>>m;
cout<<"Enter array elements"<<endl;
int arr2[m];
int *ptr2=arr2;
for(int i=0;i<m;i++){
cin>>ptr2[i];
}

for(int i=0;i<m;i++){
if(ptr2[i]!=-1){
int count=1;
for(int j=i+1;j<m;j++){
if(ptr2[i]==ptr2[j]){
count++;
ptr2[j]=-1;
}
}
cout<<ptr2[i]<<" repeats "<<count<<" times "<<endl;
}
}


cout<<"TASK NUMBER 3"<<endl;

int arr3[]={1,2,3,4,5,6,7,8,9,10};
int a;
cout<<"enter the size"<<endl;
cin>>a;
cout<<"Enter array elements"<<endl;
int arr4[a];
int *ptr3=arr3;
int *ptr4=arr4;
for(int i=0;i<a;i++){
cin>>ptr4[i];
}
for(int i=0;i<10;i++){
bool check=false;
for(int j=0;j<a;j++){
if(ptr3[i]==ptr4[j]){
check=true;
break;
}
}
if(!check){
cout<<ptr3[i]<<" is missing from the series"<<endl;
}
}

cout<<"TASK NUMBER 4"<<endl;

int b;
int target;
    
cout<<"Enter array size";
cin>>b;
int arr5[b];
int *ptr5=arr5;
cout<<"Enter array elements"<<endl;
for(int i=0;i<b;i++){
cin>>ptr5[i];
}
cout<<"Enter target sum";
cin>>target;
    
for(int i=0;i<b;i++){
for(int j=i+1;j<b;j++){
if(ptr5[i]+ptr5[j]==target){
cout<<"Pair found"<<ptr5[i]<<"+"<<ptr5[j]<<"="<<target<<endl;
return 0;
}
}
}
cout << "No pair found with sum " << target << endl;




return 0;
}

