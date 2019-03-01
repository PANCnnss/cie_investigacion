#include <iostream>
using namespace std;
 char ar[102][102];
void f (int i,int j,int n,int m){
 
 
	if (i>=0 && i<=n-1 &&j>=0 && j<=m-1 ){
		if (ar[i][j]=='1'){
			ar[i][j]='2';
			f (i-1,j,n,m);
			f (i+1,j,n,m);
			f (i,j+1,n,m);
			f (i,j-1,n,m);
			f (i-1,j+1,n,m);
			f (i-1,j-1,n,m);
			f (i+1,j+1,n,m);
			f (i+1,j-1,n,m);
		}
	}
}
 
 
int main() {
	int n,m,con,con1=0;
	char aux;
	while (cin>>n){
	//	cout<<n<<" "<<m<<endl;
		con=0;
		con1++;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++) cin>>ar[i][j];
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++) {
				if (ar[i][j]=='1'){
					con++;
					f(i,j,n,n);
				}
			}
 
		}
		cout<<"Image number "<<con1<<" contains "<<con<<" war eagles."<<endl;
	}
	return 0;
}