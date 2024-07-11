// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class patt{
    int i,j,n,*a,s;
    public:
    patt(){
        cout<<"Enter the Size of pattren : "<<endl;
        cin>>n;
        s=n-1;
        a=new int[n];
        for(i=0;i<n;i++){
        	for(int k=n;k>i*2;k--){
        	
        			cout<<" ";
				
			}
			if(i==4){
				for(int x=0;x<=i;x++){
					cout<<" ";
				}
			}
		if(i==3){
			for(int t=1;t<=i;t++){
		
			cout<<" ";
		}
	
	}
	
				
			
            for(j=0;j<=n*2-1;j++){
                
                   if(i==0){
                   	 cout<<n;
                   	 break;
                   	
				   }
				 else if(i==1 && j<n)
				 {
				 	if( j==2)
				 {
				 		cout<<"*";
				 }
				 	else 
				 	{
				 		cout<<n;
					 }
				   }
				   
				   else if(i==2 && j<n*2-1){
				   
				   	if(j==3 || j==4 || j==5)
				   	cout<<"*";
				   	else
				   	 cout<<s;
				   }
				   
				    else if(i==3 && j<n)
				 {
				 	if(j==2)
					cout<<"*";
				 	else
				  	cout<<n;
				   }  
				   else if(i==4 && j==n){
				   	cout<<n;
				   }
				   
                  
             
            }
            
           cout<<endl;
         
        }
    }
};

int main() {
     patt obj;

    return 0;
}

