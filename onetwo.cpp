#include<iostream>
using namespace std;
class ot{
	int i,n,j,k=1;
	public:
		void no(){
			cout<<"Enter the Size of the pattren :" <<endl;
			cin>>n;
			for(i=1;i<n;i++){
				for(j=1;j<=i;j++){
					cout<<k;
					k++;
				}
				cout<<endl;
			}
		}
};
int main(){
	ot o;
	o.no();
}
