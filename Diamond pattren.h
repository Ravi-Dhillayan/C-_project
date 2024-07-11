#include<iostream>
using namespace std;
class add{

	add(){
		cout<<"***WELCOME TO YOUR PROGRAM :"<<endl;
		
	}
	
	~add(){
		cout<<"***END OF PROGRMA ***:"<<endl;
		cout<<"THINK YOUR "<<endl;
	}
};
class pattren:public add{
		int n,i,j,k,s,r;
		public:
			friend void patren(pattren &o);
};
void patren(pattren &o){
    cout<<"Enter the number of rows to show number pattren : "<<endl;
	cin>>o.n;	
}
