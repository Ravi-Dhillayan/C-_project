#include<iostream>
using namespace std;
class pat{
	int i,j,k,n,t;
	public:
		pat(){
			cout<<"Enter the pattren matrix : "<<endl;
			cin>>n;
			cout<<"Your pattren matrix : "<<endl;
			t=n;
			for(i=1;i<=n*2-1;i++){
				for(j=1;j<=n*2-1;j++){
					if(i==1 || i==n*2-1 || j==1 || j==n*2-1)
					cout<<t;
					else if(i==2 || i==n*2-2 ||j==2||j==n*2-2){
						cout<<t-1;
					}
					else if(i==3 || i==n*2-3 ||j==3 || j==n*2-3){
						cout<<t-2;
					}
					else if (i==4 || i== n*2-4 || j==4 || j==n*2-4){
						cout<<t-3;
					}
				
					else{
						cout<<t-4 ;
					}
				}
				cout<<endl;
			}
		}
};
int main(){
	pat obj;
	return 0;
}
