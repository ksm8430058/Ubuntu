#include <stdio.h>

int main()
{

	int a=0,sum =0,count=1,count1 =0;
	
	printf("계산할 숫자를 입력해주세요.");
	scanf("%d",&a);
		

	for(int i=0;i<a;i+=2)
	{
		sum = sum+(a-i)+(a-count);
		count+=2;
		count1++;
	}
	printf("결과값은 %d입니다.\n",sum);
	printf("시간 복잡도는 %d입니다.\n",count1);
	return 0;
}
