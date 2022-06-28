#include<stdio.h>

int main(int argc, char *argv[] )
{ 
	int i;
 	printf("전 달된 인자 갯수:%d\n",argc);
 	printf("실행파일 %s\n",argv[0]);
 	for(i=1; i<argc; i++){
 	printf("전 달한 데이터: %s\n",argv[i]);
 	}
 	
	return 0 ;
 }
