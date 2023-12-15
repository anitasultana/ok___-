#define _WIN32_WINNT 0x0500
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

typedef struct login_data
{
    char user_name[30];
    char password[30];
} Sdata;

typedef enum Gender
{
    Male = 1,
    Female = 2,
    Others = 3
} GENDER;

typedef struct STUDENT
{
    char id[20];
    char name[30];
    char batch[5];
    char section[5];
    char blood_group[5];
    GENDER gender;
    char mobile[15];
    char email[20];
} stu;

int MaximizeOutputWindow(void);
int SetConsoleSize(void);
void user_login();
void admin_access();
void user_registration();
void about();
void admin_guideline();
void user_guideline();
void logo();
void createAccount();
void displayInfo();
void updateInfo();
void deleteInfo();
void searchInfo();
void menu();
void user_home();
void admin_home();
void user_menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    MaximizeOutputWindow();
    SetConsoleSize();
    system("COLOR 5E");
    system("cls");
    printf("\n\n\n\n\n\n");
    logo();
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                => 1. Admin Login                     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                => 2. Students Login                  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                => 3. About Programmer                |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                => 0. Exit                            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    char option;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t# Enter Your Option: ");
    scanf(" %c", &option);

    switch (option)
    {
    case '1':
    {
        getchar();
        admin_access();
        break;
    }
    case '2':
    {
        user_menu();
        break;
    }
    case '3':
    {
        about();
        menu();
        break;
    }
    case '0':
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t====== Thank You ======");
        break;
    }
    default:
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid Option, Please Enter Right Option !\n");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Enter any keys to continue.......");
        getch();
        menu();
    }
    }
    return;
}

void user_home()
{
    char option;
    system("COLOR 0E");
    while (option != '0')
    {
        system("cls");
        // printf("\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n");
        logo();
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|       SWE Students Information Database System       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|                                                      |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 1. Display All Students Information         |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 2. Search Student Information               |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 3. Guideline                                |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 4. About                                    |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> *. Logout                                   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 0. Exit                                     |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t# Enter Your Option: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
        {
            displayInfo();
            break;
        }
        case '2':
        {
            searchInfo();
            break;
        }
        case '3':
        {
            user_guideline();
            break;
        }
        case '4':
        {
            about();
            break;
        }
        case '*':
        {
            menu();
            break;
        }
        case '0':
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t====== Thank You ======");
            break;
        }
        default:
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid Option, Please Enter Right Option !\n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Enter any keys to continue.......");
            getch();
        }
        }
    }
    // return;
}

void admin_home()
{
    char option;
    while (option != '0')
    {
        system("cls");
        system("COLOR 02");
        printf("\n\n\n\n\n\n");
        logo();
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|       SWE Students Information Database System       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|                                                      |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 1. Create Student Account                   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 2. Display All Students Information         |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 3. Update Student Information               |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 4. Delete Student Information               |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 5. Search Student Information               |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 6. Guideline                                |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 7. About                                    |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> *. Logout                                   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|\t=> 0. Exit                                     |");
        printf("\n\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t# Enter Your Option: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
        {
            // getchar();
            createAccount();
            break;
        }
        case '2':
        {
            displayInfo();
            break;
        }
        case '3':
        {
            updateInfo();
            break;
        }
        case '4':
        {
            deleteInfo();
            break;
        }
        case '5':
        {
            searchInfo();
            break;
        }
        case '6':
        {
            admin_guideline();
            break;
        }
        case '7':
        {
            about();
            break;
        }
        case '*':
        {
            menu();
            break;
        }
        case '0':
        {
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t====== Thank You ======");
            return;
            // break;
        }
        default:
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid Option, Please Enter Right Option !\n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Enter any keys to continue.......");
            getch();
        }
        }
    }
    // return;
}

