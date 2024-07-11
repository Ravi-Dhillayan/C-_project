#include<iostream>
using namespace std;
class A{
	 int i,j,n;
	public:
	void enter(){
		
  cout<<"Enter the n number : "<<endl;
  cin>>n;
  for(i=1;i<=n*2-1;i++){
  	for(int k=i;k<=n*2-1;k++){
  		cout<<" ";
	  }
  	for(j=1;j<=n*2-1;j++){
  		if(i==1||i==n*2-1||j==1||j==n*2-1){
  			cout<<"5";
		  }
		 else{
		 	cout<<" ";
		 }
		  
	  } 
	 cout<<endl;
		  
	  }
	 
	  
  
   for( i=2;i<=n*2-2;i++){
   for(int k=2;k<n*2-2;k++){
	  		if(i==2||i==n*2-2|| k==2||k==n-1){
  			cout<<"4";
  			
		  }
		  
	}
	cout<<endl;
}
}
};
int main(){
	A o;
	o.enter();
//  int i,j,n;
//  cout<<"Enter the n number : "<<endl;
//  cin>>n;
//  for(i=1;i<=n;i++){
//  	for(int k=i;k<=n;k++){
//  		cout<<" ";
//	  }
//  	for(j=1;j<=n;j++){
//  		if(i==1||i==n||j==1||j==n){
//  			cout<<"* ";
//		  }
//		  else{
//		  	cout<<"  ";
//		  }
//		  
//	  }
//	  cout<<endl;
//  }
}
