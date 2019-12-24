#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
struct park
{
    char pname[50];
    int parkid;
    char loc[50];
    char area[50];
    char nearestcity[50];
    char gbody[50];
    char airport[50];
    char famousfor[50];
};
struct name
{
  char filenames[30];
};
int addpark();
void display();
int database();
int exitprogram();
void deletepark();
void updatepark();
int main()
{
        int ch,i;
        char ppassword[10];
        char password[10];
        char pwd,cw;
        char username[10];
        char pusername[10];
        strcpy(username,"UIM");
        strcpy(password,"BCA");
        //system("color 2");
        printf("\n\n\t\t\t\t\t*******************************************************************************\n");
        printf("\t\t\t\t\t**                              !!Welcome to  Jungle Safari!!               **\n");
        printf("\t\t\t\t\t*******************************************************************************\n");
        printf("\n\n\t\t\t\t\t\t\t 1. Admin Mode. ");
        printf("\n\n\t\t\t\t\t\t\t 2. User Mode. ");
        printf("\n\n\t\t\t\t\t\t\t 3. Exit. ");
        printf("\n\n\t\t\t\t\t Enter your choice: ");
        scanf(" %d",&ch);
        switch(ch)
      {
              	case 1: // Admin Mode
             {
                system("cls");
                fflush(stdin);
                printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                printf("\t\t\t\t\t**                              !!Welcome to  Jungle Safari!!               **\n");
                printf("\t\t\t\t\t*******************************************************************************\n");
              	printf("\n\n\t\t\t\t\tPlease enter your username and password: ");
                printf("\n\n\t\t\t\t\tDoctor Appointment administrators should note that username and password are case sensitive  ");
                fflush(stdin);
                printf("\n\n\t\t\t\t\tEnter your username: ");
                gets(pusername);
                fflush(stdin);
                printf("\n\t\t\t\t\tEnter your password: ");
                pwd=getch();
                for(i=0;pwd!='\r';i++)
                {
                    ppassword[i]=pwd;
                    printf("*");
                    if(pwd=='\b')
                    {
                       i-=2;
                    }
                    pwd=getch();
                }
                ppassword[i]='\0';
                fflush(stdin);
                if(strcmp(password,ppassword)==0&&strcmp(username,pusername)==0)
                {
                    printf("\n\n\n\n\t\t\t\t\t\t    ****************** Login Successful ******************* ");
                    Sleep(2000);
                    system("cls");
                    database();
                }
                else
                {
                    printf("\a");
                    printf("\n\n\n\t\t\t\t\t\t Your password or username is incorrect. Please try again!! \n");
                    getch();
                    system("cls");
                    main();
                }
                break;
          }
            case 2://User Mode
           {
                system("cls");
                FILE *fp1,*fp;
                struct park p1;
                struct name n1;
                char filenames[30];
                char fname[30]="e:\\";
                char pathname[30]="e:\\";
                char ch;
                int option,choice,c,rec,x;
                label:
                   for(int i=1;i<=6;i++) //6 time statement will blink
                {
                   system("cls");
                   Sleep(3);
                   printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                   printf("\t\t\t\t\t**                         !!Welcome to  Jungle Safari User Mode!!           **\n");
                   printf("\t\t\t\t\t*******************************************************************************\n");
                   Sleep(3);
                }
                printf("\n\n\t\t\t\t\t\t\t 1. Top 10 National Parks In India.  ");
                printf("\n\n\t\t\t\t\t\t\t 2. All Parks Added. ");
                printf("\n\n\t\t\t\t\t\t\t 3. Exit.");
                printf("\n\n\t\t\t\t\t Enter the option you need to carry: ");
                scanf("%d",&c);
                if(c>3 || c<1)
                {
                    printf("\a");
                    printf("\n\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1,2 and 3]. ////////////////////// ");
                    getch();
                    goto label;
                }
                while((c>=1)&&(c<=3))
                {
                        if(c==1)
                       {
                            ex:
                            system("cls");
                            printf("\n\n\t\t\t\t\t*******************************************************************************");
                            printf("\n\t\t\t\t\t\t\t         Top 10 National Parks In India.  ");
                            printf("\n\t\t\t\t\t*******************************************************************************");
                            printf("\n\n\t\t\t\t\t\t\t 1. Ranthambore National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 2. Jim Corbett National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 3. Sundarbans National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 4. Bandhavgarh National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 5. Kaziranga National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 6. Bandipur National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 7. Great Himalayan National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 8. Periyar National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 9. Mudumalai National Park. ");
                            printf("\n\n\t\t\t\t\t\t\t 10. Eravikulam National Park. ");
                            printf("\n\n\t\t\t\t\t ////////////////////// Press 0 to exit from User Mode //////////////////////// ");
                            printf("\n\n\t\t\t\t\t Enter the option you need to carry: ");
                            scanf("%d",&option);
                            if(option>10 || option<0)
                            {
                                printf("\a");
                                printf("\n\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 - 10]. ////////////////////// ");
                                getch();
                                goto ex;
                            }
                            while((option>=0)&&(option<=10))
                            {
                                 if(option==0)
                                {
                                  system("cls");
                                  main();
                                }
                               else if(option==1)
                              {
                                   fp1=fopen("e:\\ranthambore.dat","rb");
                                   if(fp1==NULL)
                                   {
                                     printf("\a");
                                     printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                     getch();
                                     exit(0);
                                   }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                         !!Ranthambore National Park!!                     **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                while(rec!=0)
                                {
                                  printf("\n\n\t\t\t\t\t\t\t    Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t    Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t    Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t    Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t    Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t    Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                }
                                  fclose(fp1);
                                  getch();
                                  goto ex;
                            }
                            else if(option==2)
                            {
                                 fp1=fopen("e:\\jimcorbett.dat","rb");
                                  if(fp1==NULL)
                                   {
                                     printf("\a");
                                     printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                     getch();
                                     exit(0);
                                   }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Jim Corbett National Park!!                    **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                while(rec!=0)
                                {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                               }
                                  fclose(fp1);
                                  getch();
                                  goto ex;
                            }
                            else if(option==3)
                            {
                               fp1=fopen("e:\\sundarbans.dat","rb");
                               if(fp1==NULL)
                               {
                                  printf("\a");
                                  printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                  getch();
                                  exit(0);
                               }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Sundarbans National Park!!                     **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                                {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                               }
                               fclose(fp1);
                               getch();
                               goto ex;
                        }
                        else if(option==4)
                        {
                            fp1=fopen("e:\\bandhavgarh.dat","rb");
                             if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Bandhavgarh National Park!!                    **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                            while(rec!=0)
                            {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                                  fclose(fp1);
                                  getch();
                                  goto ex;
                        }
                        else if(option==5)
                        {
                            fp1=fopen("e:\\kaziranga.dat","rb");
                              if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Kaziranga National Park!!                      **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                              {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                            fclose(fp1);
                            getch();
                            goto ex;
                        }
                        else if(option==6)
                        {
                            fp1=fopen("e:\\bandipur.dat","rb");
                             if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Bandipur National Park!!                       **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                               {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                               }
                            fclose(fp1);
                            getch();
                            goto ex;
                        }
                        else if(option==7)
                        {
                            fp1=fopen("e:\\ghimalayan.dat","rb");
                            if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                            rec=fread(&p1,sizeof(p1),1,fp1);
                            system("cls");
                            printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                            printf("\t\t\t\t\t**                          !!Great Himalayan National Park!!                **\n");
                            printf("\t\t\t\t\t*******************************************************************************\n");
                                 while(rec!=0)
                              {
                                 printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                 printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                 printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                 printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                 printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                 printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                 printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                 rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                            fclose(fp1);
                            getch();
                            goto ex;
                        }
                        else if(option==8)
                        {
                            fp1=fopen("e:\\periyar.dat","rb");
                            if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Periyar National Park!!                        **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                                  {
                                    printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                    printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                    printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                    printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                    printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                    printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                    printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                    rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                            fclose(fp1);
                            getch();
                            goto ex;
                        }
                        else if(option==9)
                        {
                            fp1=fopen("e:\\mudumalai.dat","rb");
                             if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Mudumalai National Park!!                      **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");

                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                               {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                            fclose(fp1);
                            getch();
                            goto ex;
                        }
                        else if(option==10)
                        {
                            fp1=fopen("e:\\eravikulam.dat","rb");
                             if(fp1==NULL)
                             {
                                printf("\a");
                                printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                                getch();
                                exit(0);
                             }
                                  system("cls");
                                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                                  printf("\t\t\t\t\t**                          !!Eravikulam National Park!!                     **\n");
                                  printf("\t\t\t\t\t*******************************************************************************\n");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                                  while(rec!=0)
                            {
                                  printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                                  printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                                  printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                                  printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                                  printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                                  printf("\n\n\n\t\t\t\t\t\t ////////////////////// Press enter to go back //////////////////////// ");
                                  rec=fread(&p1,sizeof(p1),1,fp1);
                            }
                              fclose(fp1);
                              getch();
                              goto ex;
                       }
                   }
              }
                else if(c==2)
                {
                     FILE *fp,*fp1;
                     struct park p1;
                     struct name n1;
                     int rec,option,x;
                     char filenames[30];
                     char fname[30]="e:\\";
                     char pathname[30]="e:\\";
                     disp:
                     system("cls");
                     printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                     printf("\t\t\t\t\t**                            !!All Parks Added!!                            **\n");
                     printf("\t\t\t\t\t*******************************************************************************\n");
                     fp1=fopen("e:\\addedfiles.dat","rb");
                     if(fp1==NULL)
                    {
                      printf("\n\n\t\t\t\t\t Doesn't have enough files to read. Add some files! ");
                      getch();
                      goto label;
                    }
                    printf("\n\t\t\t\t\tAdded Files are: ");
                    x=fread(&n1,sizeof(n1),1,fp1);
                    while(x!=0)
                    {
                      printf("%s\n\n\t\t\t\t\t\t\t ",n1.filenames);
                      x=fread(&n1,sizeof(n1),1,fp1);
                    }
                    fclose(fp1);
                    printf("\n\t\t\t\t\tEnter the name of file you want to view: ");
                    fflush(stdin);
                    gets(filenames);
                    strcpy(pathname,fname);
                    strcat(filenames,".dat");
                    strcat(pathname,filenames);
                    fp1=fopen(pathname,"rb");
                    if(fp1==NULL)
                 {
                    printf("\a");
                    printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                    getch();
                    goto disp;
                 }
                 rec=fread(&p1,sizeof(p1),1,fp1);
               while(rec!=0)
               {
                 system("cls");
                 printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                 printf("\t\t\t\t\t**                             !!All Parks Added!!                           **\n");
                 printf("\t\t\t\t\t*******************************************************************************\n");
                 printf("\n\n\t\t\t\t\t\t\t\t   %s",p1.pname);
                 printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                 printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                 printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                 printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                 printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                 printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                 rec=fread(&p1,sizeof(p1),1,fp1);
               }
                fclose(fp1);
                printf("\n\n\n\t\t\t\t\t 1.Continue. ");
                printf("\n\n\t\t\t\t\t 2.Exit. ");
                fflush(stdin);
                printf("\n\n\t\t\t\t\tEnter the option you need to carry: ");
                scanf("%d",&option);
                system("cls");
                if(option==1)
                {
                    system("cls");
                    goto disp;
                }
                else if(option==2)
                {
                    system("cls");
                    main();
                }
                else
                {
                    printf("\a");
                    printf("\n\t\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 and 2]. ////////////////////// ");
                    Sleep(1000);
                    display();
                }
            }
                else if(c==3)
                  {
                     Sleep(2000);
                     main();
                  }
                  else
                    {
                       printf("\a");
                       Sleep(2000);
                       printf("\n\t\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 and 2]. ////////////////////// ");
                       goto label;
                    }
            }
        }
                case 3:
              {
                  system("cls");
                  main();
                  break;
              }
                default:
                printf("\a");
                printf("\n\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1,2 and 3]. ////////////////////// ");
                getch();
                system("cls");
                main();
                break;
    }
}
                    int database()
                {
                     int option;
                     fflush(stdin);
                     for(int i=1;i<=6;i++) //6 time statement will blink
                     {
                        system("cls");
                        Sleep(3);
                        printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                        printf("\t\t\t\t\t**                    !!Welcome to  Jungle Safari Admin Mode!!               **\n");
                        printf("\t\t\t\t\t*******************************************************************************\n");
                        Sleep(3);
                     }
                     printf("\n\t\t\t\t\t\t\t 1. To add new park. ");
                     printf("\n\t\t\t\t\t\t\t 2. To read park information. ");
                     printf("\n\t\t\t\t\t\t\t 3. To update park information. ");
                     printf("\n\t\t\t\t\t\t\t 4. To delete park information. ");
                     printf("\n\t\t\t\t\t\t\t 5. Logout. ");
                     printf("\n\n\t\t\t\t\t Enter the option you need to carry: ");
                     scanf("%d",&option);
                     if(option>5 || option<1)
                    {
                       printf("\a");
                       printf("\n\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 - 5]. ////////////////////// ");
                       getch();
                       database();
                    }
                     while((option>=1)&&(option<=5))
                    {
                        if(option==1)
                        {
                            system("cls");
                            addpark();
                        }
                        else if(option==2)
                        {
                            system("cls");
                            display();
                        }
                        else if(option==3)
                        {
                           system("cls");
                           updatepark();
                        }
                        else if(option==4)
                        {
                           system("cls");
                           deletepark();
                        }
                        else if(option==5)
                        {
                           Sleep(1000);
                           system("cls");
                           main();
                        }
                       return 1;
                    }
                }

                int addpark()
           {
                struct park p1;
                struct name n1;
                int n;
                char ans;
                char fname[30]="e:\\";
                char filenames[30];
                char pathname[30]="e:\\";
                char addedfiles[30];
                FILE *fp,*fp1;
             do
             {
                system("cls");
                printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                printf("\t\t\t\t\t**                         !!Add New Park Information Module!!               **\n");
                printf("\t\t\t\t\t*******************************************************************************\n");
                strcpy(n1.filenames,"");
                printf("\n\n\t\t\t\t\t Enter the filename: ");
                fflush(stdin);
                gets(n1.filenames);
                strcpy(pathname,fname);
                fp1=fopen("e:\\addedfiles.dat","ab+");
                fwrite(&n1,sizeof(n1),1,fp1);
                strcat(n1.filenames,".dat");
                strcat(pathname,n1.filenames);
                fclose(fp1);
                fp=fopen(pathname,"ab+");
                if(fp==NULL)
                {
                    printf("\a");
                    printf("\n\t\t\t\t\t Cannot open file");
                    Sleep(2000);
                    database();
                }
                printf("\n\t\t\t\t\t Enter Park Name: ");
                fflush(stdin);
                gets(p1.pname);
                printf("\n\t\t\t\t\t Enter Location: ");
                fflush(stdin);
                gets(p1.loc);
                printf("\n\t\t\t\t\t Enter Area: ");
                fflush(stdin);
                gets(p1.area);
                printf("\n\t\t\t\t\t Enter Nearest City: ");
                fflush(stdin);
                gets(p1.nearestcity);
                printf("\n\t\t\t\t\t Enter Governing Body: ");
                fflush(stdin);
                gets(p1.gbody);
                printf("\n\t\t\t\t\t Enter Nearest Airport: ");
                fflush(stdin);
                gets(p1.airport);
                printf("\n\t\t\t\t\t Enter Famous for: ");
                fflush(stdin);
                gets(p1.famousfor);
                fwrite(&p1,sizeof(p1),1,fp);
                printf("\n\t\t\t\t\t\t\t\t    Information Saved Successfully!  ");
                fclose(fp);
                printf("\n\n\n\t\t\t\t\t Do you want to enter more ?? (Y/N)  ");
                fflush(stdin);
                scanf("%c",&ans);
            }while(ans=='y'||ans=='Y');
             fclose(fp);
             database();
      }
                void display()
            {
               FILE *fp,*fp1;
               struct park p1;
               struct name n1;
               int rec,option,x;
               char filenames[30];
               char fname[30]="e:\\";
               char pathname[30]="e:\\";
               disp:
               system("cls");
               printf("\n\n\t\t\t\t\t*******************************************************************************\n");
               printf("\t\t\t\t\t**                         !!View Park Information Module!!               **\n");
               printf("\t\t\t\t\t*******************************************************************************\n");
               fp1=fopen("e:\\addedfiles.dat","rb");
                if(fp1==NULL)
                {
                  printf("\a");
                  printf("\n\n\t\t\t\t\t Doesn't have enough files to read. Add some files! ");
                  getch();
                  database();
                }
               printf("\n\t\t\t\t\tAdded Files are: ");
               x=fread(&n1,sizeof(n1),1,fp1);
               while(x!=0)
               {

                printf("%s\n\n\t\t\t\t\t\t\t ",n1.filenames);
                x=fread(&n1,sizeof(n1),1,fp1);
               }
               fclose(fp1);
               printf("\n\t\t\t\t\tEnter the name of file you want to view: ");
               fflush(stdin);
               gets(filenames);
               strcpy(pathname,fname);
               strcat(filenames,".dat");
               strcat(pathname,filenames);
               fp1=fopen(pathname,"rb");
               if(fp1==NULL)
                {
                    printf("\a");
                    printf("\n\n\n\t\t\t\t\t\t\t Cannot open file! File is not present at the database. ");
                    getch();
                    display();
                }
               rec=fread(&p1,sizeof(p1),1,fp1);
               while(rec!=0)
               {
                 system("cls");
                 printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                 printf("\t\t\t\t\t**                         !!View Park Information Module!!               **\n");
                 printf("\t\t\t\t\t*******************************************************************************\n");
                 printf("\n\n\t\t\t\t\t\t\t\t   %s",p1.pname);
                 printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                 printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                 printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                 printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                 printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                 printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                 rec=fread(&p1,sizeof(p1),1,fp1);
               }
               fclose(fp1);
               printf("\n\n\n\t\t\t\t\t 1.Continue. ");
               printf("\n\n\t\t\t\t\t 2.Exit. ");
               fflush(stdin);
               printf("\n\n\t\t\t\t\tEnter the option you need to carry: ");
               scanf("%d",&option);
                system("cls");
                if(option==1)
                {
                    system("cls");
                    goto disp;
                }
                else if(option==2)
                {
                    system("cls");
                    database();
                }
                else
                {
                    printf("\a");
                    printf("\n\t\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 and 2]. ////////////////////// ");
                    display();
                }
            }
        void updatepark()
        {
            FILE *fp,*fp1;
            struct park p1;
            struct name n1;
            int rec,a,x,y,option;
            char parkname[30];
            char filenames[30];
            char fname[30]="e:\\";
            char pathname[30]="e:\\";
            disp:
            system("cls");
            printf("\n\n\t\t\t\t\t*******************************************************************************\n");
            printf("\t\t\t\t\t**                         !!Update Park Information Module!!               **\n");
            printf("\t\t\t\t\t*******************************************************************************\n");
            fp=fopen("e:\\addedfiles.dat","rb");
            if(fp==NULL)
            {
               printf("\a");
               printf("\n\n\t\t\t\t\t Doesn't have enough files to update. Add some files! ");
               getch();
               database();
            }
            printf("\n\t\t\t\t\tAdded Files are: ");
            x=fread(&n1,sizeof(n1),1,fp);
            while(x!=0)
            {
               printf("%s\n\n\t\t\t\t\t\t\t ",n1.filenames);
               x=fread(&n1,sizeof(n1),1,fp);
            }
            fclose(fp);
            printf("\n\t\t\t\t\tEnter the name of the file you want to update: ");
            fflush(stdin);
            gets(filenames);
            strcpy(pathname,fname);
            strcat(filenames,".dat");
            strcat(pathname,filenames);
            fp1=fopen(pathname,"rb+");
            if(fp1==NULL)
            {
                printf("\a");
                printf("\n\t\t\t\t\t\t\t\t Cannot open file! Unable to update. ");
                getch();
                goto disp;
            }
             y=fread(&p1,sizeof(p1),1,fp1);
               while(y!=0)
               {
                 system("cls");
                 printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                 printf("\t\t\t\t\t**                         !!Update Park Information Module!!               **\n");
                 printf("\t\t\t\t\t*******************************************************************************\n");
                 printf("\n\n\t\t\t\t\t\t\t\t    %s",p1.pname);
                 printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
                 printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
                 printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
                 printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
                 printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
                 printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
                 y=fread(&p1,sizeof(p1),1,fp1);
               }
             printf("\n\n\t\t\t\t\tEnter the park name to update: ");
             fflush(stdin);
             gets(parkname);
             rewind(fp1);
             rec=fread(&p1,sizeof(p1),1,fp1);
             while(rec!=0)
            {
                int a;
                if(strcmp(p1.pname,parkname)==0)
              {
                  system("cls");
                  printf("\n\n\t\t\t\t\t*******************************************************************************\n");
                  printf("\t\t\t\t\t**                         !!Update Park Information Module!!               **\n");
                  printf("\t\t\t\t\t*******************************************************************************\n");
                  printf("\n\t\t\t\t\tEnter Park Name: ");
                  fflush(stdin);
                  gets(p1.pname);
                  printf("\n\t\t\t\t\tEnter Location: ");
                  fflush(stdin);
                  gets(p1.loc);
                  printf("\n\t\t\t\t\tEnter Area: ");
                  fflush(stdin);
                  gets(p1.area);
                  printf("\n\t\t\t\t\tEnter Nearest City: ");
                  fflush(stdin);
                  gets(p1.nearestcity);
                  printf("\n\t\t\t\t\tEnter Governing Body: ");
                  fflush(stdin);
                  gets(p1.gbody);
                  printf("\n\t\t\t\t\tEnter Nearest Airport: ");
                  fflush(stdin);
                  gets(p1.airport);
                  printf("\n\t\t\t\t\tEnter Famous for: ");
                  fflush(stdin);
                  gets(p1.famousfor);
                  fseek(fp1,-sizeof(p1),SEEK_CUR);
                  a=fwrite(&p1,sizeof(p1),1,fp1);
                  fclose(fp1);
                  if(a==1)
                  {
                    printf("\n\t\t\t\t\t\t\t\t The park record has been updated successfully! ");
                  }
                  else
                  {
                    printf("\a");
                    printf("\n\t\t\t\t\t\t\t\t\t Failed to update! " );
                  }
                  Sleep(4000);
                  break;
            }
              else
                {
                  printf("\a");
                  printf("\n\t\t\t\t\t\t\t\t You entered the wrong park name! ");
                  getch();
                  goto disp;
                }
        }
        printf("\n\n\n\t\t\t\t\t 1. Continue. ");
        printf("\n\n\t\t\t\t\t 2. Exit. ");
        fflush(stdin);
        printf("\n\n\t\t\t\t\tEnter the option you need to carry: ");
        scanf("%d",&option);
        system("cls");
        if(option==1)
        {
           system("cls");
           goto disp;
        }
        else if(option==2)
        {
            system("cls");
            database();
        }
        else
        {
            printf("\a");
            printf("\n\t\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 and 2]. ////////////////////// ");
            Sleep(1000);
            updatepark();
        }
    }
            void deletepark()
        {
            FILE *fp,*fp1,*ft;
            struct park p1;
            struct name n1;
            int rec,x,i,option;
            char ans;
            char filenames[30],name[30];
            char fname[30]="e:\\";
            char pathname[30]="e:\\";
            disp:
            system("cls");
            printf("\n\n\t\t\t\t\t*******************************************************************************\n");
            printf("\t\t\t\t\t**                         !!Delete Park Information Module!!               **\n");
            printf("\t\t\t\t\t*******************************************************************************\n");
            fp=fopen("e:\\addedfiles.dat","rb+");
            if(fp==NULL)
            {
               printf("\a");
               printf("\n\n\t\t\t\t\t Doesn't have enough files to delete. Add some files! ");
               getch();
               database();
            }
            printf("\n\t\t\t\t\t Added Files are: ");
            x=fread(&n1,sizeof(n1),1,fp);
            while(x!=0)
            {
               printf("%s\n\n\t\t\t\t\t\t\t  ",n1.filenames);
               x=fread(&n1,sizeof(n1),1,fp);
            }
            printf("\n\t\t\t\t\t Enter the name of file you want to delete: ");
            fflush(stdin);
            gets(filenames);
            strcpy(pathname,fname);
            strcpy(name,filenames);
            strcat(filenames,".dat");
            strcat(pathname,filenames);
            fp1=fopen(pathname,"rb+");
            if(fp1==NULL)
            {
                printf("\a");
                printf("\n\t\t\t\t\t\t\t\t Cannot open file! Unable to Delete.");
                getch();
                exit(0);
            }
            rec=fread(&p1,sizeof(p1),1,fp1);
            while(rec!=0)
            {
              system("cls");
              printf("\n\n\t\t\t\t\t*******************************************************************************\n");
              printf("\t\t\t\t\t**                         !!Delete Park Information Module!!               **\n");
              printf("\t\t\t\t\t*******************************************************************************\n");
              printf("\n\n\t\t\t\t\t\t\t\t    %s:",p1.pname);
              printf("\n\n\t\t\t\t\t\t\t Location: %s",p1.loc);
              printf("\n\n\t\t\t\t\t\t\t Area: %s",p1.area);
              printf("\n\n\t\t\t\t\t\t\t Nearest City: %s",p1.nearestcity);
              printf("\n\n\t\t\t\t\t\t\t Governing Body: %s",p1.gbody);
              printf("\n\n\t\t\t\t\t\t\t Nearest Airport: %s",p1.airport);
              printf("\n\n\t\t\t\t\t\t\t Famous For: %s",p1.famousfor);
              rec=fread(&p1,sizeof(p1),1,fp1);
            }
            fclose(fp1);
            printf("\n\n\t\t\t\t\t Do you want to delete this file (Y/N): ");
            fflush(stdin);
            scanf("%c",&ans);
            if(ans=='y'||ans=='Y')
            {
                ft=fopen("e:\\Temp.dat","wb");
                rewind(fp);
                rec=fread(&n1,sizeof(n1),1,fp);
                  while(rec!=0)
                {
                    if(strcmp(name,n1.filenames)==0)
                    {
                         rec=fread(&n1,sizeof(n1),1,fp);
                         continue;
                    }
                    fwrite(&n1,sizeof(n1),1,ft);
                    rec=fread(&n1,sizeof(n1),1,fp);
                }
                fclose(fp);
                fclose(ft);
                remove(pathname);
                remove("e:\\addedfiles.dat");
                rename("e:\\temp.dat","e:\\addedfiles.dat");
                printf("\n\n\t\t\t\t\t\t\t\t File Deleted Successfully! ");
                Sleep(2000);
            }
            else
            {
                Sleep(2000);
                database();
            }
        printf("\n\n\n\t\t\t\t\t 1. Continue. ");
        printf("\n\n\t\t\t\t\t 2. Exit. ");
        fflush(stdin);
        printf("\n\n\t\t\t\t\tEnter the option you need to carry: ");
        scanf("%d",&option);
        system("cls");
        if(option==1)
        {
           system("cls");
           goto disp;
        }
        else if(option==2)
        {
            system("cls");
            database();
        }
        else
        {
            printf("\a");
            printf("\n\t\t\t\t\t\t ////////////////////// Invalid choice. Valid choices are [1 and 2]. ////////////////////// ");
            Sleep(1000);
            deletepark();
        }
    }
        int exitprogram()
        {
            printf("\n\t\t\t\t\t\t  The program can be closed by passing enter in 5 seconds ");
            printf("\n\t\t\t\t\t\t  ******** Ending Jungle Safari ********   ");
            Sleep(5000);
            exit(1);
            return 0;
        }