void user_registration()
{
    FILE *fileOne = fopen("studentInfo.txt", "ab+");
    FILE *data;
    Sdata create;
    data = fopen("user_login.txt", "ab+");

    /*if (fileOne == NULL || data == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\tError !\n");
    }
    */
    stu stundentInformation;

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|             Registration Student Account             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's ID : ");
    getchar();
    gets(stundentInformation.id);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Name : ");
    gets(stundentInformation.name);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Batch : ");
    gets(stundentInformation.batch);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Section : ");
    gets(stundentInformation.section);
    // toupper(stundentInformation.section);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Blood Group : ");
    gets(stundentInformation.blood_group);
    // toupper(stundentInformation.section);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Contact Number : ");
    // getchar();
    gets(stundentInformation.mobile);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your's Contact E-mail : ");
    gets(stundentInformation.email);

    fwrite(&stundentInformation, sizeof(stundentInformation), 1, fileOne);

    system("CLS");

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|             Registration Student Account             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t                   Your Information                         ");
    printf("\n\t\t\t\t\t\t\t\t\t     ***************************************************************\n");
    printf("\n\t\t\t\t\t\t\t\t\t          Your's ID             : ");
    puts(stundentInformation.id);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Name           : ");
    puts(stundentInformation.name);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Batch          : ");
    puts(stundentInformation.batch);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Section        : ");
    puts(stundentInformation.section);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Blood Group    : ");
    puts(stundentInformation.blood_group);
    // printf("\n\t\t\t\t\t\t\t\t     Your's Gender         : ");
    // puts(stundentInformation.gender);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Contact Number : ");
    puts(stundentInformation.mobile);
    printf("\n\t\t\t\t\t\t\t\t\t          Your's Contact E-mail : ");
    puts(stundentInformation.email);
    printf("\n\t\t\t\t\t\t\t\t\t     ***************************************************************\n");

    fclose(fileOne);

    int option;
    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter 1 to Save info or 2 to Cancel: ");
    scanf("%d", &option);

    system("CLS");
    // coordinate(15, 10);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
    getch();

    if (option == 1)
    {
        getchar();
    createPass:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t........................................................\n");
        printf("\t\t\t\t\t\t\t\t\t\t   <<< Please Create Your Username & Set Password >>>   \n");
        printf("\t\t\t\t\t\t\t\t\t\t........................................................\n");

        char username[30];
        char pass[30];
        char confirm_pass[30];
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter Username   : ");
        // gets(create.user_name);
        gets(username);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter Password   : ");
        // gets(create.password);
        gets(pass);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm Password : ");
        gets(confirm_pass);

        // fread(&create, sizeof(create), 1, data);
        // write(&create, sizeof(create), 1, data);
        if (strcmp(pass, confirm_pass) == 0)
        {
            strcpy(create.password, pass);
            strcpy(create.user_name, username);
            fwrite(&create, sizeof(create), 1, data);
            // fprintf(data,"%s %s\n",create.user_name,create.password);
            fclose(data);

            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tRegistration Successful!\n");
            printf("\n\t\t\t\t\t\t\t\tPlease enter 1 to try to Login again and enter 2 to go Back or Enter any key to go Main Menu !\n");
            int choice;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    Enter Choice::: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("CLS");
                getchar();
                user_login();
                // break;
            }
            else if (choice == 2)
            {
                user_menu();
            }
            else
            {
                system("CLS");
                getchar();
                menu();
                // break;
            }
            // printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
            // getch();
        }
        else
        {
            fclose(data);
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t     Your password & confirm password are not same.");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t    Try Again........\n");
            // getch();
            // admin_access();
            printf("\n\t\t\t\t\t\t\t\tPlease enter 1 to try to set username & password again and enter 2 to go Back or Enter any key to go Main Menu !\n");
            int choice;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    Enter Choice::: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("CLS");
                getchar();
                goto createPass;
                // break;
            }
            else if (choice == 2)
            {
                user_menu();
            }
            else
            {
                system("CLS");
                getchar();
                menu();
                // break;
            }
        }
    }
    else if (option == 2)
    {
        getchar();
        system("CLS");
        menu();
    }
    else
    {
        getch();
        system("CLS");
        // coordinate(15, 10);
        int choice;
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tWrong Choice!");
        printf("\n\t\t\t\t\t\t\t\tEnter 1 to go to 'Main Menu' or Enter 2 to go to 'Login'\n\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            getchar();
            system("CLS");
            // coordinate(15, 10);
            menu();
        }
        if (choice == 2)
        {
            getchar();
            system("CLS");
            // coordinate(15, 10);
            user_login();
        }
        // printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
        // getch();
    }
}

