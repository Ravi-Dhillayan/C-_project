#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	system("Color A");
	system("Color B5");
	int i,j,k,n;
	cout<<"Enter the n number you are print : "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			cout<<" ";
		}
	for(k=0;k<n;k++){
			if(k==i)
			{
				cout<<"*";
			}

	}
       	for(j=0;j<i;j++){
			cout<<"  ";
		}
	for(k=1;k<n;k++){
			if(k==i)
			{
				cout<<"*";
			}

	}
       
		cout<<endl;
	}
	for(int s=0;s<=n;s++){
		cout<<" *";
	}
}
