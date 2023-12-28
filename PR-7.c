/*
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
#include<stdio.h>

	int  add (int a, int k){
	return a+k;
}

	int sub (int a, int k){
	return a-k;
}

	int div (int a, int k){
	return a/k;
	}

	int multi (int a, int k){
	return a*k;
  }

	int modulo (int a, int k){
	return a%k;
 }

	main(){

	int a,k,c;
	do{
	printf("\n[---------------]\n\n\n");
	printf("oress 1. ADD\n");
	printf("press 2. SUB\n");
	printf("press 3. DIV\n");
	printf("press 4. MULTI\n");
	printf("press 5. MODULO\n");
	printf("press 6. EXIT\n");
	printf("enter number : \n");
	scanf("%d",&c);


	if(c>=1 && c<6){

	printf("enter value  A:");
		scanf("%d",&a);

	printf("enter value K :");
	scanf("%d",&k);

	switch(c){

	case 1:
	printf("add = %d",add(a,k));
		break;

	case 2:
	printf("sub = %d",sub(a,k));
		break;

	case 3:
	printf("div = %d",div(a,k));
		break;

	case 4:
	printf("multi = %d",multi(a,k));
		break;

	case 5:
	printf("modulo = %d",modulo(a,k));
		break;


 		 }

		}  

	}
	while(c!=6);
}

