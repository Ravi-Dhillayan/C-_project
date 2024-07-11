#include<iostream>
using namespace std;
class Aa
{
	char in,A='A';
	int i,j;
	public:
		void get(){
			cout<<"Enter the you are print Alphabit :"<<endl;
			cin>>in;
			in = toupper(in);
			for(i=1;i<=in-'A'+1;i++){
				for(j=1;j<=i;j++){
					cout<<A<<" ";
				}
				cout<<endl;
				A++;
				
			}
			
			
		}
		friend void dis(Aa &o);
};
void dis(Aa &o){
	int i,j,n,k,s ,c=1;
	int r;
	cout<<"Enter the n number u are print the Counting : "<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
			r = i;
		for(j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(k=i;k>0;k--){
		
			cout<<r;
//			c++;
			r++;
		}
		for(s=r-2;s>=i;s--){
			cout<<s;
		}
		cout<<endl;
	}
	
}
int main(){
	Aa ao;
	ao.get();
	dis(ao);
}

