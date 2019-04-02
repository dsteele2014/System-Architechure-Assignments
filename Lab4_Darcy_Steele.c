//CS230 Lab4
//Programmer Name: Darcy Steele
//Date Completion: 9/15/2017


#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
	int i;
	for(i = 0; i < len; i++){
		printf("%p ",&start[i]);
		printf("0x%.2x",start[i]);
		printf("\n");
	}
	printf("\n");
}

void show_int(int x){
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_pointer(void *x){
	show_bytes((byte_pointer)&x, sizeof(void *));
}

void show_long(long x){
	show_bytes((byte_pointer) &x, sizeof(long));
}

int main(void){
	int ival = 2798;
	printf("ival variable's memory address is %p\n",&ival);
	printf("ival variable's int value is %i\n", ival);
	printf("ival variable's HEX value is %x\n\n", ival);

	float fval = (float) ival;
	printf("fval variable's memory address is %p\n", &fval);
	printf("fval variable's float value is %f\n", fval);
	printf("fval variable's HEX value=0x%x\n\n",*(unsigned int*) &fval);
	
	long lval=(long) ival;
	printf("lval variable's memory address is %p\n", &lval);
	printf("lval variable's long int value is %ld\n", lval);
	printf("lval variable's HEX value=0x%x\n\n", *(unsigned int*) &lval);

	int *pval=&ival;
	show_int(ival);
	show_float(fval);
	show_long(lval);
	show_pointer(pval);
	return 0;
}
