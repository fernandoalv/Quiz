// Luis Fernando Alvarado Rios A01630322
#include <iostream>
using namespace std;
void tri(int x){
  for(int i=1;i<=x;i++){
    for(int t=1;t<=i;t++)
      {
	cout<<"T";
      }
    cout<<endl;
  }
  for(int i=(x-1);i>0;i--){
    for(int t=1;t<=i;t++){
      cout<<"T";
    }
    cout<<endl;
  }
}
int main(){
  int x;
  cout<<"Dame la medida de tu triangulo"<<endl;
  cin>>x;
  tri(x);
  return 0;
}
