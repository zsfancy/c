#include <iostream>
#include <ctype.h>
using namespace std;

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp=0;

int getch()
{
    return (bufp>0)? buf[--bufp]:getchar();
}

void ungetch(int c)
{
    if(bufp>=BUFSIZE)
    {
    	cout <<"ungetch: too many characters"<<endl;
	} 
    else
    {
    	buf[bufp++]=c;
	}
        
}

double getfloat(double *pn)
{
    int c;
    double sign,power;
    power=1.0;
    while(isspace(c=getch()))
        ;
    if(!isdigit(c)&&c!='\n'&&c!='+'&&c!='-'&&c!='.')
	{
        ungetch(c);
        return 0;
    }
    sign=(c=='-')? -1.0:1.0;
    if(c=='+'||c=='-')
    {
    	c=getch();
	}
    for(*pn=0;isdigit(c);c=getch())
    {
    	*pn=10* *pn+(c-'0');
	}
    if(c=='.')
	{
        while(isdigit(c=getch()))
		{
            *pn=10* *pn+(c-'0');
            power=10.0*power;
        }
    }
    *pn=(*pn)/power;
    *pn *=sign;
    if(c!=EOF)
    {
    	ungetch(c);
	}
    return c;
}

int main()
{
    int n;
    double array[10],getfloat(double *);
    for(n=0;n<10;n++)
    {
    	array[n]=.0;
	}
    for(n=0;n<10&&getfloat(&array[n])!=EOF;n++)
        ;
    for(n=0;n<10;n++)
    {
    	cout<<array[n]<<endl;
	}
}




