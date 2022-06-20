#include<bits/stdc++.h>
int main()
{
   char a[50];char b[20];
   scanf("%s",a);scanf("%s",b);
	while(strstr(a,b))
	{
		char *p=NULL;
		for(p=strstr(a,b);*p;p++)
		{
			*p=*(p+strlen(b));
		}
	}
	printf("%s",a);
   return 0;
}
