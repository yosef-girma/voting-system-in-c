/*
#include <stdio.h>
#include <stdlib.h>

 void user_login();
 void admin_login();
int main()
{
    printf("   Welcome To \tVoting System  \n \n \n \n");

    printf("=================================================================== \n");
    printf("  \t \t    1 User Login  \n \n");
    printf("  \t  \t   2 Admin Login  \n \n");
    printf("  \t  \t   3 Exit  \n\n\n"      );
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");

    int login_input;

     scanf("%d",&login_input);

    switch(login_input)
    {

    case 1:

        user_login();
        break;

    case 2:

       admin_login();
        break;

    case 3:

       system("exit");

       break;
    default:

      printf("Invalid Choice");



    }


    return 0;
}

void user_login()
{

    system("cls");

    char username[50];
    char password[40];
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><> \n\n\n");

    printf(" \t \t \t          User Login          \n\n");

    printf(" Username \n");
    gets(username);

    printf("Password");

    gets(password);



}

void admin_login()
{

    printf(" Admin Login");

}

*/
