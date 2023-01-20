/*1
#include<stdio.h>           //int
int main()
{
	int _a=2;
	int b=3;
	int sum1;
	sum1=_a+b;
	printf("%d\n",sum1);
	return 0;
}
*/






/*2
#include<stdio.h>             //float
int main()
{
	float n1=1.2f;
	float n2=2.2f;
	printf("%f\n",(n1+n2));
	return 0;
}
*/






/*3
#include<stdio.h>             //double
int main()
{
	double s1=1.2;
	double s2=2.2;
	printf("%lf",(s1+s2));
	return 0;
}
*/







/*4
#include<stdio.h>                       //char
int main()
{
	char we='T';
	printf("%c\n",we);
	return 0;
}
*/








/*5
#include<stdio.h>                 //unsigned int
int main()
{
	unsigned int A=1;
	unsigned int B=2;
	unsigned int C;
	C=A+B;
	printf("%u",C);
	return 0;
}
*/







/*6
#include<stdio.h>
int main()
{
	int a_=2;
	char b1='S';
	float c__=2.8;
	double d1=28.8;
	printf("Integer Datatype :%d\n",a_);
	printf("Character Datatype :%c\n",b1);
	printf("Float Datatype :%f\n",c__);
	printf("Double Datatype :%lf\n",d1);
	return 0;
}
*/







/*7
#include<stdio.h>     //boolean
#include<stdbool.h>
int main()
{
	bool b=true;
	printf("%i\n",b);
	return 0;
}
*/






/*8
#include<stdio.h>       //boolean
#include<stdbool.h>
int main()
{
	bool b=true;
	if(b==true)
	{
		printf("True");
	}
	else
	{
	   printf("False");
	}
	return 0;
}
*/






/*9
#include<stdio.h>         //enum
enum week{mon,tues,wed};
int main()
{
	enum week day;
	day=tues;
	printf("%d\n",day);
	return 0;
}
*/





/*10
#include<stdio.h>           //void
void add(int a,int b)
{
	printf("%d",a+b);
}
void main()
{
	add(2,3);
}
*/






/*11

#include<stdio.h>               //float constant
int main()
{
	int r=2;
	const float pi=3.14;
        float area=pi*(r*r);
	printf("Area of circle is %.2f\n",area);
	return 0;
}

*/










/*12

#include<stdio.h>                      //Integer constant
int main()
{
	const int a=2;
	int b=3,c=4;
	int res1=a*b;
	int res2=a*c;
	printf("%d\n",res1);
	printf("%d\n",res2);
	return 0;
}

*/






/*13

#include<stdio.h>                    //const single character
int main()
{
	const char a2='k';
	a2='M';
	printf("%c\n",a2);
	return 0;
}
*/










/*14

#include<stdio.h>             //string constant
int main()
{
	const char name[10]="siva";
	//name[10]="kris";
	printf("%s\n",name);
	return 0;
}
*/















/*15

#include<stdio.h>               //const array
int main()
{
	const int arr[3]={11,22,33};
//	arr[0]=1;
	for(int i=0;i<3;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
*/


