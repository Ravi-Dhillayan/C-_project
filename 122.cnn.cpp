#include<iostream>
#include"122.h";
using namespace std;
template <class T>
	class pattrenn{

	
	T i,j,n,s;
	public:
		void get();
		void set();
	
};
template <class T>
void pattrenn<T>::get(){
	cout<<"How many number patterns od you want to Enter : "<<endl;
	cin>>n;
		s=n;
	for(i=0;i<n;i++){
	
		for(j=i;j<n;j++){
			cout<<s;
		}
		s--;
		cout<<endl;
	}
}

int main(){
	pattrenn<int> obj;
		obj.get();
pattren oobj;
	oobj.get<int>();

}
