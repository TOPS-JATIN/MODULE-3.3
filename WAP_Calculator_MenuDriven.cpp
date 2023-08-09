#include<stdio.h>
int main(){
	int Option ,  NUM_1 , NUM_2;
	
	printf("\n");
	printf("\n");
	printf("---------MENU----------\n");
	printf("\n");
	printf("\n");
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	
	printf("Enter Your Input Here :  ");
	scanf(" %d", &Option);
	
	switch (Option){
		case 1:{
			printf("Enter First Number : ");
			scanf(" %d", &NUM_1);
			printf("Enter Second Number : ");
			scanf(" %d", &NUM_2);
			printf("Addition %d \n", NUM_1 + NUM_2);
			break;
		}
		case 2:{
			printf("Enter First Number : ");
			scanf(" %d", &NUM_1);
			printf("Enter Second Number : ");
			scanf(" %d", &NUM_2);
			printf("Subtraction %d \n", NUM_1 - NUM_2);
			break;
		}
		case 3:{
			printf("Enter First Number : ");
			scanf(" %d", &NUM_1);
			printf("Enter Second Number : ");
			scanf(" %d", &NUM_2);
			printf("Multiplication %d \n", NUM_1 * NUM_2);
			break;
		}
		case 4:{
			printf("Enter First Number : ");
			scanf(" %d", &NUM_1);
			printf("Enter Second Number : ");
			scanf(" %d", &NUM_2);
			printf("Division %d \n", NUM_1 / NUM_2);
			break;
		}
		default:{
			printf("Invalid Input \n");
			break;
		}
	};
};