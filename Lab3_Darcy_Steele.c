//CS230 Lab3
//Programmer Name: Darcy Steele
//Date Completion: 09/05/2017

#include <stdio.h>
//sort function prototype
void sort(int*,int);

int main(void){
	int A[]={5,8,-7,2,12,7,23,98,3,10};
	int arrayLength=sizeof(A)/sizeof(A[0]);
	sort(A,arrayLength);
	printf("The sorted array is: ");
	for(int c = 0;c<arrayLength;c++){
		printf("%d,",A[c]);
	}

	return 0;
}//close main function

void sort(int *array, int length){
	int tmp;
	int *i;
	int *j;
	for(i =array; i<array+length; i++){
		for(j=i+1; j<array+length; j++){
			if(*j < *i){
				tmp=*j;
				*j=*i;
				*i=tmp;
			}
		}
	}

//	printf("/n============================/n");
//	printf("The sorted array is: ");
//	for(int c=0; c<length; c++){
//		printf("%d",array[i]);
//	}
}//close sort function
