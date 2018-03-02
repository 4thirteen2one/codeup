#include<stdio.h>
#include<string.h>

char a[10001],b[10001],sum[10001];

int BigIntegerAdd(){
    //�������ĳ���
    int lena = strlen(a);
    int lenb = strlen(b);
    //��λ���
    int c = 0;
    int i,j,k;
    //��ʼ������sum
    memset(sum,0,10001);
    //�������
    k = 0;
    for(i = lena-1,j = lenb-1;i >= 0 && j >= 0;i--,j--){
        sum[k] = a[i] + b[j] - '0' + c;
        c = 0;
        //�����Ӵ��ڵ���10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
    }
    //a > b
    while(i >= 0){
        sum[k] = a[i] + c;
        c = 0;
        //�����Ӵ��ڵ���10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
        i--;
    }
    //b > a
    while(j >= 0){
        sum[k] = b[j] + c;
        c = 0;
        //�����Ӵ��ڵ���10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
        j--;
    }
    //����������������н�λ�����
    //���磺67 + 51��5+6�н�λ
    if(c == 1){
        sum[k++] = '1';
    }
    //��ת
    char temp;
    for(i = 0,j = k-1;i < j;i++,j--){
        temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
    }
    return 0;
}

int main(){
    while(scanf("%s %s",a,b) != EOF){
        BigIntegerAdd();
        puts(sum);
    }
}
