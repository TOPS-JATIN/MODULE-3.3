#include<stdio.h>
#include<string.h>

struct Employe{
	int empno;
	char empname[1][100];
	char address[1][100];
	int age;
	
	
};

int Emplye_1(){
	struct Employe emp;
	emp.empno = 1;
	printf("Employe Name = ");
	for(int i = 0;i<1; i++){
		gets(emp.empname[i]);
	};
	emp.age = 22;
	printf("Employe Addres = ");
	for(int i = 0;i<1; i++){
		gets(emp.address[i]);
	};
	
	printf("Employe {\nName = %s,\nNumber = %d\nAddress = %s\nAge = %d\n}",emp.empname,emp.empno,emp.address,emp.age);
}
int Emplye_2(){
	struct Employe emp;
	emp.empno = 2;
	printf("Employe Name = ");
	for(int i = 0;i<1; i++){
		gets(emp.empname[i]);
	};
	emp.age = 23;
	printf("Employe Addres = ");
	for(int i = 0;i<1; i++){
		gets(emp.address[i]);
	};
	
	printf("Employe {\nName = %s,\nNumber = %d\nAddress = %s\nAge = %d\n}",emp.empname,emp.empno,emp.address,emp.age);
}
int Emplye_3(){
	struct Employe emp;
	emp.empno = 3;
	printf("Employe Name = ");
	for(int i = 0;i<1; i++){
		gets(emp.empname[i]);
	};
	emp.age = 24;
	printf("Employe Addres = ");
	for(int i = 0;i<1; i++){
		gets(emp.address[i]);
	};
	
	printf("Employe {\nName = %s,\nNumber = %d\nAddress = %s\nAge = %d\n}",emp.empname,emp.empno,emp.address,emp.age);
}
int Emplye_4(){
	struct Employe emp;
	emp.empno = 4;
	printf("Employe Name = ");
	for(int i = 0;i<1; i++){
		gets(emp.empname[i]);
	};
	emp.age = 25;
	printf("Employe Addres = ");
	for(int i = 0;i<1; i++){
		gets(emp.address[i]);
	};
	
	printf("Employe {\nName = %s,\nNumber = %d\nAddress = %s\nAge = %d\n}",emp.empname,emp.empno,emp.address,emp.age);
}
int Emplye_5(){
	struct Employe emp;
	emp.empno = 5;
	printf("Employe Name = ");
	for(int i = 0;i<1; i++){
		gets(emp.empname[i]);
	};
	emp.age = 26;
	printf("Employe Addres = ");
	for(int i = 0;i<1; i++){
		gets(emp.address[i]);
	};
	
	printf("Employe {\nName = %s,\nNumber = %d\nAddress = %s\nAge = %d\n}",emp.empname,emp.empno,emp.address,emp.age);
}

int main(){
	Emplye_1();
	printf("\n");
	Emplye_2();
	printf("\n");
	Emplye_3();
	printf("\n");
	Emplye_4();
	printf("\n");
	Emplye_5();
}