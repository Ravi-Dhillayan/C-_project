#include<iostream>
using namespace std;
 class A
 {
 	int x=11,y=10;
 	public:
 	friend void fun(A &ao);
 };
 void fun(A &ao){
// 	cout<<"multiple = "<<ao.x*ao.y<<endl;
 	int a,b,c;
 	cout<<"Enter the two number "<<endl;
 	cin>>a;
 	cin>>b;
 	c=a+b;
 	cout<<"Sum = "<<c<<endl;
 	
 }
 int main(){
 	A o;
 	fun(o);
 }
