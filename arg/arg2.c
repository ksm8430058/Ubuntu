#include <stdio.h>

int main()
{
	int a=0, sum=0, count=0;

	printf("계산할 숫자를 적으세요");
	scanf("%d",&a);

	for(int i=0; i<a;i++)
	{
		sum=sum+(a-i);
		count++;
	}
	printf("값은 %d입니다.",sum);
	printf("시간복잡도 : %d\n\n",count);

	return  0;
}
