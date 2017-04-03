#include <iostream>
using namespace std;

//将t的前n个字符(如果t字符数少于n就用t的字符数)与s比较，0表示一样，1表示不一样。
int strncmp2(char *s,char *t,int n)
{
    char *tempt=t;
    while(*s++==*t++ && *t!='\0' && t<tempt+n)
	{
        s++;
        t++;
    }
    if(t=='\0'||t==tempt+n)
    {
    	cout <<"0：相同"<<endl;
	}
    else
    {
    	cout <<"1：不同"<<endl;
	}
}

int main()
{
    char s[]="apple",t[]="applebanasw";
    int n=5;
    strncmp2(s,t,n);
}


