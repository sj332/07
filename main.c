#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);

int i;
int main(int argc, char *argv[]) {
	//전역변수, 범위는 소스파일 전체(연결경우x)
	for (i=0;i<5;i++) //5번  
	{
		f(); //전역 변수 i가 같은 i라서 (data 영역의 i) 
	}
	return 0;
}
	
	void f(void)
	{
		for(i=0;i<10;i++) //10번 
		printf("#");
	}


