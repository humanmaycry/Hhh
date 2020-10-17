#include<stdio.h>
int main()
{
	int chang,kuan,gao,tiji,kz;
	chang=12;
	kuan=10;
	gao=8;
	tiji=chang*kuan*gao;
	kz=(tiji+165)/166;

	printf("%dx%dx%d\n",chang,kuan,gao);
	printf("%d\n",tiji);
	printf("%d\n",kz);
	return 0;
}