void user_menu()
{
    system("cls");
    printf("\n\n\n\n\n\n");
    logo();
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                  => 1. Login                         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                  => 2. Registration                  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                  => 3. Back                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                  => 0. Exit                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    char opt;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t# Enter Your Option: ");
    scanf(" %c", &opt);

    switch (opt)
    {
    case '1':
    {
        getchar();
        user_login();
        break;
    }
    case '2':
    {
        user_registration();
        break;
    }
    case '3':
    {
        menu();
        break;
    }
    case '0':
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t====== Thank You ======");
        break;
    }
    default:
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid Option, Please Enter Right Option !\n");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Enter any keys to continue.......");
        getch();
        user_menu();
        break;
    }
    }
}

void user_login()
{
    char username[30], password[20];
    FILE *data;
    Sdata create;
    data = fopen("user_login.txt", "rb");

    // coordinate(20, 5);
    system("CLS");
    printf("\n\n\n\n\n\n");
    logo();
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|        Please Enter your login Details below         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");
    // getchar();//
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tUsername: ");
    gets(username);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPassword: ");
    gets(password);

    if (NULL == data)
    {
        system("CLS");
        // coordinate(15, 10);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tNo Information Available!");
        printf("\n\t\t\t\t\t\t\t\t\t\t\tPlease, first Create an Account for login\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    Try Again........\n");
        // getch();
        // admin_access();
        printf("\n\t\t\t\t\t\t\t\tPlease enter 1 to try to Login again and enter 2 to go Back or Enter any key to go Main Menu !\n");
        int choice;
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    Enter Choice::: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            system("CLS");
            getchar();
            user_login();
            // break;
        }
        else if (choice == 2)
        {
            user_menu();
        }
        else
        {
            system("CLS");
            menu();
            // break;
        }
    }

    while (fread(&create, sizeof(create), 1, data))
    {
        if (strcmp(username, create.user_name) == 0 && strcmp(password, create.password) == 0)
        {
            // coordinate(20, 5);
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t\t........................................................\n");
            printf("\t\t\t\t\t\t\t\t\t\t      <<<<<<<<<<<<< Successful Login >>>>>>>>>>>>>      \n");
            printf("\t\t\t\t\t\t\t\t\t\t........................................................\n");

            printf("\n\t\t\t\t\t\t\t\t\t\t\t      Press Any Key to go to HOME!");
            getch();
            fclose(data);
            user_home();
            break;
        }
        else
        {
            fclose(data);
            printf("\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tIncorrect username or password");
            printf("\n\t\t\t\t\t\t\t\tPlease enter 1 to try to Login again and enter 2 to go Back or Enter any key to go Main Menu !\n");
            int choice;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    Enter Choice::: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("CLS");
                getchar();
                user_login();
                // break;
            }
            else if (choice == 2)
            {
                user_menu();
            }
            else
            {
                system("CLS");
                getchar();
                menu();
                // break;
            }
        }
    }
}

