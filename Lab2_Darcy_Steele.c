//CS230 Lab2
//Date: 08/29/2017
//Name: Darcy Steele 

#include <stdio.h>
	
void swap(int *, int *);
	
int main(void){
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	printf("Before swap function call, value of a is %i\n",a);
	printf("Before swap function call, Address of a is %p\n",&a);
	printf("Before swap function call, value of a is %i\n",b);
	printf("Before swap function call, address of b is %p\n",&b);

	swap(&a,&b);

	printf("After swap, value of a is %i\n",a);
	printf("After swap, address of a is %p\n",&a);
	printf("After swap, value of b is %i\n",b);
	printf("After swap, Address of b is %p\n",&b);
}

void swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a=*b;
	*b=tmp;
	
	printf("**********************************\n");
	printf("Inside swap() function\n");
}//close swap function
