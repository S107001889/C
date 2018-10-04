/* prog3_7, 跳脫序列的列印*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("恩師好，我是王信凱\n");
   printf("我的C300題之16\n");
   printf("   \n");
   char beep='\a';		/* 宣告字元變數beep，並設定其值為'\a' */
   printf("%c", beep);	/* 響一聲警告音 */
   printf("ASCII of beep=%d", beep);  /* 印出beep的ASCII值 */
   printf("  \n");
   
   system("pause");
   return 0;
}


