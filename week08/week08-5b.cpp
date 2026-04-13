//week 08-5b.cpp SOIT107_Base_011
#include <Stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if (c=='+')printf("%d",a+b);
	if (c=='-')printf("%d",a-b);
	if (c=='*')printf("%d",a*b);
	if (c=='/')printf("%d",a/b);
}
