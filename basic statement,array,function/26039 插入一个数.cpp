#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int input_num;
    for(int i=0;i<=8;i++)
    {
        cin>>a[i];
    }
    cin>>input_num;
    //����������ʼ����������������С�ڵ�ǰ�����Ͱѵ�ǰ�����һ��λ�ã�������ڵ�ǰ�����ͰѲ���������һ��λ��
    for(int j=8;j>=0;j--)
    {
        if(input_num<a[j])
            a[j+1]=a[j];
        else if(input_num>=a[j])
            {
                a[j+1]=input_num;
                break;
            }
    }
    for(int n=0;n<=9;n++)
    {
        cout<<a[n]<<'\n';
    }
    return 0;
}
