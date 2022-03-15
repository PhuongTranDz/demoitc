#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

int main()
{
	int n,s=0,p=1;
	cout<<"Nhap n: ";
	cin>>n;
	while(!n)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Khong hop le, moi nhap lai: ";
		cin>>n;
	}
	int x;
	cout<<"Moi nhap x: ";
	cin>>x;
	cout<<"Bai 10.\n";
	for(int i=1 ; i<=n ; i++)
	{
		p*=pow(x,n);
	}
	cout<<"Bai 11.\n";
	for(int i=0 ; i<=n ; i++)
	{
		s+=i*(i+1);
	}
	cout<<"S = "<<s<<endl;
	cout<<"Bai 12.\n";
	for(int i=0 ; i<=n ; i++)
	{
		s+=pow(x,i);
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 13.\n";
	for(int i=0 ; i<=n ; i++)
	{
		s+=pow(x,2*i);
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 14.\n";
	for(int i=0 ; i<=n ; i++)
	{
		s+=pow(x,2*1-1);
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 15.\n";
	for(int i=1 ; i<=n ; i++)
	{
		s+=(float)1.0/i;
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 16.\n";
	for(int i=1 ; i<=n ; i++)
	{
		s+=(float)(pow(x,i)/i+1);
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 17.\n";
	for(int i=1 ; i<=n ; i++)
	{
		p*=i;
		s+=(float)pow(x,i)/p;
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 18.\n";
	for(int i=1 ; i<=n ; i++)
	{
		p*=(2*i);
		s+=(float)pow(x,2*i)/p;
	}
	cout<<"S= "<<s<<endl;
	cout<<"Bai 19.\n";
	for(int i=1 ; i<=n ; i++)
	{
		p*=(2*i+1);
		s+=(float)pow(x,2*i+1)/p;
	}
	cout<<"S= "<<s<<endl;
	cout<<"THE END.\n";
}
