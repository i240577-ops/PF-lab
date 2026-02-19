#include<iostream>
#include<cmath>
using namespace std;

// QUESTION #4444
void checkVowels(char input[],char vowels[]){
    int vowelIndex=0;
    for (int i=0;input[i]!='\0';i++){
        char c=input[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        vowels[vowelIndex++]=c;
        }
    }
    vowels[vowelIndex]='\0';
}

bool countChar(char input[],char target){
    int count=0;
    for (int i=0;input[i]!='\0';i++){
        if (input[i]==target){
            count++;
        }
    }
    cout<<"Count("<<target<<") is"<<count<<endl;
    return count>0;
}

// QUESTION #3333
bool isPrime(int num){
    if(num<=1)return false;
    if(num==2)return true;
    if(num%2==0)return false;
    
    for(int i=3;i<=sqrt(num);i+=2){
        if(num%i==0)return false;
    }
    return true;
}

float formula1(float num){
    return (num*num)+1;
}

float formula2(float num){
    return(num*num*num)+1;
}

void processArray(float arr3[],int size){
    for (int i=0;i<size;i++){
        int intValue=static_cast<int>(arr3[i]);
        
        if (isPrime(intValue)){
            arr3[i]/=2;
            arr3[i]=formula1(arr3[i]);
        }
        else {
            arr3[i]=formula2(arr3[i]);
        }
    }
}

int main(){
    int MinSum=0;
    int path1[5]={2, 3, 7, 10, 12};
    int path2[5]={1, 5, 7, 8, 11};
    
    for (int i=0;i<5;i++){
        if (path1[i]==path2[i]){
            MinSum+=path2[i];
            for (int j=i+1;j<5;j++){
                MinSum+=path2[j];
            }
            break;
        }
        else{
            MinSum+=path1[i];
        }
    }
    cout<<"the shortest path is ="<<MinSum<<endl;

    int array1[5];
    int array2[5];
    
    cout<<"Enter first array (5 numbers)"<<endl;
    for (int i=0;i<5;i++){
        cin>>array1[i];
    }
    
    cout<<"Enter second array (5 numbers)"<<endl;
    for (int i=0;i<5;i++){
        cin>>array2[i];
    }

    cout<<"The duplicate numbers are ";
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (array1[i]==array2[j]){
                cout<<array1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;

    cout<<"The non-duplicate numbers are ";
    for (int i=0;i<5;i++){
        bool found=false;
        for (int j=0;j<5;j++){
            if (array1[i]==array2[j]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<array1[i]<<" ";
        }
    }
    for (int i=0;i<5;i++){
        bool found=false;
        for (int j=0;j<5;j++){
            if (array2[i]==array1[j]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<array2[i]<<" ";
        }
    }
    cout<<endl;

    char input[100];
    char vowels[100];
    
    cout<<"Enter a string (more than 10 characters) ";
    cin.ignore();
    cin.getline(input,100);
    
    cout<<"\nCharacter array is "<<input<<endl;
    
    checkVowels(input,vowels);
    cout<<"Returned array has "<<vowels<<endl;
    
    cout<<"Count(m) returned"<<countChar(input,'m')<<endl;
    cout<<"Count(x) returned: "<<countChar(input,'x')<<endl;

    int x;
    cout<<"enter size"<<endl;
    cin>>x;
    float arr3[x];
    for(int i=0;i<x;i++){
        cin>>arr3[i];
    }
    
    cout<<"Array before processing";
    for (int i=0;i<x;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    
    processArray(arr3,x);
    
    cout<<"Array after processing ";
    for(int i=0;i<x;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}
