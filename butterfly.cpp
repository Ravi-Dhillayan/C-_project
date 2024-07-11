#include<iostream>
using namespace std;
class ar{
	int i,n,j,k;
	public:
		ar(){
			cout<<"Enter the pattrean size : "<<endl;
			cin>>n;
			for(i=1;i<=n;i++){
			for(j=1;j<i;j++)
			{
				cout<<" ";
				}	
				for(k=n*2-i;k>=i;k--){
				if(k==i || k==n*2-i)
					cout<<"*";
				
				else
				{
					cout<<" ";
				}
	}
				cout<<endl;
			
			}
			for(i=1;i<=n;i++){
				for(int b=n;b>i;b--){
					cout<<" ";
				}
				for(int c=1;c<=i*2-1;c++)
				{
					if(c==1 || c==i*2-1)
					cout<<"*";
					else
					cout<<" ";
				}
				
				cout<<endl;
			}
			for(int r=0;r<n*2;r++){
				cout<<"+";
			}
		}
};
int main(){
	ar obj;
}
