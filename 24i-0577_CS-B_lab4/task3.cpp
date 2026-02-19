#include<iostream>
using namespace std;
int main(){
for(int i=0;i<=3;i++){
for(int j=0;j<=i-1;j++){
if(j==0){
cout<<"*";
}
else 
cout<<" ";
}
cout<<"*";
cout<<endl;
}
for(int i=0;i<=4;i++){
cout<<"*"; 
}
cout<<endl;

return 0;
}
