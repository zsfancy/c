#include <iostream>
using namespace std;

//ȡ�ַ���sǰ3λ�ַ��γ��µ��ַ���s 
void strncpy2(char *s,char *t,int n)
{
    char *tempt;
    tempt=t;
    while(*t!='\0'&& t<tempt+n)
    {
    	*s++=*t++;
	}
    *s='\0';
}
int main()
{
	char s[10],t[]="zybfancy";
    int n=3;
    strncpy2(s,t,n);
    cout <<s<<endl;
}
 
