#include <stdio.h>
//��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
//
//������1234���������
//
//yi er san si
//
//ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
//fu er san si yi
int main(){
	int a;
	int t,out;
	int tem=1;
	scanf("%d",&a);
	if(a<0){
		printf("fu ");
		a=-a;
	}
	t=a;
	while(a>9){
		a/=10;
		tem*=10;
	}
	do{
	
	out=t/tem;
	t%=tem;
	tem/=10;
	
	switch (out)
	{
	case 0:
	printf("ling");
	break;
	case 1:
	printf("yi");
	break;
	case 2:
	printf("er");
	break;
	case 3:
	printf("san");
	break;
	case 4:
	printf("si");
	break;
	case 5:
	printf("wu");
	break;
	case 6:
	printf("liu");
	break;
	case 7:
	printf("qi");
	break;
	case 8:
	printf("ba");
	break;
	default:
	printf("jiu");
	}
	if(tem>0){
		printf(" ");
	}
	
	}while(tem>0);
	return 0;
}