void admin_access()
{

    system("CLS");
    // coordinate(15, 10);

    printf("\n\n\n\n\n\n");
    logo();
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                Welcome to Admin Panel!               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|              Please Verify Your Identity             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    // system("CLS");
    // coordinate(15, 10);

    char u_name[20];
    char password[10];
    printf("\n\t\t\t\t\t\t\t\t\t\tusername: ");
    gets(u_name);
    printf("\n\t\t\t\t\t\t\t\t\t\tpassword: ");
    gets(password);
    if (strcmp(u_name, "anita") == 0)
    {
        if (strcmp(password, "1045") == 0)
        {
            admin_home();
        }
    }
    else
    {
        system("CLS");
        // coordinate(15, 10);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tWrong username or password!!!");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tTry Again........\n");
        // getch();
        // admin_access();
        printf("\n\t\t\t\t\t\t\t\t\t    Please enter 1 to try to Login again or Enter any key to go Main Menu !\n");
        int choice;
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tEnter Choice::: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            system("CLS");
            getchar();
            admin_access();
            // break;
        }
        else
        {
            system("CLS");
            menu();
            // break;
        }
    }
}

void createAccount()
{
    FILE *fileOne = fopen("studentInfo.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tError!!\n");
        printf("\t\t\t\t\t\t\t\t\t\tFile is not available or Information not found.");
    }

    stu stundentInformation;

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                 Create Student Account               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's ID : ");
    getchar();
    gets(stundentInformation.id);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Name : ");
    gets(stundentInformation.name);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Batch : ");
    gets(stundentInformation.batch);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Section : ");
    gets(stundentInformation.section);
    // toupper(stundentInformation.section);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Blood Group : ");
    gets(stundentInformation.blood_group);
    // toupper(stundentInformation.section);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Contact Number : ");
    // getchar();
    gets(stundentInformation.mobile);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Contact E-mail : ");
    gets(stundentInformation.email);

    fwrite(&stundentInformation, sizeof(stundentInformation), 1, fileOne);

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}

