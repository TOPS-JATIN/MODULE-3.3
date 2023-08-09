#include<stdio.h>
#define input_Space 2
int main(){
	int input[input_Space];
	int Answer[2];
	int num;
	int Choice;
	printf("Give Input \n");
	for(int i=0;i<input_Space; i++){
		scanf("%d",&input[i]);
	};
	printf("1. Asending\n2. Decending \n");
	scanf("%d",&Choice);
	
	if(Choice == 1 ){
		(input[0]<input [1]) ? printf("Asending %d\nAsending %d",input[0],input[1]) : printf("Asending %d\nAsending %d",input[1],input[0]);
	}else{
		(input[0]>input [1]) ? printf("Decending %d\nDecending %d",input[0],input[1]) : printf("Decending %d\nDecending %d",input[1],input[0]); 
	}
	

}