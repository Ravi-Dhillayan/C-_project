#include<iostream>
using namespace std;
class rc{
	int n,i,j,c=1,t;
	public:
		rc(){
			cout<<"Enter the n Number you are print : "<<endl;
			cin>>n;
		}
		void ro(){
			for(i=1;i<=n;i++){
			 t=c;
			 for(j=1;j<=i;j++){
			 	cout<<t<<" ";
			 	t+=n-j;
			 	
			 }
			 cout<<endl;
			 c++;
			}
		}
};
int main()
{
	rc co;
	co.ro();
}
