#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

char username[30];
char url[100];
void displaylogo()
{
    printf("----------------------------------------------------------\n");
    printf("                        JASMINE\n");
    printf("----------------------------------------------------------\n");

}
int fact()
{delay(1);
    FILE *fq=fopen("questions.txt","r");
    FILE *fa=fopen("answers.txt","r");
        if(fq==NULL||fa==NULL)
        {   printf("error");
            return 0;
        }
        int i;

         char question[100],ch[30],answer[30];
       label4: fgets(question, sizeof question, fq);
        printf("Jasmine>%s%s>",question,username);
        scanf("%s",ch);
        for(i=0;ch[i]!='\0';++i);
        ch[i]='\n';
        ch[i+1]='\0';
        fgets(answer, sizeof answer,fa);


        if(!(strcmp(answer,ch)))
            printf("Jasmine>That's right!!\n");
        else
            printf("Jasmine>The right answer is %s",answer);
        printf("Jasmine>Wanna check another fact?(yes/no)\n%s> ",username);
        scanf("%s",ch);
        if(!strcmp(ch,"yes"))
        {
            goto label4;
        }
        else
        {
            fclose(fq);
            fclose(fa);
        }

delay(1);
}
void game()
{   int game;
delay(1);
    printf("Jasmine>What game would you like to play? \n");
    delay(1);
    printf("\t\t  1)Snake game \n\t\t  2)Tic Tac Toe\n\t\t  3)Pacman\n\t\t  4)Go back to main menu\n%s> ",username);
    label: scanf("%d",&game);
    delay(1);
    switch(game)
    {
        case 1: system("cmd /c start https://www.google.com/search?q=play%20snake&stick=H4sIAAAAAAAAAOOwfcQowy3w8sc9YSnhSWtOXmPk5eIOzkvMTnUsSk5MSeUBAB3FamohAAAA");
                break;
        case 2: system("cmd /c start https://www.google.com/search?q=play%20tic%20tac%20toe&stick=H4sIAAAAAAAAAOOwfcQoxS3w8sc9YSnBSWtOXmPk5uIMyUwOSUwOyU_lAQCnLbXBHwAAAA");
                break;
        case 3: system("cmd /c start https://www.google.com/search?q=play%20pacman&stick=H4sIAAAAAAAAAOOwfcQozi3w8sc9YSm-SWtOXmPk4GILSEzOTczjAQBYtGz7HAAAAA");
                break;
        case 4:break;
        default: printf("Jasmine> You have made an invalid choice!Enter again\n%s> ",username);
                goto label;


    }

}
void read()
{char read[50];
delay(1);
  printf("What would You like to read about \n%s> ",username);
            scanf("%s",read);
            strcpy(url,"https://en.wikipedia.org/wiki/");
            strcat(url,read);
            char cmd[100] = "cmd /c start ";
            strcat(cmd, url);
            system(cmd);
}
void song()
{ char song[20];delay(1);
    printf("What song whould you like to hear?\n%s> ",username);

            scanf("%s",song);
            strcpy(url,"https://www.youtube.com/results?search_query=");
            strcat(url,song);
            char cmd[100] = "cmd /c start ";
            strcat(cmd, url);
            system(cmd);
            delay(1);
}
void tyme()
{delay(1);
    int hours, minutes, seconds, day, month, year;

	time_t now;

	time(&now);


	printf("Jasmine>Today is : %s", ctime(&now));
	delay(1);


	struct tm *local = localtime(&now);

	hours = local->tm_hour;			// get hours since midnight	(0-23)
	minutes = local->tm_min;		// get minutes passed after the hour (0-59)
	seconds = local->tm_sec;		// get seconds passed after the minute (0-59)

	day = local->tm_mday;			// get day of month (1 to 31)
	month = local->tm_mon + 1;		// get month of year (0 to 11)
	year = local->tm_year + 1900;	// get year since 1900


	if (hours < 12)	// before midday
		printf("Jasmine>Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
	else	// after midday
		printf("Jasmine> Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
delay(1);
	printf("Jasmine> Date is : %02d/%02d/%d\n", day, month, year);
	delay(1);


}
void menu()
{   int input;
delay(1);
    printf("Jasmine> Hello %s , What would you like to do today? \n",username);
    delay(1);
printf("         Oh and don't forget to be connected to the internet \n");
delay(1);
printf("         Need help !! Here is what you can do \n");
delay(1);

label2:printf(" \t  1) A quick fact check \n \t  2)Play a game \n\t  3)Read about something \n\t  4)Play some song \n\t  5)Calculate \n\t  6)Check Time\n\t  7)Exit\n%s>",username);
label1:scanf("%d",&input);
switch(input)
{
    case 1:fact();
            break;
    case 2:game();
            break;
    case 3:read();
            break;
    case 4:song();
            break;
     case 5: system("c:\\windows\\system32\\calc");
                break;
    case 6: tyme();
            break;

    case 7:exit(0);
    default: printf("Jasmine> You have made an invalid choice! Enter again\n%s> ",username);
                goto label1;


}
goto label2;
}


void start()
{char ch[30];

strcpy(username,"stranger");
printf("%s>",username);
scanf("%[^\n]",ch);
while((getchar())!='\n');
printf("Jasmine> Hey %s, who are you?\n%s> ",username,username);
scanf("%s",username);
while((getchar())!='\n');
delay(1);
printf("Jasmine> Welcome %s, How are you doing?\n%s> ",username,username);
scanf("%[^\n]",ch);
while((getchar())!='\n');
delay(1);
char substring[10],substring1[10],substring2[10],substring3[10],substring4[10];
strcpy(substring,"no");
strcpy(substring1,"fine");
strcpy(substring2,"good");
strcpy(substring3,"great");
strcpy(substring4,"sure");

if(strstr(ch,substring)!=NULL)
{
    printf("Jasmine> Why what happened?\n%s> ",username);
    scanf("%[^\n]",ch);
    while((getchar())!='\n');
    printf("Jasmine> Ohh okay. Take care :)\n");
}
else if(strstr(ch,substring1)!=NULL||strstr(ch,substring2)!=NULL||strstr(ch,substring3)!=NULL)
    printf("Jasmine> Thats nice! I'm doing great too.\n");
else
{
    printf("Jasmine> Why what happened?\n%s> ",username);
    scanf("%[^\n]",ch);
    while((getchar())!='\n');
    delay(1);
    printf("Jasmine> Ohh okay. Take care :)\n");
}
delay(1);
printf("Jasmine> Need some entertainment?\n%s> ",username);
strcpy(substring1,"yes");
strcpy(substring2,"yup");
strcpy(substring3,"okay");

scanf("%[^\n]",ch);
while((getchar())!='\n');
if(strstr(ch,substring)!=NULL)
{
    printf("Jasmine> C'mon it will be fun\n%s> ",username);
    scanf("%[^\n]",ch);
    while((getchar())!='\n');
}
if(strstr(ch,substring1)!=NULL||strstr(ch,substring2)!=NULL||strstr(ch,substring3)!=NULL||strstr(ch,substring4)!=NULL)
  {
      menu();
    exit(0);
  }
else
 {
     printf("Jasmine> Okay. You have a great day\nJasmine> See ya\n%s> ",username);
     scanf("%[^\n]",ch);
     while((getchar())!='\n');
     exit(0);
 }


}

void main()
{ displaylogo();
start();
}
