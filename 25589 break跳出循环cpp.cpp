#include <iostream>
using namespace std;
int main()
{
	int s=0;
	int n;
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		s+=i;
		if(s>=((1+n)*n/2))break;//��������ܺ͵�һ�γ���ĳ����ֵ 
	}
	cout<<s<<'\n';
	return 0;
}