void displayInfo()
{
    FILE *fileOne = fopen("studentInfo.txt", "rb");

    if (fileOne == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tError!!\n");
        printf("\t\t\t\t\t\t\t\t\t\tFile is not available or Information not found.");
    }

    stu stundentInformation;

    system("cls");

    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                All Students Information              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    printf("\n\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", "ID", "Name", "Batch", "Section", "Blood Group", "Contact", "E-mail");
    printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");

    while (fread(&stundentInformation, sizeof(stundentInformation), 1, fileOne) == 1)
    {
        printf("\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", stundentInformation.id, stundentInformation.name, stundentInformation.batch, stundentInformation.section, stundentInformation.blood_group, stundentInformation.mobile, stundentInformation.email);
        // if (fread(&stundentInformation, sizeof(stundentInformation), 1, fileOne) == 1)
        {
            printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
        }
    }
    /*if (fread(&stundentInformation, sizeof(stundentInformation), 1, fileOne) != NULL)
    {
        printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
    }*/

    printf("\n\n\t\t\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}

void updateInfo()
{
    FILE *fileOne = fopen("studentInfo.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");

    stu studentInformation, tempInformation;

    int choice, flag = 0;

    system("cls");

    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|               Update Students Information            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\tFile is empty or no information found.\n");
        // Handle the empty file scenario here
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
        getch();
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's ID : ");
        getchar();
        gets(tempInformation.id);

        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (strcmp(studentInformation.id, tempInformation.id) == 0)
            {
                flag++;
                printf("\n\n\t\t\t\t\t\t\t\t\t\t                   Your Information                         ");
                printf("\n\t\t\t\t\t\t\t\t\t    ***************************************************************\n");
                printf("\n\t\t\t\t\t\t\t\t\t         Your's ID             : ");
                puts(studentInformation.id);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Name           : ");
                puts(studentInformation.name);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Batch          : ");
                puts(studentInformation.batch);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Section        : ");
                puts(studentInformation.section);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Blood Group    : ");
                puts(studentInformation.blood_group);
                // printf("\n\t\t\t\t\t\t\t\t     Your's Gender         : ");
                // puts(stundentInformation.gender);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Contact Number : ");
                puts(studentInformation.mobile);
                printf("\n\t\t\t\t\t\t\t\t\t         Your's Contact E-mail : ");
                puts(studentInformation.email);
                printf("\n\t\t\t\t\t\t\t\t\t    ***************************************************************\n");
                printf("\n\t\t\t\t\t\t\t\t\t\tChoose your option :");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 1. Update Student ID");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 2. Update Student Name");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 3. Update Student Batch");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 4. Update Student Section");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 5. Update Student Blood Group");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 6. Update Student Contact No.");
                printf("\n\t\t\t\t\t\t\t\t\t\t=> 7. Update Student Email");
                printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter Your Option : ");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's ID to Update: ");
                    getchar();
                    gets(tempInformation.id);
                    strcpy(studentInformation.id, tempInformation.id);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 2)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Name to Update: ");
                    getchar();
                    gets(tempInformation.name);
                    strcpy(studentInformation.name, tempInformation.name);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 3)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Batch to Update: ");
                    getchar();
                    gets(tempInformation.batch);
                    strcpy(studentInformation.batch, tempInformation.batch);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 4)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Section to Update: ");
                    getchar();
                    gets(tempInformation.section);
                    strcpy(studentInformation.section, tempInformation.section);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 5)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Blood Group to Update: ");
                    getchar();
                    gets(tempInformation.blood_group);
                    strcpy(studentInformation.blood_group, tempInformation.blood_group);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 6)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Contact No. to Update: ");
                    getchar();
                    gets(tempInformation.mobile);
                    strcpy(studentInformation.mobile, tempInformation.mobile);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else if (choice == 7)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's Email to Update: ");
                    getchar();
                    gets(tempInformation.email);
                    strcpy(studentInformation.email, tempInformation.email);

                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tUpdated successfully!\n\n");
                }
                else
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option.");
                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                }
            }
            else
            {
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
            }
        }

        fclose(fileOne);
        fclose(temp);

        remove("studentInfo.txt");
        rename("temp.txt", "studentInfo.txt");

        if (flag == 0)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\tStudent Id is not found");
        }

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
        getch();
    }
}

void deleteInfo()
{
    FILE *fileOne = fopen("studentInfo.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");

    stu studentInformation, tempInformation;

    int choice, flag = 0;

    system("cls");

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|               Delete Student Information             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    // fseek(fileOne, 0, SEEK_END);
    // if (ftell(fileOne) == 0)
    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\tFile is empty or no information found.\n");
        // Handle the empty file scenario here
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
        getch();
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student's ID : ");
        getchar();
        gets(tempInformation.id);

        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (strcmp(studentInformation.id, tempInformation.id) == 0)
            {
                flag++;
                printf("\n\t\t\t\t\t\t\t\t\t\tAre you sure to delete ??");
                printf("\n\t\t\t\t\t\t\t\t\t\t1.Yes");
                printf("\n\t\t\t\t\t\t\t\t\t\t2.Back");
                printf("\n\t\t\t\t\t\t\t\t\t\tEnter Your Option : ");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tInformation has been deleted successfully!\n\n");
                }
                else if (choice == 2)
                {
                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                }
                else
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Option");
                    fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                }
            }
            else
            {
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
            }
        }

        fclose(fileOne);
        fclose(temp);

        remove("studentInfo.txt");
        rename("temp.txt", "studentInfo.txt");

        if (flag == 0)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\tStudent Id is not found");
        }

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
        getch();
    }
}

