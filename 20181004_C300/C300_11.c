/* prog3_2, 短整數資料型態的溢位*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("恩師好，我是王信凱\n");
   printf("我的C300題之11\n");
   printf("   \n");
   short sum,s=32767;        /* 宣告短整數變數sum與s */
   
   sum=s+1;
   printf("s+1= %d\n",sum);	/* 列印出sum的值 */
   
   sum=s+2;
   printf("s+2= %d\n",sum); 	/* 列印出sum的值 */   

   system("pause");
   return 0;
}


