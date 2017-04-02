#include <iostream>
using namespace std;

//对t字符串前3位复制加入到字符串s末尾形成新的字符串s 
void strncat2(char *s,char *t,int n)
{
    char *tempt;
    tempt=t;
    while(*s)
    {
    	s++;
	}
    while(*t!='\0'&& t<tempt+n)
	{
        *s++=*t++;
    }
    *s='\0';
}

int main()
{
    char s[]="zybfancy",t[]="ggggggg";
    int n=3;
    strncat2(s,t,n);
    cout <<s<<endl;
}