void searchInfo()
{
    FILE *fileOne = fopen("studentInfo.txt", "rb");

    stu studentInformation;

    int choice, flag = 0;
    char studentID[20], studentBatch[10], studentBloodGroup[10];

    if (fileOne == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tError!!\n");
        printf("\t\t\t\t\t\t\t\t\t\tFile is not available or Information not found.");
    }

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|               Search Student Information             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t Choose your option");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t ------------------\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t   => 1. Search by Student ID");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t   => 2. Search by Student Batch");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t   => 3. Search by Student Blood Group");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t   => 4. Back");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter Your Option : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|             Search Student ID Information            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\n");
        printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student ID : ");
        getchar();
        gets(studentID);
        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (strcmp(studentInformation.id, studentID) == 0)
            {
                flag++;
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent ID : %s", studentInformation.id);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Name : %s", studentInformation.name);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Batch : %s", studentInformation.batch);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Section : %s", studentInformation.section);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Blood Group : %s", studentInformation.blood_group);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Contact No. : %s", studentInformation.mobile);
                printf("\n\t\t\t\t\t\t\t\t\t\tStudent Email : %s\n", studentInformation.email);
            }
        }
        if (flag == 0)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\tStudent Id is not found");
        }
    }
    else if (choice == 2)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|           Search Student Batch Information           |\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\n");
        printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student Batch : ");
        getchar();
        gets(studentBatch);

        printf("\n\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", "ID", "Name", "Batch", "Section", "Blood Group", "Contact", "Email");
        printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (strcmp(studentInformation.batch, studentBatch) == 0)
            {
                flag++;
                printf("\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", studentInformation.id, studentInformation.name, studentInformation.batch, studentInformation.section, studentInformation.blood_group, studentInformation.mobile, studentInformation.email);
                {
                    printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
                }
            }
        }
        if (flag == 0)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t No students in this Batch");
        }
    }
    else if (choice == 3)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t\t\t|        Search Student Blood Group Information        |\n");
        printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
        printf("\n");
        printf("\n\t\t\t\t\t\t\t\t\t\tEnter Student Blood Group : ");
        getchar();
        gets(studentBloodGroup);

        printf("\n\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", "ID", "Name", "Batch", "Section", "Blood Group", "Contact", "Email");
        printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (strcmp(studentInformation.blood_group, studentBloodGroup) == 0)
            {
                flag++;
                printf("\n\t\t\t\t %-20s%-25s%-15s%-20s%-15s%-25s%-s", studentInformation.id, studentInformation.name, studentInformation.batch, studentInformation.section, studentInformation.blood_group, studentInformation.mobile, studentInformation.email);
                {
                    printf("\n\t\t\t\t|---------------------------------------------------------------------------------------------------------------------------------------------------------|");
                }
            }
        }
        if (flag == 0)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t No students in this Blood Group");
        }
    }
    else if (choice == 4)
    {
        fclose(fileOne);
        admin_home();
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t Invalid Option");
    }

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter any keys to continue.......");
    getch();
    searchInfo();
    // fclose(fileOne);
}

void logo()
{
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t      ||        || ||~~~~~~  ||         ||****** \n");
    printf("\t\t\t\t\t\t\t\t\t      ||        || ||        ||         ||     *  \n");
    printf("\t\t\t\t\t\t\t\t\t      ||-| | | ||| ||~~~~~~  ||         || *****    \n");
    printf("\t\t\t\t\t\t\t\t\t      ||        || ||        ||         ||         \n");
    printf("\t\t\t\t\t\t\t\t\t     .||        || ||~~~~~~~ ||________ ||         \n");
}

int SetConsoleSize(void)
{

    system("mode CON: COLS=220");

    return 0;
}

int MaximizeOutputWindow(void)
{

    HWND ConsoleWindow;

    ConsoleWindow = GetConsoleWindow();

    ShowWindow(ConsoleWindow, SW_MAXIMIZE);

    return 0;
}

