
#include<iostream>
using namespace std;
int main(){
	char in,al='A';
	int i,j;
	cout<<"Enter the Upper case character you want to print in the last row : "<<endl;
	cin>>in;
	in = toupper(in);
	for(i=1;i<=(in-'C'+4);++i){
		for(j=1;j<=i;++j){
			cout<<al<<" ";
		}
		++al;
		cout<<endl; 
	}
	
}
