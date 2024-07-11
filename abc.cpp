#include<iostream>
using namespace std;
class ap{
	int i,j,*a,n;
	public:
		ap(){
			cout<<"Enter the size of Alphabat Pattren : "<<endl;
			cin>>n;
			char k='a';
			a=new int[n];
			for(i=0;i<n;i++){
				for(j=0;j<i;j++){
					cout<<k<<" ";
					k++;
				}
				cout<<endl;
			}
		}
};
int main(){
	ap obj;
	return 0;
}
