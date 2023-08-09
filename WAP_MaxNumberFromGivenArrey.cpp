#include<stdio.h>
#define Space 5
int main(){
	int number[Space];
	int max = 0;
	printf("number ( Only 5 )\n");
	for(int i=0;i<Space;i++){
		scanf("%d",&number[i]);
		if(number[i] > max){
			max = number[i];
		}
	};
	printf("max = %d",max);
}