#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yeard1,month1,day1;
	printf("請輸入出生年分:");
	scanf("%d",&yeard1);
	printf("請輸入出生月分:");
	scanf("%d",&month1);
	printf("請輸入出生日期:");
	scanf("%d",&day1);
	printf("你的生日是:%d年%d月%d日\n",yeard1,month1,day1);	 
	system("pause");
	return 0;
}
