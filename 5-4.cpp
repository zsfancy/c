#include <iostream>
using namespace std;

//���ַ���t�������ַ���s��β������1�����򷵻�0.����ı༴�� 
int strend(char *s,char *t)
{
    int i,j;
    i=j=0;
    while(*s)
	{
        i++;
        s++;
    }
    while(*t)
	{
        j++;
        t++;
    }
    if(j<=i)
	{
        while((*s--==*t--)&&j>=0)
		{
            j--;
        }
        return (j>0)? 0:1;
    }
    else
        return 0;
}
int main()
{
	int a;
    char s[100],t[100];
    s[0]='a';
    s[1]='b';
    s[2]='c';
    s[3]='\0';
    t[0]='d';
    t[1]='e';
    t[2]='f';
    t[3]='\0';
    cout <<s<<" "<<t<<endl;
    a=strend(s,t);
    cout <<a<<endl;
}


