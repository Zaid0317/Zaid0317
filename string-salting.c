#include<stdio.h>
#include<string.h>
//salting(apna college)
//WAP to add salt in the user password
void salting(char pass[]);
void main()
{
    char password[100];
   printf("enter your password \n");
   scanf("%s",password);
   salting(password);
}
void salting(char pass[])
{
    //char salt[]="123";
    char salt[10];
    printf("enter the salt you want \n");
    scanf("%s",salt);
    char newpass[100];
    strcpy(newpass,pass);//jo purana pass tha usse new pass mein store krliye fir concat()
    strcat(newpass,salt);//=pass + salt
    puts(newpass);
}