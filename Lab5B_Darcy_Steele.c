//Lab5 Part 2
//Darcy Steele
//10/26/17

#include <stdio.h>

int multiplyByShiftingBits(int,int);

int main(void){
	int x;
	int K;
	printf("Enter a positive number x= ");
	scanf("%d",&x);
	printf("Enter a constant K= ");
	scanf("%d",&K);
	multiplyByShiftingBits(x,K);
	int multiplying;
	multiplying = x*K;
	printf("The result by using math %d * %d is %d.\n",x,K,multiplying);
}

int multiplyByShiftingBits(int x, int K ){
	int shifting=0;
	int array[64];
	int i = 0;
	while(K>0){
		array[i] = K%2;
		K=K/2;
		i++;
	}
	printf("The combination of shifting bits and adding is shown below\n");
	for(int j=0; j<(sizeof(array)/sizeof(array[0]));j++){

		if(array[j]==1){
			
			printf("%d=%d<<%d",shifting,x,j);
			shifting=x<<j;	
		}
	}


	printf("\nThe result by using the combination of shifting bits and adding is %d.\n",shifting);
}
