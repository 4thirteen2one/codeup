#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int  exchange(char a[])
{

    int length = strlen(a);
    for(int i = 0;i < length-1-i;i ++)
    {
        int temp = a[i];
        a[i] = a[length-1-i];
        a[length-1-i] = temp;
    }

//���鲻������Ϊ��������
}
int main()
{
    char a[100];
    gets(a);
    exchange(a);
    puts(a);
    return 0;
}
