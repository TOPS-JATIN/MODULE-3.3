#include<stdio.h>
#include<string.h>
struct Employe{
	int EMPLOYE_Number = 10;
	char EMPLOYE_Name[100] = "Jatin";
	char EMPLOYE_Addrese[100] = "Mumbai";
	int EMPLOYE_Age = 22;
};

int main(){
	struct Employe emp;
	printf("Employe Number = %d\n",emp.EMPLOYE_Number);
	printf("Employe Name = %s\n",emp.EMPLOYE_Name);
	printf("Employe Addrece = %s \n",emp.EMPLOYE_Addrese);
	printf("Employe Age = %d", emp.EMPLOYE_Age);
}