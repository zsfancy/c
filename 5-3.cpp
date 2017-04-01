#include <iostream>
using namespace std;

//改编2.8章的函数strcat(s,t) ——将字符串t连接到字符串s 
//void strcat(char s,char t)
//{
//    int i,j;
//    i=j=0;
//    while(s[i]!='\0')  
//        i++;
//    while((s[i++]=t[i++])!='\0')
//        ;
//}
void strcat2(char *s,char *t)
{
    while(*s)
    {
    	s++;
	}
    while(*s++ = *t++)
    {
    	;
	}
}
int main()
{
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
    strcat2(s,t);
    cout <<s<<endl;
 } 
