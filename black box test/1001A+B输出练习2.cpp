#include <iostream>
int main()
{
    int num,a,b;
    std::cin>>num;
    while((num--)>0)//�����˲������ݵ�������while((num--)>0)��ͬ��while(num--)
    {
        std::cin>>a>>b;
        std::cout<<a+b<<'\n';
    }
    return 0;
}
