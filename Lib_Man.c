//admin pass -> admin
//user pass -> user
#include<stdio.h>
void password();
void main_menu();
void add_books();
void return_books();
void delete_books();
void search_books();
void issue_books();
void borrow_books();
void issue_books_list();
void borrow_books_list();
void view_books_list();
void edit_books_record();
void log_out();
long long int cnt_id[1000];
struct library
{
    int book_id;
    char category[30];
    char book_name[30];
    char author_name[30];
    int quantity;
    struct library *next;
}*head,*newnode,*current,*prev;
struct issue
{
    char student_name[20];
    int book__id;
    int student_roll;
    char book__name[20];
    char issue_date[20];
    char return_date[20];
    struct issue *next;
}*headd,*currentt,*newnodee;
struct borrow
{
    char student__name[20];
    int book___id;
    int student__roll;
    char book___name[20];
    char borrow_date[20];
    char return__date[20];
    struct borrow *next;
}*hhead,*ccurrent,*nnewnode,*prevv;
int add;
int user;
int iss;
int brr;
void main_menu()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    1.  Add Books          ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    2.  Delete Books       ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    3.  Search Books       ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    4.  Issue Books        ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    5.  Issue Books List   ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    6.  View Book list     ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    7.  Borrow Book        ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    8.  Borrow Books list  ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    9.  Return Book        ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    10. Edit Book's Record ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2    11. Log Out  \n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
           case 1:
               add_books();
               break;
           case 2:
               delete_books();
               break;
           case 3:
               search_books();
               break;
           case 4:
               issue_books();
               break;
           case 5:
               issue_books_list();
               break;
           case 6:
               view_books_list();
               break;
           case 7:
               borrow_books();
               break;
           case 8:
               borrow_books_list();
               break;
           case 9:
               return_book();
               break;
           case 10:
               edit_books_record();
               break;
           case 11:
               log_out();
               break;
           default:
               {
                    printf("\n\t\t\t\t\t\t\tYour Choice is Wrong\n\n\t\t\t\t\t\t\tTry Egain.....");
                    fflush(stdin);
                    getchar();
                    main_menu();
               }
    }
}
void borrow_books()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tEnter ID Number of The Book : ");
    int x;
    scanf("%d",&x);
    if(cnt_id[x]==0)
    {
       printf("\n\t\t\t\t\t\t\t\t!!..This Book is Not Available..!!");
       printf("\n\n\t\t\t\t\t\t\t\tPress Enter to Continue...");
       fflush(stdin);
       getchar();
       main_menu();
    }
    current=head;
    while(current!=NULL)
    {
       if(current->book_id==x)
       {
           if(current->quantity)
           {
               current->quantity--;
           }
           else
           {
               printf("\n\t\t\t\t\t\t\t\t!!..This Book is Not Available..!!");
               printf("\n\n\t\t\t\t\t\t\t\tPress Enter to Continue...");
               fflush(stdin);
               getchar();
               main_menu();
           }
       }
       current=current->next;
    }
    if(brr==0)
    {
        printf("\n\t\t\t\t\t\t\t\tEnter your details : ");
        hhead=(struct borrow*)malloc(sizeof(struct borrow));
        printf("\n\n\t\t\t\t\t\t\t\tEnter Your Name : ");
        getchar();
        scanf("%s",&hhead->student__name);
        printf("\n\t\t\t\t\t\t\t\tEnter Your Roll : ");
        scanf("%d",&hhead->student__roll);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Id : ");
        scanf("%d",&hhead->book___id);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Name : ");
        getchar();
        scanf("%s",&hhead->book___name);
        printf("\n\t\t\t\t\t\t\t\tEnter Borrow Date : ");
        getchar();
        scanf("%s",&hhead->borrow_date);
        printf("\n\t\t\t\t\t\t\t\tEnter Return Date : ");
        getchar();
        scanf("%s",&hhead->return__date);
        hhead->next=NULL;
        ccurrent=hhead;
        brr++;
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\tEnter your details : ");
        nnewnode=(struct borrow*)malloc(sizeof(struct borrow));
        printf("\n\t\t\t\t\t\t\t\tEnter Your Name : ");
        getchar();
        scanf("%s",&nnewnode->student__name);
        printf("\n\t\t\t\t\t\t\t\tEnter Your Roll : ");
        scanf("%d",&nnewnode->student__roll);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Id : ");
        scanf("%d",&nnewnode->book___id);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Name : ");
        getchar();
        scanf("%s",&nnewnode->book___name);
        printf("\n\t\t\t\t\t\t\t\tEnter Borrow Date : ");
        getchar();
        scanf("%s",&nnewnode->borrow_date);
        printf("\n\t\t\t\t\t\t\t\tEnter Return Date : ");
        getchar();
        scanf("%s",&nnewnode->return__date);
        nnewnode->next=NULL;
        ccurrent->next=nnewnode;
        ccurrent=nnewnode;
    }
    main_menu();
}
void borrow_books_list()
{
    system("cls");
    ccurrent=hhead;
    printf("\n\n\t\t\t\t\t\t\t\t\t\t..Borrowed Books List..\n");
    printf("\n\n\t\t\t\t\t\tSTUDENT-NAME\t\tROLL\t\tBOOK-NAME  \tBORROW-DATE  \t\tRETURN-DATE\n");
    while(ccurrent!=NULL)
    {
            printf("\n\t\t\t\t\t\t%s",ccurrent->student__name);
            printf("\t\t\t");
            printf(" %d",ccurrent->student__roll);
            printf("\t\t");
            printf("  %s",ccurrent->book___name);
            printf("\t\t");
            printf("    ");
            printf("%s",ccurrent->borrow_date);
            printf("\t\t");
            printf("   ");
            printf("%s",ccurrent->return__date);
            ccurrent=ccurrent->next;
    }
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();
}
void issue_books_list()
{
    if(user)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t!!..Sorry!This Feature is Only For Admins..!!");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
        fflush(stdin);
        getchar();
        main_menu();
    }
    system("cls");
    currentt=headd;
    printf("\n\t\t\t\t\t\t\t\t\t...Issue Books List...\n");
    printf("\n\t\t\t\t\t\t\tSTUDENT-NAME\tROLL\tBOOK-NAME\tISSUE-DATE\n");
    while(currentt!=NULL)
    {
            printf("\n\t\t\t\t\t\t\t %s",currentt->student_name);
            printf("\t\t");
            printf("%d",currentt->student_roll);
            printf("\t");
            printf("%s",currentt->book__name);
            printf("\t\t");
            printf("%s ",currentt->issue_date);
            currentt=currentt->next;
    }
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();
}
void return_book()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tEnter ID Number of The Book : ");
    int x;
    scanf("%d",&x);
    if(cnt_id[x]==0)
    {
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t!!..Wrong Id..!!");
       printf("\n\n\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
       fflush(stdin);
       getchar();
       main_menu();
    }
    current=head;
    while(current!=NULL)
    {
       if(current->book_id==x)
       {
           current->quantity++;
       }
       current=current->next;
    }
    ccurrent=hhead;
    if(hhead->book___id==x)
    {
        free(hhead);
        hhead=ccurrent->next;
    }
    else{
      while(ccurrent!=NULL)
      {
        if(ccurrent->book___id==x)
        {
           if(ccurrent->next==NULL)
           {
              free(ccurrent);
              prevv->next=NULL;
              break;
           }
           prevv->next=ccurrent->next;
           free(ccurrent);
           break;
        }
        prevv=ccurrent;
        ccurrent=ccurrent->next;
      }
    }
    printf("\n\n\t\t\t\t\t\t\t\t\t[[ Book Returned Successfully ]]");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();
}
void issue_books()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tEnter ID Number of The Book : ");
    int x;
    scanf("%d",&x);
    if(cnt_id[x]==0)
    {
       printf("\n\t\t\t\t\t\t\t\t!!This Book is Not Available!!");
       printf("\n\n\t\t\t\t\t\t\t\tPress Enter to Continue...");
       fflush(stdin);
       getchar();
       issue_books();
    }
    current=head;
    while(current!=NULL)
    {
       if(current->book_id==x)
       {
            current->quantity--;
       }
       current=current->next;
    }
    if(iss==0)
    {
        printf("\n\t\t\t\t\t\t\t\tEnter your details -> ");
        headd=(struct issue*)malloc(sizeof(struct issue));
        printf("\n\n\t\t\t\t\t\t\t\tEnter Your Name : ");
        getchar();
        scanf("%s",&headd->student_name);
        printf("\n\t\t\t\t\t\t\t\tEnter Your Roll : ");
        scanf("%d",&headd->student_roll);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Name : ");
        getchar();
        scanf("%s",&headd->book__name);
        printf("\n\t\t\t\t\t\t\t\tEnter Issue Date : ");
        getchar();
        scanf("%s",&headd->issue_date);
        headd->next=NULL;
        currentt=headd;
        iss++;
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\tEnter your details -> ");
        newnodee=(struct issue*)malloc(sizeof(struct issue));
        printf("\n\t\t\t\t\t\t\t\tEnter Your Name : ");
        getchar();
        scanf("%s",&newnodee->student_name);
        printf("\n\t\t\t\t\t\t\t\tEnter Your Roll : ");
        scanf("%d",&newnodee->student_roll);
        printf("\n\t\t\t\t\t\t\t\tEnter Book Name : ");
        getchar();
        scanf("%s",&newnodee->book__name);
        printf("\n\t\t\t\t\t\t\t\tEnter Issue Date : ");
        getchar();
        scanf("%s",&newnodee->issue_date);
        printf("\n\t\t\t\t\t\t\t\tEnter Return Date : ");
        getchar();
        scanf("%s",&newnodee->return_date);
        newnodee->next=NULL;
        currentt->next=newnodee;
        currentt=newnodee;
    }
    main_menu();

}
void delete_books()
{
    system("cls");
    if(user)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t!!..Sorry!This Feature is Only For Admins..!!");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
        fflush(stdin);
        getchar();
        main_menu();
    }
    printf("\n\t\t\t\t\t\t\t\tEnter ID Number of The Book : ");
    int x;
    scanf("%d",&x);
    if(cnt_id[x]==0)
    {
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t!!..Wrong Id..!!");
       printf("\n\n\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
       fflush(stdin);
       getchar();
       main_menu();
    }
    current=head;
    if(head->book_id==x)
    {
        cnt_id[head->book_id]=0;
        free(head);
        head=current->next;
    }
    else{
      while(current!=NULL)
      {
        if(current->book_id==x)
        {
           if(current->next==NULL)
           {
              cnt_id[current->book_id]=0;
              free(current);
              prev->next=NULL;
              break;
           }
           cnt_id[current->book_id]=0;
           prev->next=current->next;
           free(current);
           break;
        }
        prev=current;
        current=current->next;
      }
    }
    printf("\n\n\t\t\t\t\t\t\t\t\t[[ Book Deleted Successfully ]]");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();
}
void view_books_list()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tEnter the book category : ");
    char name[20];
    getchar();
    scanf("%s",name);
    printf("\n\t\t\t\t\t\t\t\t<<< All %s books >>> \n",name);
    current=head;
    printf("\n\t\t\t\tBOOK-ID\t\tBOOK-NAME\t\tAUTHOR-NAME\t\tQUANTITY\n");
    while(current!=NULL)
    {
      if(strcmp(name,current->category)==0)
      {
        printf("\n\t\t\t\t %d",current->book_id);
        printf("\t\t");
        printf("%s",current->book_name);
        printf("\t\t\t");
        printf(" %s",current->author_name);
        printf("\t\t\t");
        printf(" %d ",current->quantity);
        current=current->next;
      }
    }
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();

}
void add_books()
{
    system("cls");
    if(user)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t!!..Sorry!This Feature is Only For Admins..!!");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
        fflush(stdin);
        getchar();
        main_menu();
    }
    if(add==0){
    head=(struct library*)malloc(sizeof(struct library));
    printf("\n\t\t\t\t\t\t\t\tEnter the category : ");
    scanf("%s",&head->category);
    getchar();
    printf("\n\t\t\t\t\t\t\t\tEnter the book name : ");
    scanf("%s",&head->book_name);
    getchar();
    printf("\n\t\t\t\t\t\t\t\tEnter the author name : ");
    scanf("%s",&head->author_name);
    printf("\n\t\t\t\t\t\t\t\tEnter the book id: ");
    scanf("%d",&head->book_id);
    cnt_id[head->book_id]++;
    printf("\n\t\t\t\t\t\t\t\tEnter the book quantity: ");
    scanf("%d",&head->quantity);
    head->next=NULL;
    current=head;
    add++;
    }
    else{
        system("cls");
        newnode=(struct library*)malloc(sizeof(struct library));
        printf("\n\t\t\t\t\t\t\t\tEnter the category : ");
        getchar();
        scanf("%s",&newnode->category);
        printf("\n\t\t\t\t\t\t\t\tEnter the book name : ");
        getchar();
        scanf("%s",&newnode->book_name);
        printf("\n\t\t\t\t\t\t\t\tEnter the author name : ");
        getchar();
        scanf("%s",&newnode->author_name);
        printf("\n\t\t\t\t\t\t\t\tEnter the book id: ");
        k:scanf("%d",&newnode->book_id);
        if(cnt_id[newnode->book_id])
        {
           printf("\n\t\t\t\t\t\t\t\t!!..There is Already a Book With This Id..!!");
           printf("\n\n\t\t\t\t\t\t\t\tTry Something New : ");
           goto k;
        }
        cnt_id[newnode->book_id]++;
        printf("\n\t\t\t\t\t\t\t\tEnter the book quantity: ");
        scanf("%d",&newnode->quantity);
        newnode->next=NULL;
        current->next=newnode;
        current=newnode;
    }
    int ch;
    printf("\n\n\t\t\t\t\t\t\tWant to add more book's(1/0) : ");
    scanf("%d",&ch);
    if(ch==1)add_books();
    main_menu();

}
int main()
{
    password();
}
void search_books()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t[[[ Which book record you want to see ]]]");
    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter Book Name : ");
    char ch[20];
    getchar();
    scanf("%s",ch);
    printf("\n\t\t\t\t\t\t\t\t\t\t<<< Search Result >>>\n");
    current=head;
    printf("\n\t\t\t\t\t\t\tBOOK-ID\t\tBOOK-NAME\t\tAUTHOR-NAME\t\tQUANTITY\n");
    while(current!=NULL)
    {
        if(strcmp(current->book_name,ch)==0)
        {
            printf("\n\t\t\t\t\t\t\t  %d",current->book_id);
            printf("\t\t");
            printf(" %s",current->book_name);
            printf("\t\t\t");
            printf("%s",current->author_name);
            printf("\t\t\t");
            printf(" %d",current->quantity);
        }
        current=current->next;
    }
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue....");
    fflush(stdin);
    getchar();
    main_menu();
}
void log_out()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\tLogging Out");
    for(int i=1;i<=1e9;i++){}
    printf(" .");
    for(int i=1;i<=1e9;i++){}
    printf(" .");
    for(int i=1;i<=1e9;i++){}
    printf(" .");
    for(int i=1;i<=1e9;i++){}
    printf(" .");
    for(int i=1;i<=1e9;i++){}
    user=0;
    password();

}
char pass2[8];
char pass3[]="user";
void password()
{
    system("cls");
    printf("\n\n");
    printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
    printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
    printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
    printf("\t\t\t\t**********                          ##            ##############  ########      #######              ##         #######      ##       ##                                    **********\n");
    printf("\t\t\t\t**********                          ##                  ##        ##      ##    ##     ##           ####        ##     ##     ##     ##                                     **********\n");
    printf("\t\t\t\t**********                          ##                  ##        ##       ##   ##      ##         ##  ##       ##      ##     ##   ##                                      **********\n");
    printf("\t\t\t\t**********                          ##                  ##        ##      ##    ##     ##         ##    ##      ##     ##       ## ##                                       **********\n");
    printf("\t\t\t\t**********                          ##                  ##        ##  ####      #######          ##      ##     #######          ###                                        **********\n");
    printf("\t\t\t\t**********                          ##                  ##        ##      ##    ##    ##        ############    ##    ##         ###                                        **********\n");
    printf("\t\t\t\t**********                          ##        ##        ##        ##       ##   ##     ##      ##          ##   ##     ##        ###                                        **********\n");
    printf("\t\t\t\t**********                          ##        ##        ##        ##      ##    ##      ##    ##            ##  ##      ##       ###                                        **********\n");
    printf("\t\t\t\t**********                          ############  ##############  ########      ##       ##  ##              ## ##       ##      ###                                        **********\n");
    printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
    printf("\t\t\t\t**********  ####          ####        ##        ####      ##        ##        ##############  #############  ####          ####  #############  ####      ##  ############  **********\n");
    printf("\t\t\t\t**********  ## ##        ## ##       ####       ## ##     ##       ####       ##          ##  ##             ## ##        ## ##  ##             ## ##     ##       ##       **********\n");
    printf("\t\t\t\t**********  ##  ##      ##  ##      ##  ##      ##  ##    ##      ##  ##      ##              ##             ##  ##      ##  ##  ##             ##  ##    ##       ##       **********\n");
    printf("\t\t\t\t**********  ##   ##    ##   ##     ##    ##     ##   ##   ##     ##    ##     ##    ########  ########       ##   ##    ##   ##  #########      ##   ##   ##       ##       **********\n");
    printf("\t\t\t\t**********  ##    ##  ##    ##    ##########    ##    ##  ##    ##########    ##    ##    ##  ##             ##    ##  ##    ##  ##             ##    ##  ##       ##       **********\n");
    printf("\t\t\t\t**********  ##     ####     ##   ##        ##   ##     ## ##   ##        ##   ##    ##    ##  ##             ##     ####     ##  ##             ##     ## ##       ##       **********\n");
    printf("\t\t\t\t**********  ##      ##      ##  ##          ##  ##      ####  ##          ##  ########    ##  #############  ##      ##      ##  #############  ##      ####       ##       **********\n");
    printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
    printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
    printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t   Enter Password : ");
    char pass1[]="admin";
    scanf("%s",&pass2);
    if(strcmp(pass3,pass2)==0)
    user=1;
    if(strcmp(pass1,pass2)==0)
    {
        system("cls");
        printf("\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t  #########################################################\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t        *********************************************");
        printf("\n\t\t\t\t\t\t\t\t\t        *   WELCOME                                 *");
        printf("\n\t\t\t\t\t\t\t\t\t        *            TO                             *");
        printf("\n\t\t\t\t\t\t\t\t\t        *               LIBRARY                     *");
        printf("\n\t\t\t\t\t\t\t\t\t        *                       MANAGEMENT          *");
        printf("\n\t\t\t\t\t\t\t\t\t        *                                   SYSTEM  *");
        printf("\n\t\t\t\t\t\t\t\t\t        *********************************************");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t  #########################################################\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tLogging in");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        main_menu();
    }
    else if(user)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tLogging in");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        printf(" .");
        for(int i=1;i<=1e9;i++){}
        main_menu();
    }
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t  !!..Wrong Password..!!");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t  Press enter to contunue..");
        fflush(stdin);
        getchar();
        password();
    }
}
void edit_books_record()
{
    if(user)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t!!..Sorry!This Feature is Only For Admins..!!");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
        fflush(stdin);
        getchar();
        main_menu();
    }
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t[[ Which book record you want to edit ]]");
    printf("\n\n\t\t\t\t\t\t\t\tEnter the id-number of the book : ");
    int x;
    scanf("%d",&x);
    if(cnt_id[x]==0)
    {
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t!!..Wrong Id..!!");
       printf("\n\n\t\t\t\t\t\t\t\t\t\t\tPress Enter to Continue...");
       fflush(stdin);
       getchar();
       main_menu();
    }
    current=head;
    while(current!=NULL)
    {
        if(current->book_id==x)
        {
            printf("\n\t\t\t\t\t\t\t\tEnter the category : ");
            getchar();
            scanf("%s",&current->category);
            getchar();
            printf("\n\t\t\t\t\t\t\t\tEnter the book name : ");
            scanf("%s",&current->book_name);
            getchar();
            printf("\n\t\t\t\t\t\t\t\tEnter the author name : ");
            scanf("%s",&current->author_name);
            printf("\n\t\t\t\t\t\t\t\tEnter the book quantity : ");
            scanf("%d",&current->quantity);
        }
        current=current->next;
    }
    int ch;
    printf("\n\t\t\t\t\t\t\tWant to edit more book's(1/0) : ");
    scanf("%d",&ch);
    if(ch==1)edit_books_record();
    main_menu();
}






