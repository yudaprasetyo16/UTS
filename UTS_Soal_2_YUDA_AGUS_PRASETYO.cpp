#include <iostream>
using namespace std;
int main()
{
	int jml, i, j, k;
	cout<<"masukkan sebuah angka : ";
	cin>>jml;
	
	cout<<"level 1"<<endl;
	for(i=0;i<jml;i++){
		for(j=0;j<jml;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	cout<<endl;
	
	cout<<"level 2"<<endl;
	for(i=0;i<jml;i++){
		for(j=jml-1;j>=0;j--){
			if(j<=i)
			cout<<"*";
			else
			cout<<"-";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"level 3"<<endl;
	for(i=0;i<=jml-1;i++){
		for(j=0;j<=jml;j++){
			if(j<=i)
			cout<<"*";
			else
			cout<<"-";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"level 4"<<endl;
	for(i=0;i<=jml;i++){
		for(j=0;j<=jml;j++){
			if(j>=i)
			cout<<"*";
			else
			cout<<"-";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"level 5"<<endl;
	for(i=0;i<=jml;i++){
		for(j=jml;j>=0;j--){
			if(j<=i)
			cout<<"*";
			else
			cout<<"-";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"level 6"<<endl;
	for(i=0;i<=jml;i++){
		for(j=jml;j>=0;j--){
			if(j<=i)
			cout<<"*";
			else
			cout<<"*";
		}
		{
			for(j=1;j<=jml;j++){
				if(j<=i)
				cout<<"*";
				else
				cout<<"-";
			}
			cout<<endl;
			
		}
		
	}
	cout<<endl;
	cout<<"level 7"<<endl;
	for(i=0;i<=jml;i++){
		for(j=0;j<=jml;j++){
			if(j>=i)
			cout<<"*";
			else
			cout<<"-";
			
		}
		{
			for(j=jml-1;j>=0;j--){
				if(j>=i)
				cout<<"*";
				else
				cout<<"-";
			}
			{
				cout<<endl;
			}
			cout<<endl;
		}
	}
	cout<<"level 8"<<endl;
	for(i=0;i<=jml;i++){
		for(j=jml;j>=0;j--){
			if(j<=i)
			cout<<"*";
			else
			cout<<"-";
			
		}
		
	}
	for(i=1;i<=jml;i++){
		for(j=0;j<=jml;j++){
			if(j>=i)
			cout<<"*";
			else
			cout<<"*";
			
		}
		{
			for(j=jml-1;j>=0;j--){
				if(j>=i)
				cout<<"*";
				else
				cout<<"-";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
