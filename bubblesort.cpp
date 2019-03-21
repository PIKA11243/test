#include<stdio.h>
main()
{char s[100][50],temp;
int a,b;
for(a=0;a<3;a++)
fgets(s[a],sizeof(s),stdin);
for(a=0;s[a]!='\0';a++)
{for(b=a+1;s[b]='\0';b++)
if(s[a]>s[b]){

temp=s[a];
s[a]=s[b];
s[b]=s[a];
}}
printf("%s",s);
}
