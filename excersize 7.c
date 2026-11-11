#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50],str3[100];
	int res;
	printf("enter the first string:");
	scanf("%s",str1);
	printf("enter the secound string:");
	scanf("%s",str2);
	res=strlen (str1);
	printf("\n length of first string=%d",res);
	strcpy(str3,str1);
	printf("\n copied string=%s",str3);
	res=strcmp (str1,str2);
	if(res==0)
	  printf("\n Both strings are  equal");
	else;
	 printf("\n Both strings are not equal");
	 strcat(str1,str2);
	 printf("\n concatenated string=%s",str3);
	 return 0;
}