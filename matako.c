
/************************************
 * Surname : EFOOLI                 *
 * Student No : 220489440           *
 * Title : STANDARD BANK ATM        *
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>


//-------------------------------------Prototype-------------------------------
unsigned long amount=1000, deposit, withdraw;
int option,accountno = 7654321,chances = 3, pin = 0, k,attempts =1;
char transaction = 'y';
//char transaction[3]="yes";

void main()
{


  printf("\n\t\t\t\t\t***Welcome to Standard Bank*****\n");//A welcome message
  printf("\t\t\t\t\t\tENTER YOUR SECRET PIN NUMBER: ");//Entering the first chance of three attempts
		scanf("%d", &pin);//scanning the pin
		printf("\n\t\t\t\t\t\tthe pin you have entered is: %d",pin);
		chances--;

if (pin!=248613)
{
    printf("\n\t\t\t\t\t\tWrong pin You have %d chances left\n",chances);
}


    while (pin!= 248613 && attempts <=2)//putting the condition using while loop for two remaining attempts
	{

        printf("\n\t\t\t\t\t***Welcome to Standard Bank*****\n");
		printf("\t\t\t\t\t\tENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);//in this while loop i'm gonna get a chance for two attempts
		printf("\n\t\t\t\t\t\tthe pin you have entered is: %d",pin);
		chances--;
		system("CLs");
         ++attempts;
if (pin!=248613)
{
    printf("\n\t\t\t\t\t\tWrong pin You have %d chances left\n\n",chances);

}
if(attempts <=2){

    printf("\n\t\t\t\t\t\t your account will be blocked if you don't put the correct pin");
}

//system("CLS");
	}//end of while loop


 if(pin ==248613 && attempts <=3)//if statement/condition
    {
        //printf("\t\t\t\t\t\tWelcome to account: 26378395\n");
        printf("\n\t\t\t\t\tWelcome to account %d  ",accountno);


        //system("CLs");

    }

    else{
       //printf("Wrong pin \nYou have %d chances left\n\n",chances);
        printf("\n\n\t\t\t\t\t\t**your account is blocked**\n");// a good bye message if all three attempts are incorrects
        system("C:\\WINDOWS\\System32\\shutdown /s");

    //exit(0);
    getch();
    //printf("Wrong pin \nYou have %d chances left\n\n",chances);
    }



//In this part i used do-while because i want the process to continue after being in an option i wanna be able to do others
//or the same calculations multiple time

	do
	{
		printf("\n\t\t\t\t\t\t==========M E N U=======\n");//menu of the atm
		printf("\t\t\t\t\t\t1. View balance\n");//option 1
		printf("\t\t\t\t\t\t2. Deposit Money\n");//option 2
		printf("\t\t\t\t\t\t3. Withdraw Money\n");//option 3
		printf("\t\t\t\t\t\t4. Exit\n");//option 4
		printf("\t\t\t\t\t\t====================\n\n");
		printf("\t\t\t\t\t\tselect an option: ");//the user is prompted to select an option
		scanf("%d", &option);//scanning the option for the switch cases
		system("CLs");
		switch (option)//switch statement for changing the options
		{
		case 1:
			printf("\t\t\t\t\t\tYOUR BALANCE IN Rs : %lu ", amount);
			break;
		case 2:
		    printf("\t\t\t\t\t\tENTER THE AMOUNT TO DEPOSIT\t:");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("\t\t\t\t\t\tYOUR BALANCE IS %lu: \t", amount);

			break;
		case 3:
		    printf("\t\t\t\t\t\tENTER THE AMOUNT TO WITHDRAW\t: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\t\t\t\t\t\tPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\t\t\t\t\t\tINSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\t\t\t\t\t\tPLEASE COLLECT CASH\n");
				printf("\t\t\t\t\t\tYOUR CURRENT BALANCE IS: %lu", amount);
			}

			break;
		case 4:

			printf("\n\n\t\t\t\t\t\tyou have selected to exit the program. GOOD BYE\n\n");
			exit(0);
			break;
		default:
			printf("\t\t\t\t\t\tINVALID OPTION");
		}
		printf("\n\n\t\t\t\t\t\tDO U WISH TO HAVE ANOTHER TRANSATION?(y/n):\t");//this option is to ask the user if he/she still wanna make transation if "y" its gonna continue if "no" you quit the ATM
		fflush(stdin);//this one serves for getting the input directly
		scanf("%c", &transaction);//scanning the character
		if (transaction == 'n'|| transaction == 'N')//the condition that you can use N/n
                    k = 1;//you can use 1or "y"


	} while (!k);//not operator invertor
	printf("\n\n\t\t\t\t\t\t THANKS FOR USING OUT STANDARD BANK");
}
