//program to count vowels in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100];
 int len,i,vow=0;
 clrscr();
 printf("\nENTER A STRING\n");
 gets(a);
 len=strlen(a);
 for(i=0;i<len;i++)
 {
  if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
  vow=vow+1;
 }
 printf("\nTHERE ARE %d VOWELS IN THE STRING",vow);
getche();
}
/*OUTPUT
ENTER A STRING
INDIA

THERE ARE 3 VOWELS IN THE STRING
*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
