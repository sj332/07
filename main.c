#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);

int i;
int main(int argc, char *argv[]) {
	//��������, ������ �ҽ����� ��ü(������x)
	for (i=0;i<5;i++) //5��  
	{
		f(); //���� ���� i�� ���� i�� (data ������ i) 
	}
	return 0;
}
	
	void f(void)
	{
		for(i=0;i<10;i++) //10�� 
		printf("#");
	}


