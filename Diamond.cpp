#include<iostream>
using namespace std;
class add{
public:
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
	for(o.i=0;o.i<o.n;o.i++){
		for(o.j=o.i;o.j<o.n;o.j++){
			cout<<" ";
		}
		for(o.k=1;o.k<=o.i+2+o.i;o.k++){
			cout<<o.k;
		}
	
		cout<<endl;
		
	}
	o.i=0;
	for(o.i=0;o.i<o.n;o.i++){
			for(o.s=1;o.s<o.i+1;o.s++){
			cout<<" ";
			
		
		}
		
		for(o.r=1;o.r<o.k-1;o.r++){
			cout<<o.r;
		}
		cout<<endl;
	}
		
}
int main(){
	pattren po;
	patren(po);
	
}
