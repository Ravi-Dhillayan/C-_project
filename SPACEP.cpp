#include<iostream>
using namespace std;
class pa{
	int r, n;
	public:
	void q()
	{
	cout<<"Enter the n number  : "<<endl;
	cin>>n;
      for(int s=1;s<n;s++)
	  {
	  	for(int j=1;j<=n;j++){
	  	
	  			if( s==1||s==n-1){
      		cout<<"*";
      	
		  }
		  
		  else{
		  	cout<<"  ";
		  }
		  }
		 
      
		  cout<<endl;
	  
}
}
	int i,j,k;
	public:
void st(){

		cout<<"Enter the n number : "<<endl;
		cin>>n;
		for(i=1;i<=n;i++){
			for(int a=i;a<n;a++){
				cout<<"  ";
			}
			
				for(j=i;j<=n;j++){
				{
					if(i==j)
						cout<<" * ";
				}
					
			}
			for(int j=2;j<=n-1;++j){
	  	
	  			if( i==1||i==n){
      		cout<<" * ";
      	
		  }
		  
		  else{
		  	cout<<"  ";
		  }
		  if(j==n-1)
		  {
		  	cout<<" * ";
		  }
		  }
			cout<<endl;
				}
		
cout<<"hello";			
}
};
int main()
{
	pa o;
//	o.q();
    o.st();
}
