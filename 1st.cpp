
using namespace std;
#include<iostream>
#include"header_file_patterns.h"

int main() {
	int n, i,k,j;
	cout<<"Enter the n number : "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			cout<<" ";
		
		
		}
			for(k=i;k<n;k++){
				cout<<"*";
			}
				cout<<endl;
	}
	func1();
	func2();
	func3();
	func4();
}
