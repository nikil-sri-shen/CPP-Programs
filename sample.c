#include<stdio.h>
#include<stdlib.h>
struct book
{
 int no_ofpages;
 char bookname[20];
 char authorname[20];
 int bookid;
}bk,dest,bk1[10],dest1[10];
typedef struct book BOOK;
int main()
{
 FILE *fp1;
 fp1=fopen("File1.txt","w");
 int n,k,i,a;
 printf("1.Get the details of one book and print using binary files.");
 printf("2.Get the details of n book as input and search for a book.");
 printf("3.Enter any other number for exit.");
 scanf("%d",&n);
 switch(n)
 {
  /*case 1:
   printf("Enter the No.of pages.");
   scanf("%d",&bk.no_ofpages);
   printf("Enter the name of the book.");
   scanf("%s",bk.bookname);
   printf("Enter the name of the author.");
   scanf("%s",bk.authorname);
   printf("Enter the book id.");
   scanf("%d",&bk.bookid);
   fwrite(bk,sizeof(BOOK),1,fp1);
   fread(dest,sizeof(BOOK),1,fp1);
   printf("No.ofpages\tBookname\tAuthorname\tBookid\n");
   printf("%d\t%s\t%s\t%d",bk.no_ofpages,bk.bookname,bk.authorname,bk.bookid);
   fclose(fp1);
   break;*/
  case 2:
   printf("Enter the number of books.");
   scanf("%d",&k);
   for(i=1;i<=k;i++)
   {
    printf("Enter the no.ofpages,book name,author name and book if for book no.%d",i);
    printf("Enter the No.of pages.");
    scanf("%d",&bk1[i].no_ofpages);
    printf("Enter the name of the book.");
    scanf("%s",bk1[i].bookname);
    printf("Enter the name of the author.");
    scanf("%s",bk1[i].authorname);
	printf("Enter the book id.");
	scanf("%d",bk1[i].bookid);
    }
   printf("Enter the bookid which is to be searched:%d",&a);
   fwrite(bk1,sizeof(BOOK),k,fp1);
   fread(dest1,sizeof(BOOK),k,fp1);
   for(i=0;i<k;i++)
   {
    if(dest1[i].bookid==a)
    {
	  printf("No_ofpages\tBook name\tAuthor name\n");
	  printf("%d\t%s\t%s",dest1[i].no_ofpages,dest1[i].bookname,dest1[i].authorname);
	  exit(0);
	}
   }
   printf("The Book is not present.");
   fclose(fp1);
   break;
 }
 return 0;
}

