#include <iostream>
using namespace std;
int main()
{
	up:
	int beratbadan;
	cout<<"menentukan Berat badan seseorang"<<endl;
	cout<<"masukkan berat badan: ";
	cin>>beratbadan;
	cout<<"berat badan saya : "<<beratbadan<<endl;
	if(beratbadan<0)
	
	{
		cout<<"masukkan anda salah"<<beratbadan<<endl;
	}
	else if(beratbadan>=10, beratbadan<30)
	{
		cout<<"pasti masih bocil nih"<<endl;
	}
	else if(beratbadan>=31, beratbadan<=40)
	{
		cout<<"krempeng amat lu"<<endl;
	}
	else if(beratbadan>=41, beratbadan<=60)
	{
		cout<<"ideal lah"<<endl;
	}
	else if(beratbadan>=61, beratbadan<=70)
	{
		cout<<"lumayan gemuk"<<endl;
	}
	else if(beratbadan>=71, beratbadan<=80)
	{
		cout<<"gemuk"<<endl;
	}
	else if(beratbadan>=81, beratbadan<=100)
	{
		cout<<"buset dah gemuk sangad"<<endl;
	}
	else if(beratbadan>100)
	{
		cout<<"ini mah udah bukan berat badan orang njirr"<<endl;
	}
	char pil;
	cout<<"ngulang lagi ga? (y/n)";
	cin>>pil;
	
	if(pil=='y')
	
	goto up;
	system("pause");
	return 0;
}
