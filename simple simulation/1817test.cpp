#include <stdio.h>

 /*
 * ��һ���ַ���ת��Ϊ����
 * */
 int str2int(char *str){
    int ans = 0; // ������
    int i = 0; // ��������
    int sign = 1; // ���ţ������Ǹ���
    if(str[0] == '-'){ // ����ʼ�и����ţ����Ǹ��������ű��
        i++;
        sign = -1;
    }
    while(str[i]){ // �Ժ�����ַ����б���
        if(str[i]>='0' && str[i]<='9'){// ������Ƕ��ţ�����뵽�������������
            ans = ans*10 + str[i]-'0';
        }
        i++;
    }
    return sign*ans;
 }

 int main(){


    char str1[20], str2[20];
    while(scanf("%s%s", str1, str2) != EOF){ // ���������ַ���ֱ���ļ���β
        printf("%d\n", str2int(str1) + str2int(str2)); // ��ת�������Ӳ����
 }

    return 0;
 }
