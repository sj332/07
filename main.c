#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int all_files; 
	
extern void sub(); //함수도 static가능 
	
int main(int argc, char *argv[])
 {

		sub();
		printf("%d\n",all_files);
	return 0; //undefined reference 
}
