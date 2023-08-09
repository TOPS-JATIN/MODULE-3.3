#include<stdio.h>
int main(){
//	char name[100] = {'j','a','t','i','n'} ; // This is Not A Palamdrom
	char name[100] = {'a','b','b','a'} ; // This is A Palamdrom
	char Reversname[100];
	int Name_Lenth=0;
	int Reversname_Lenth =0;

    
	while(name[Name_Lenth]){ 
		Name_Lenth++;
	};
   
	for(int i=Name_Lenth;i>=0;i--){
		Reversname[Reversname_Lenth] = name[i-1];
		if(Reversname_Lenth < Name_Lenth){
			Reversname_Lenth++;
		};
		
	};
	
	int Equal = Reversname_Lenth;
	
	for(int i=0;i<Reversname_Lenth;i++){
		if(Reversname[i] == name[i]){
			Equal--;
		}
		printf("%c = %c  \n",Reversname[i],name[i]);
	};
	(Equal == 0)? printf("this is a palindrome \n") : printf("this is NOT a palindrome \n");
//	printf("Name_Lenth = %d \nReversname_Lenth = %d\nEqual = %d\n",Name_Lenth,Reversname_Lenth,Equal);
};