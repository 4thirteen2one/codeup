#include <stdio.h>
int main()
{   int a,b;
    /*
    �����ַ����������ַ�ʽ��
    1.while(scanf("%s",str)!=EOF)
    2.while(gets(str)!=NULL)
    */
    while(scanf("%d%d",&a,&b)!=EOF)//c������ʹ��EOF������ֵΪ-1
    {
        printf("%d\n",a+b);
    }
    return 0;
}
