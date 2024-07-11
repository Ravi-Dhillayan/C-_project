#include<iostream>
using namespace std;
class p{
	int i,j,s,k,n;
	public:
		void get(){
			cout<<"Enter the n number :"<<endl;
			cin>>n;
			for(i=1;i<=n;i++){
				for(j=1;j<=i;j++){
					cout<<j;
				}
			cout<<endl;
			}
			
			for(i=1;i<=n;i++){
				s=1;
				for(k=n-1;k>=i;k--){
					cout<<s;
					s++;
				}
				cout<<endl;
			}
		}
};
int main(){
	p o;
	o.get();
}
