#// cinput.c compile gcc cinput.c -o cinput.o
#include <stdio.h>

{int main()
	char str [16]; //array of chracters
	int i; // integer i
	
	printf("enter a string  : ");
	scanf("%15s",str);
	printf("%x",&i);
	printf("Hexadecimal %#x ( %d ). \n",i,i);
	
	return 0;
}	
