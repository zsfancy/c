#include <iostream>
using namespace std;

int strlen(char *s)
{
    int n;
    for(n=0;*s!='\0';s++)
        n++;
    return n;
}
int main()
{
    int i;
    char a,b[100];
    char *c;
    a='a';
    for(i=0;i<99;++i)
    {
    	b[i]='a';
	}
    b[99]='\0';
    c=&a;
    cout <<"l1:"<<strlen("hello,world")<<endl;
    cout <<"l2:"<<strlen(b)<<endl;
    cout <<"l3:"<<strlen(c)<<endl;
}


