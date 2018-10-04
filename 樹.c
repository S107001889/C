/* myc_1_1, 我的第一個C程式碼 */ 
#include <stdio.h>
#include <stdlib.h>
printme()
{  
     printf("Hello 123!\n");   	/* 印出Hello 偉大的恩師! 字串 */
     printf("Hello 123!\n");   /* 印出Hello Taiwan! 字串 */   	
}
printtree()
{
	
	  printf("         \n");
	  printf("         \n");
      printf("    *    \n");
      printf("   ***   \n");
      printf("  *****  \n");
	  printf(" ******* \n");
	  printf("    *    \n");
      
}
int main(void)
{
   printf("Hello 作業!\n");
   printme();
   printtree();   
   
   system("pause");
   return 0;
}
