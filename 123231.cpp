#include<iostream>
using namespace std;
class A {
	int i,j,k,n, c=0;
	public:
		void pattren(){
			cout<<"Enter the N Number : "<<endl;
			cin>>n;
			for(i=0;i<n;i++){
				for(j=0;j<=i;j++){
					c++;
					cout<<c<<" ";
				}
				cout<<endl;
			}
			k=c+1;
			for(i=1;i<n;i++){
				k=k/2-1;
				for(j=n;j>i;j--)
				{
					cout<<k++<<" ";
				}
				cout<<endl;
			}
		}
};
int main(){
	A o;
	o.pattren();
}
