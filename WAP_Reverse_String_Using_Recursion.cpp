#include<stdio.h>
#define Space 5
int i =0;
char name[Space]= {'j','a','t','i','n'};
	
int recursion(int i){
	if(i<Space){
		printf("%c",name[Space - i - 1]);
		i++;
		recursion(i);
	}
}
int main(){
	
	recursion(i);
}