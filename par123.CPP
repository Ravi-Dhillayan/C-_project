#include<iostream>
using namespace std;
int main()
{
	int i,j,s=1,n;
	cout<<"Enter the n Number of print : "<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		
		for(j=1;j<=i;j++){
//			

			
			cout<<s;
			s++;
		}
	
		
		cout<<endl;
	}
		for(i=1;i<=n;i++){
					for(int k=1;k<n;k++){
			--s;
			cout<<s;
		}
		cout<<endl;
			}
	
}
