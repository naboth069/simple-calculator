/*A program that will accept two numbers from the user and
 display the sum, difference ,product ,quotient and remainder */

 #include<stdio.h>

 main () {
    int n1, n2; // valuable declaration

// Getting the two inputs from the user

printf("Enter first number: ");
scanf("%", &n1);

printf ("Enter second number: ");
scanf("%d", &n2) ;

// process
sum = n1 + n2;
diff=n1 -n2;
prod=n1 * n2;
quo =n1 / n2;
rem=n1 % n2;

//display the output
printf("\nSUM\t\t: %d", sum);
printf("\nDIFFERENCE\t: %d", diff);
printf("\nPRODUCT\t\t: %d",prod);
printf("\nQUOTIENT\t : %d", quo);
printf("\nREMAINDER\t: %d",rem);


