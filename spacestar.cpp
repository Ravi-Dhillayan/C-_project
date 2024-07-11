#include<iostream>
using namespace std;
class st{
	int i,j,k,n;
	
	public:
//		void star(){
//			cout<<"Enter the n number you are printed star : "<<endl;
//			cin>>n;
//			for(i=0;i<n;i++){
//				for(j=i;j<n;j++){
//				{
//						cout<<" * ";
//				}
//					if(j==i){
//						cout<<" * ";
//				}
//				
//				}
//				cout<<endl;
//			}
//			
//		}
	void star1(){
			cout<<"Enter the n number you are printed star : "<<endl;
			cin>>n;
			for(i=0;i<n;i++){
				for(int k=i;k<n;k++){
					cout<<" ";
				}
				for(j=i;j<n;j++){
				{
					if(i==j)
						cout<<" * ";
				}
					
				
				}
//			  int r =i;
//				for(int s=r+1;s<n-1;s++){
//				if(s==i)
//					cout<<" * "; 
//				}
//				for(int s=1;s<n;s++){
//					
//				}
				cout<<endl;
			}
			
		
	}
//		private:
		void star2(){
			int i,j,n,k,s;
		cout<<"enter the n number  you are print and riverse : "<<endl;
		cin>>n;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				cout<<j;
			}		
			cout<<endl;	
	}
	for(i=n-1;i>=1;i--)
	{
		
	for(s=1;s<=n-1;s++){
				cout<<s;
			}
			cout<<endl;	
	
		}
	}

};
int main(){
	st o;
	o.star1();
	o.star2();
}
