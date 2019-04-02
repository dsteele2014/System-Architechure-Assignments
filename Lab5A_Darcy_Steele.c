//Lab5 Part 1
//Darcy Steele
//10/26/17

#include <stdio.h>

short tAdd_Ok(short x, short y){
short result;
result = x + y;
if(result < x || result < y){
printf("%hd plus %hd causes an overflow.\n",x,y);
}else{
printf("%hd plus %hd does not cause an overflow.\n",x,y);
}
}

short tMultiply_Ok(short x, short y){
short result;
result = x*y;
if(result<x || result<y){
printf("%hd times %hd causes an overflow.\n",x,y);
}else{
printf("%hd times %hd does not cause an overflow.\n",x,y);
}
}

int main(void){
short x;
short y;
printf("Please enter your first integer: ");
scanf("%hd",&x);
printf("please enter your second integer: ");
scanf("%hd",&y);
tAdd_Ok(x,y);
tMultiply_Ok(x,y);

}
