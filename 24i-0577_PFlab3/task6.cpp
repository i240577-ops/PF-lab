#include <iostream>
using namespace std;

int main() {
int num;
cout << "Enter the number: ";
cin >> num;
for (int i = 0; i < num; i++) 
{
int f1 = 1, f2 = 1;
for (int j = 0; j <= i; j++) 
{
cout << f1 << "\t";
int temp = f1 + f2;
f1 = f2;
f2 = temp;
}
cout << endl;
}
return 0;
}
