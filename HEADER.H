#include<iostream.h>
#include<string.h>

int str_cmp(char *s1, char *s2);
void str_rev(char *s)
{
    char temp[500];
    int cnt=0,i;

    for(i=0;*s!='\0';i++)
    {
	temp[i] = *s;
	s++;       //increment in char pointer till the end of string.
	cnt++;      //count the occurrence of loop.
    }
    temp[i] = '\0';     // inserting null char at the end;


    cnt--; // Because cnt=5 for hello(4)
    s--;

    s=s-cnt;     // Bring pointer to default location.

    for(i=cnt;i>=0;i--)
    {
       *s = temp[i];
       s++;
    }

}

void is_palindrome(char *str)
{
    char temp1[400],temp2[400];
    int i=0;
    while(*str!='\0')
    {
	temp2[i] = temp1[i] = *str;
	str++;
	i++;
    }
    temp1[i] = '\0';
    temp2[i] = '\0';

    str_rev(temp1);

     // create strcmp() like function...
    int compare=0;
    compare = str_cmp(temp1,temp2);

    if(compare!=1)
	cout<<"\nString is palindrome.";
    else
	cout<<endl<<"\nnot palindrome.";
}

int str_cmp(char *s1, char *s2)
{

    while(*s2!='\0')
    {
	if((*s1 - *s2)!=0)
	{
		return 1;
	}
 //	cout<<*s2;
	s2++;
	s1++;
    }

}


