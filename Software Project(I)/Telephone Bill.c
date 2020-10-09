#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<process.h>
#define LEN 20

int r,q;
void gotoxy(int x,int y){
        COORD coord;
        coord.X=x;
        coord.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int custNameValidation(char *str)//Customer-Name validation
{

    int j;
    for(j=0; j<strlen(str); j++ )
    {
        if(!((str[j]>=65 && str[j]<=90)||(str[j]>96 && str[j]<123)||str[j]==46||str[j]==45)||strlen(str)>8 )
        {
            //printf(" Error !!!\n");
            break;
        }


    }
    if(j==strlen(str))
        return 1;
    else return 0;


}

int customerAddValidation(char *str)//Customer-address validation
{

    int j;
    for(j=0; j<strlen(str); j++ )
    {
        //if(!((str[j]>=65 && str[j]<=90)||(str[j]>96 && str[j]<123)||str[j]==46||str[j]==45)||strlen(str)>8 )
        //if(!((str[j]>=65 && str[j]<=90)||(str[j]>96 && str[j]<123)||str[j]==46||str[j]==45)||strlen(str)>10 )
          if(!((str[j]>=65 && str[j]<=90)||(str[j]>=48 && str[j]<=57)||(str[j]>96 && str[j]<123)||(str[j]>=44 && str[j]<=47)||str[j]==35||str[j]==59)||strlen(str)>10)
        {
            //printf(" Error !!!\n");
            break;
        }


    }
    if(j==strlen(str))
        return 1;
    else return 0;


}
///////

int telNumberValidation(char *str)//Telephone Number Validation
{
    int j;
    for(j=0; j<strlen(str); j++)
    {
        if(!((str[j]>=48 && str[j]<=57)||str[j]==43)||strlen(str)!=8 )
        {
            break;
        }

    }
    if(j==strlen(str))
        return 1;
    else return 0;
}

int callMinuteValidation(char *str)// Minute validation
{
    int j;
    for(j=0; j<strlen(str); j++)
    {
        if(!((str[j]>=48 && str[j]<=57)||str[j]==46)||strlen(str)>5 )
        {
            break;
        }

    }
    if(j==strlen(str))
        return 1;
    else return 0;
}
///
int customerNumValidation(char *str)//Customer Number Validation
{
    int j;
    for(j=0; j<strlen(str); j++)
    {
        if(!(str[j]>=48 && str[j]<=57)||strlen(str)>6 )
        {
            break;
        }

    }
    if(j==strlen(str))
        return 1;
    else return 0;
}


///
int main()
{
    char pass[LEN];
    char ch=0;
    int i=0,ck=0,flag=1,month_num;

    float pwd;
    char A[100]="rishad",B[100],strMonth[100],minStr[100];
    char custname1[20],custname2[20],custname3[20],
         address1[20], address2[20],address3[20];
    char telnumber[15],date[15],month[20];
    char customernum[15];
    float minlocal,minnwd,minisd,tlocal,tnwd,tisd,stotal,gtotal,vat;
    float monthlyrent=100.00,ratelocal=1.50,ratenwd=3.50,rateisd=6.0;
    time_t now ;
    struct tm *info;
    char buffer[80];
    time(&now);
    info = localtime( &now );

    strftime(buffer,80,"%x", info);
    printf("\n\tExecuting Time \t\t\t: %s",ctime(&now));
    /*MY CSE PROJECT<MONTASIR..17102033.DATE of COMPLETION: 13/10/17-16/03/18.[FRIDAY].
    Last Update : 30-MARCH-2018.[FRIDAY].
    Submission TO: KAZI MAHMUDUL HASAN MUNNA sir.
    //INDRANI MANDAL mam*/


    printf("\n\n\tEnter USER_NAME\t\t\t:\a ");
    scanf("%s",&B);
    if(strcmpi(A,B)==0)
    {
        printf("\n\a\t^^^^^^^^^^^Welcome Mr. Montasir Amin Rishad^^^^^^^^^^^\a\n");
        while(i<LEN) pass[i++]='\0';
        printf("\n\n\tPASSWORD\t\t        :\a  \t");
        ch=getch();
        i=0;
        while((ch!='\r'))
        {
            if(ch!='\b')
            {
                pass[i++]=ch;
                putch('*');
            }
            else
            {
                if(i>0)
                {
                    pass[--i]='\0';
                    putch(ch);
                    putch(' ');
                    putch(ch);
                }
            }
            ch=getch();
        }
        if(strcmp(pass,"1234")==0)
        {
//scanf("%f",&pwd);
//if(pwd==1234){
            printf("\n\n\t^^^^^^^^^^^CONGRATULATIONS.PASSWORD IS CORRECT^^^^^^^^^^^\n\a\a\a");
            printf("\n\t\t(-_-)  YOU ARE WELCOME__FILL UP THE DIRECTORY BELOW  (-_-)\n\n\n\a\a\a");
            system("pause");
            system("cls");
            while(1)
            {
               flag=1;
                while(flag)
                {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tEnter Customer No: ");
                scanf("%s",customernum);
                    ck=customerNumValidation(customernum);
                    if(ck)
                    {
                        break;
                    }
                    else
                        printf("Error!\n");
                }



                system("cls");
                flag=1;
                while(flag)
                {
                    printf("Full name of the CUSTOMER (%s) :\a ");
                    scanf("%s%s%s",&custname1,&custname2,&custname3);
                    ck=custNameValidation(custname1);
                    if(ck)
                    {
                        ck=custNameValidation(custname2);
                        if(ck)
                        {
                            ck=custNameValidation(custname3);
                            if(ck)
                            {
                                flag=0;
                            }
                            else
                                printf("Error!\n");
                        }
                        else
                            printf("Error!\n");
                    }
                    else
                        printf("Error!\n");
                }
                printf("Date of Bill\t\t      :\a ");
                printf("%s\n", buffer );
//printf("\t : %s",ctime(&now));
//scanf("%s",&date);
                flag=1;
                while(flag)
                {

                printf("Address\t\t\t      :\a ");
                scanf("%s%s%s",&address1,&address2,address3);
                ck=customerAddValidation(address1);
                    if(ck)
                    {
                        ck=customerAddValidation(address2);
                        if(ck)
                        {
                            ck=customerAddValidation(address3);
                            if(ck)
                            {
                                flag=0;
                            }
                            else
                                printf("Error!\n");
                        }
                        else
                            printf("Error!\n");
                    }
                    else
                        printf("Error!\n");
                }

                /////

                flag=1;
                while(flag)
                {
                    printf("Telephone number(last 8 dig)  :+88044\a");
                    scanf("%s",telnumber);
                    ck=telNumberValidation(telnumber);
                    if(ck)
                    {
                        break;
                    }
                    else
                        printf("Error!\n");
                }


                flag =1;
                while(flag)
                {
                    printf("MONTH (press :1-12)\t      :\a ");
                    scanf("%s",&strMonth);

                    flag=0;
                    if((strcmp(strMonth,"1")==0))
                        printf("\tJanuary.\n");
                    else if((strcmp(strMonth,"2")==0))
                        printf("\tFEBRUARY.\n");
                    else if((strcmp(strMonth,"3")==0))
                        printf("\tMARCH.\n");
                    else if((strcmp(strMonth,"4")==0))
                        printf("\tAPRIL.\n");
                    else if((strcmp(strMonth,"5")==0))
                        printf("\tMAY.\n");
                    else if((strcmp(strMonth,"6")==0))
                        printf("\tJUNE.\n");
                    else if((strcmp(strMonth,"7")==0))
                        printf("\tJULY.\n");
                    else if((strcmp(strMonth,"8")==0))
                        printf("\tAUGUST.\n");
                    else if((strcmp(strMonth,"9")==0))
                        printf("\tSEPTEMBER.\n");
                    else if((strcmp(strMonth,"10")==0))
                        printf("\tOCTOBER.\n");
                    else if((strcmp(strMonth,"11")==0))
                        printf("\tNOVEMBER.\n");
                    else if((strcmp(strMonth,"12")==0))
                        printf("\tDECEMBER.\n");
                    else
                    {
                        flag=1;
                        printf("Error!\n");
                    }

                }
                printf("\n");


                flag=1;
                while(flag)
                {
                    printf("Minutes in LOCAL call\t      :\a ");
                    scanf("%s",&minStr);
                    ck=callMinuteValidation(minStr);
                    if(ck)
                    {
                        minlocal=(float)atof(minStr);
                        break;
                    }
                    else
                        printf("Error!\n");
                }

                flag=1;
                while(flag)
                {
                    printf("Minutes in NWD call  \t      :\a ");
                    scanf("%s",&minStr);
                    ck=callMinuteValidation(minStr);
                    if(ck)
                    {
                        minnwd=(float)atof(minStr);
                        break;
                    }
                    else
                        printf("Error!\n");
                }

                 flag=1;
                while(flag)
                {
                    printf("Minutes in ISD call  \t      :\a ");
                    scanf("%s",&minStr);
                    ck=callMinuteValidation(minStr);
                    if(ck)
                    {
                        minisd=(float)atof(minStr);
                        break;
                    }
                    else
                        printf("Error!\n");
                }
                tlocal=minlocal*ratelocal;
                tnwd=minnwd*ratenwd;
                tisd=minisd*rateisd;

                stotal=tlocal+tnwd+tisd+monthlyrent;
                vat=stotal*0.30;
                gtotal=stotal+vat;

                //int r,q;
gotoxy(32,36);
printf("Loading.....");
gotoxy(32,38);
for(r=1;r<=20;r++)
{
    for(q=0;q<=10000000;q++);{
    printf("%c",177);
    printf("%c",177);

    }
}
                system("cls");
                printf("\n\n\n\n*************************TELEPHONE BILL*************************\n\n\n");
//printf("\n\n\n\t\t\t*****TELEPHONE BILL*****\n\n\n");
                //printf("\t\t\tFor the month : %dth",(month_num));
                printf("\t\t\tFor the month : %sth",(strMonth));
                //strMonth[100]
                printf("\n.............................................................\n");

                printf("Name   : %s %s %s",custname1,custname2,custname3);
//printf("%s\n", buffer );

                printf("\t\t\tDate     : %s",buffer);
                printf("\nAddress: %s %s %s",address1,address2,address3);
                //printf("\t\t\tDate     : %s",buffer);
                //printf("\nAddress: %s %s %s",address1,address2,address3);

                printf("\t\t\tTelephone: +8809%s",telnumber);
                printf("\n\n\nType\t\tMINUTE\t\tRate\t\tTotal TK");
                printf("\n\n........................................................");
                printf("\nLocal");
                printf("\t\t%0.1f",minlocal);
                printf("\t\t%0.1f",ratelocal);
                printf("\t\t%0.1f",tlocal);
                printf("\nNWD");
                printf("\t\t%0.1f",minnwd);
                printf("\t\t%0.1f",ratenwd);
                printf("\t\t%0.1f",tnwd);
                printf("\nForeign");
                printf("\t\t%0.1f",minisd);
                printf("\t\t%0.1f",rateisd);
                printf("\t\t%0.1f",tisd);
                printf("\nMonthly Rent\t\t\t100.00");
                printf("\nVAT\t\t\t\t%0.2f",vat);
                printf("\n........................................................\n");
                printf("Grand Total: \t\t\t\t  In TK:%0.2f\n\n\n\a\a\a",gtotal);
                system("pause");
                system("cls");


            }
        }
        else
        {
            printf("\n\t\tError..PASSWORD");
            main();
        }
    }
    else
    {
        printf("\n\t\tError..USER_NAME");
        main();
    }
    getch();
    return 0;
}





