#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//다른 파일을 연결 

int all_files;

extern void sub(); //전역변수 all_files들은 같은 변수 

int main(int argc, char *argv[]) {
	sub();
	printf("%d\n",all_files);
	return 0; 
}
