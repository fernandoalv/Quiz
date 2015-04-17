#include <iostream>
#include <cmath>
using namespace std;
long pot(long x,long y){
	int z;
	 z=pow((x),y);
	return z;
}
   int main(){
   	   long a,b,c;
   	   cout<<"Dame el numero base"<<endl;
   	   cin>>a;
   	   cout<<"Dame la potencia"<<endl;
   	   cin>>b;
   	   c=pot(a,b);
   	   cout<<c<<endl;
   	   return 0;
   }
