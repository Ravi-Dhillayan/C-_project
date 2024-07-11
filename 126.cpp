#include<iostream>
using namespace std;
class ar{
	int i,j,t,c=1;
	int n;
	public:
		ar(){
			cout<<"Enter the array size of array : "<<endl;
			cin>>n;
			cout<<"printed the pattren : "<<endl;
	      for(i=1;i<=n;i++)
	      {
	      t=c;
	      for(j=1;j<=i;j++){
	      	cout<<t<<" ";
	      	t=t+n-j;
		  }
		  cout<<endl;
		  c++;
		  }
		 
		}
};
int main(){
	ar obj;
	return 0;
}
