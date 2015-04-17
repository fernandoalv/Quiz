#include <iostream>
using namespace std;

long long Fib(long x){
long a=0, b=1, c=a+b;
if(x==0) return 0;
if(x==1) return 1;
if(x>=3){
for(long i=3;i<=x;i++){
a=b;
b=c;
c=a+b; }
 return c;
}
}
int main()
{
 long y,t;
 cout<<"Dame un numero; ";
 cin>>y;
 t=Fib(y);
cout<<"El fibbonaci del numero es  " << t <<endl;
 return 0;
}
