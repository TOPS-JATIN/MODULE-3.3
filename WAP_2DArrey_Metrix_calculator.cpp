#include<stdio.h>

#define matrix_ROWS 1
#define matrix_COLS 2

int matrix_1[matrix_ROWS][matrix_COLS];
int matrix_2[matrix_ROWS][matrix_COLS];
int metrix[matrix_ROWS][matrix_COLS];

int ADD(){
	
	for(int i=0;i<matrix_ROWS;i++){
		for(int j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
			//printf("%d",metrix[i][j]);
		}
	};
	
	printf("metrix =  {\n %d %d\n}\n",metrix[0][0],metrix[0][1]);
	
}

int REMOVE(){
	for(int i=0;i<matrix_ROWS;i++){
		for(int j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] - matrix_2[i][j] ;
			//printf("%d",metrix[i][j]);
		}
	};
	
	printf("metrix =  {\n %d %d\n}\n",metrix[0][0],metrix[0][1]);
	
}

int MULTI(){
	for(int i=0;i<matrix_ROWS;i++){
		for(int j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] * matrix_2[i][j] ;
			//printf("%d",metrix[i][j]);
		}
	};
	
	printf("metrix =  {\n %d %d\n}\n",metrix[0][0],metrix[0][1]);
	
}

int main(){

	int choice ;
	
	for(int i=0;i<matrix_ROWS;i++){
		for(int j=0;j<matrix_COLS;j++){
			printf("matrix-1 =  Add %d of %d = ",j,j+1);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	printf("--------------\n");
	for(int i=0;i<matrix_ROWS;i++){
		for(int j=0;j<matrix_COLS;j++){
			printf("matrix-2 =  Add %d of %d = ",j,j+1);
			scanf("%d",&matrix_2[i][j]);
		}
	};
	
	printf("1. + \n2. - \n3. *\nChoice = ");
	fflush(stdin);
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice == 1){
		ADD();
	}else if(choice == 2){
		REMOVE();
	}else if(choice == 3){
		MULTI();
	}else if(choice){
		printf("invalid Choice\n");
	}
	
//	for(int i=0;i<matrix_ROWS;i++){
//		for(int j=0;j<matrix_COLS;j++){
//			printf("matrix-1 =  Add %d of %d = %d\n",j,j+1,matrix_1[i][j]);
//		
//		}
//	};
//	for(int i=0;i<matrix_ROWS;i++){
//		for(int j=0;j<matrix_COLS;j++){
//			printf("matrix-2 =  Add %d of %d = %d\n",j,j+1,matrix_2[i][j]);
//		
//		}
//	};
}