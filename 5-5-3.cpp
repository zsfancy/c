#include <iostream>
using namespace std;

//��t��ǰn���ַ�(���t�ַ�������n����t���ַ���)��s�Ƚϣ�0��ʾһ����1��ʾ��һ����
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
    	cout <<"0����ͬ"<<endl;
	}
    else
    {
    	cout <<"1����ͬ"<<endl;
	}
}

int main()
{
    char s[]="apple",t[]="applebanasw";
    int n=5;
    strncmp2(s,t,n);
}


