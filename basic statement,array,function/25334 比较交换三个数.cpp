#include<stdio.h>
int main()
{
	double a,b,c,ex;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a<b){
		a=a;
		b=b;
	}
	else{
		a=b;
		b=a;
	}//a�����Сֵ��b������ֵ 
	if(c<a){
		ex=a;
		a=c;
		c=b;
		b=ex;
	}
	else if(c>=a&&c<=b) {
		ex=b;
		b=c;
		c=ex;
	} 
	else if(c>b){
		c=c;
	}
	printf("%.2f %.2f %.2f\n",a,b,c);
	return 0;
} 
