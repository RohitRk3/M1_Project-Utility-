#include <stdio.h>
#include<conio.h>
 int Cases()
 {
    printf( "\n Which operation do you want to operate");
    printf( "\n 1. Armstrong Number \n 2. Fibonacci Series \n 3. Pallindrome Number\n  \n 4. Odd Even Number\n");
    int n;
    scanf("%d",&n);
    switch (n)
    {

        //First case is for Armstrong number
    case 1:

        //Declaring variables
        int num, dn, temp, d;
        printf( "Enter the number to check for Armstrong Number\n");
        scanf("%d",&num);
        dn = num;

        //assigning zero to temporary variable
        temp = 0;

        //applying while loop till the number is not equal to zero
        while (dn != 0)
        {
            d = dn % 10;
            temp = temp + (d * d * d);
            dn = dn / 10;
        }
        if (num == temp)
        {
            printf(" Is an Armstrong Number\n",num);
        }
        else
        {
            printf(" Is not an Armstrong Number\n",num);
        }
        break;


    //This is second case for Fibonacci series
    case 2:

        //Declaring variables
        int fibo_0, fibo_1, fibo, number, i;
        printf("Enter the number till where you want the Fibonacci series\n");
        
        //Taking user input
        scanf("%d",&number);
        
        //assigning zero and  one to variables
        fibo_0 = 0;
        fibo_1 = 1;
        printf("The Fibonacci Series is given below\n");
        printf("/n",fibo_0 "/n",fibo_1);

        //Applying for loop to print the series
        for (i = 1; i <= number - 2; i++)
        {
            fibo = fibo_0 + fibo_1;
            printf("/n",fibo);
            fibo_0 = fibo_1;
            fibo_1 = fibo;
        }
        break;
    

    //This is the third case for Palindrome numbers
    case 3:
        //Declaring variables
        int numb, pal, temporary, def;
        printf( "Enter the number to check whether it is Palindrome or not\n");
        
        //Taking user input
        scanf("%d",&numb);
        pal = numb;

        //assigning zero to temporary variable
        temporary=0;

        //applying while loop till the number is not equal to zero
        while (pal != 0)
        {
            def = pal % 10;
            temporary = (temporary * 10) + def;
            pal = pal / 10;
        }
        if (numb == temporary)
        {
            printf( " Is a Palindrome number\n");
        }
        else
        {
            printf(" Is not a Palindrome number\n",numb);
        }
        break;

	//Fourth case is for Odd Even Number
    case 4:

        //Declaring variables
        int num;
        printf( "Enter the number to Odd Even Number\n");
        
        //Taking user input
        scanf("%d",&num);

     	//Check Odd Even Number
        if (num % 2 == 0)
        {
            printf( " Is an Even Number\n",num);
        }
        else
        {
           printf( " Is not an Odd Number\n",num);
        }
        break;

    default:
        printf( "Invalid Choice");
        break;

    }

    return 0;
 }

 //This is the function named loop the run the program according to users choice
 int loop()
 {
    char cont;
    do
    {
        printf( "\n\n---------------------------------\n");
        printf("\nDo you want to continue ??\n For YES 'y' For NO 'n'");
        scanf("%c",&cont);
        if (cont == 'y')
        {
            Cases();
        }
        else
        {
           printf( "\n*Thank You*\n");
        }

    } while (cont == 'y');

    return 0;
 }


 //This is the main function of program
 int main()
 {
   printf( "\n\n** Welcome User **\n");
    
    //Calling the cases function for fisrt time
    Cases();

    //Calling the loop function to control the flow of program according user
    loop();
    return 0;
 }
