#include<iostream>
using namespace std;
class st
{
	int i,j,n,k;
	public:
		void fun(){
			cout<<"Enter the number you are print the pattren : "<<endl;
			cin>>n;
			for(i=1;i<=n;i++){
				for(j=i;j<n;j++){
					cout<<" ";
					
				}
				for(k=1;k<=2*i-1;k++){
					if(k%2==0){
						cout<<"^";
					}
					else{
						cout<<"*";
					}
					
				}
//				for(int s=2;s<=i;s++){
//				if(s%2==0){
//						cout<<"*";
//				}
//				else
//				{
//						cout<<"^";
//				}
			//	}
				cout<<endl;
			}
		}
		void fun2(){
				cout<<"Enter the number you are print the pattren : "<<endl;
			cin>>n;
		   for(i=1;i<=n+2;i=i+2)
		   {
		   	for(j=1;j<=i;j++){
		   		cout<<"*";
			   }
			   cout<<endl;
		   }
		}
};
 int main(){
 	st o;
 	o.fun();
 }
