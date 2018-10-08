#include<stdio.h>

int main()
{
	char ch;
	int a=0,b=0,c=0,d=0;

	while((ch=getchar())!='\n')
	{
		if(c<='9'&&c>='0')
			a++;
		else if(c==' ')
		{
			b++;
		}
		else if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("数字个数:%d\n", a);
	printf("字母个数:%d\n", b);
	printf("空格个数:%d\n", c);
	printf("其他字符个数:%d\n", d);

	return 0;
}