void about()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                    About Programmer                  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t|                             Project Name : SWE Student Information System for Blood Donate                        |\n");
    printf("\t\t\t\t\t\t|                             --------------------------------------------------------------                        |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                        Submitted To                                               |\n");
    printf("\t\t\t\t\t\t|                                                        ------------                                               |\n");
    printf("\t\t\t\t\t\t|                                                      Md. Shohel Arman                                             |\n");
    printf("\t\t\t\t\t\t|                                                     Assistant Professor                                           |\n");
    printf("\t\t\t\t\t\t|                                            Department of Software Engineering                                     |\n");
    printf("\t\t\t\t\t\t|                                             Daffodil International University                                     |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                        Submitted By                                               |\n");
    printf("\t\t\t\t\t\t|                                                        ------------                                               |\n");
    printf("\t\t\t\t\t\t|                                                  Name : Anita Sultana Asamony                                        |\n");
    printf("\t\t\t\t\t\t|                                                    ID : 0242220005341045                                          |\n");
    printf("\t\t\t\t\t\t|                                                 Batch : 39th                                                      |\n");
    printf("\t\t\t\t\t\t|                                               Section : A                                                         |\n");
    printf("\t\t\t\t\t\t|                                            Department : Software Engineering                                      |\n");
    printf("\t\t\t\t\t\t|                                             Institute : Daffodil International University                         |\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
    getch();
}

void admin_guideline()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                      Admin Guideline                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t|            1. Create Student Account: This option allows you to create a new student account by entering          |\n");
    printf("\t\t\t\t\t\t|               the required details such as ID, name, batch, section, blood group, gender, mobile number,          |\n");
    printf("\t\t\t\t\t\t|               and email.                                                                                          |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            2.	Display All Students Information: You can view all the stored student information in a              |\n");
    printf("\t\t\t\t\t\t|               tabular format, displaying details such as ID, name, batch, section, blood group, contact           |\n");
    printf("\t\t\t\t\t\t|               number, and email.                                                                                  |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            3.	Update Student Information: This option enables you to update student information based             |\n");
    printf("\t\t\t\t\t\t|               on the student's ID. You can choose the field you want to update, including ID, name,               |\n");
    printf("\t\t\t\t\t\t|               batch, section, blood group, contact number, or email.                                              |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            4.	Delete Student Information: This option allows you to delete student information based on           |\n");
    printf("\t\t\t\t\t\t|               the student's ID. It confirms your choice before performing the deletion.                           |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            5.	Search Student Information: You can search for student information based on different               |\n");
    printf("\t\t\t\t\t\t|               criteria, such as student ID, blood group, or batch. The system will display the relevant           |\n");
    printf("\t\t\t\t\t\t|               student details if they match the search criteria.                                                  |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            Additionally, the code includes a logo and an 'About' section that provides project information,       |\n");
    printf("\t\t\t\t\t\t|                    including the project name, submission details, and other relevant information.                |\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
    getch();
}

void user_guideline()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                     User Guideline                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|------------------------------------------------------|\n");
    printf("\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t|            1. Create Student Account: This option allows you to create a new student account by entering          |\n");
    printf("\t\t\t\t\t\t|               the required details such as ID, name, batch, section, blood group, gender, mobile number,          |\n");
    printf("\t\t\t\t\t\t|               and email.                                                                                          |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            2.	Display All Students Information: You can view all the stored student information in a              |\n");
    printf("\t\t\t\t\t\t|               tabular format, displaying -details such as ID, name, batch, section, blood group, contact           |\n");
    printf("\t\t\t\t\t\t|               number, and email.                                                                                  |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            3.	Search Student Information: You can search for student information based on different               |\n");
    printf("\t\t\t\t\t\t|               criteria, such as student ID, blood group, or batch. The system will display the relevant           |\n");
    printf("\t\t\t\t\t\t|               student details if they match the search criteria.                                                  |\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|            Additionally, the code includes a logo and an 'About' section that provides project information,       |\n");
    printf("\t\t\t\t\t\t|                    including the project name, submission details, and other relevant information.                |\n");
    printf("\t\t\t\t\t\t|-------------------------------------------------------------------------------------------------------------------|\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any keys to continue.......");
    getch();
}



