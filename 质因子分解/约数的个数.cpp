//�ж�m��Լ������:��m������n���ж�n֮ǰ����m��Լ������num��
//��nΪ��������mԼ������Ϊ2*num-1������Ϊnum = num + 2
#include<cstdio>
#include<math.h>
int countn(int n) {
    int i;
    int num = 0;
    int a = (int) sqrt(n);
    for (i = 1; i <= a; i++) {
        if (n % i == 0)
            num = num + 1;
    }
    if (a * a == n)num = num * 2 - 1;
    else num = 2 * num;
    return num;
}
int main()
{
    int m;
    int a[1000];
    while(scanf("%d",&m),m){
        for(int i =0;i < m;i++){
            scanf("%d",&a[i]);
            printf("%d\n",countn(a[i]));
        }
    }
    return 0;
}
