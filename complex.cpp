#include <iostream>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
using namespace std ;
class complex 
{
	
	public :
		complex() ;
	void organize1(char k []  ,char s[]) ;
	void f1(float ,float);
	void f2(float ,float);
	void organize2(char k []) ;
	void multiply() ; 
	void plus ();
	void abs() ;
	//void allote();
	void showmenu();	
	private :
	char a[20] ,b[20] ,i1[10] , r1[10] , i2[10], r2[10];
	float real11 , image11 ,real22 , image22;
	
} ;
complex::complex()
{
	real11=0 ;
	real22=0 ;
	image11=0;
	image22=0;
}
void complex::organize1(char c[20] ,char d[20])
{
	int  t , k=1 ,g=1;
	
	float real1 = 0 ,image1 = 0 ;
	int i=0 ,j=0;
	while (c[i]!='\0')
	{
		if (c[i]!=' ')
		{
			a[j]=c[i] ;
			j++;
		}
			i++;
	}
	a[j]='\0';
	i=0 ;
	j=0;
	if(a[i]=='-')
	g=-1 , a[i]='0';
	while (a[i]!='+' && a[i]!='-')
	{
		r1[i]=a[i];
		i++;
		//j++;
		if (a[i]=='-')
		k=-1;
	}
	r1[i]='\0';
	i++ ;
	while(a[i]!='i')
	{
		i1[j]=a[i] ;
		if (a[i]=='\0')
		cout<<"eror" , exit (1) ;
		j++;
		i++;
	}
	i1[j]='\0';
	i=0 ;   /*       
	while (i1[i]!='\0')
	{
	t= i1[i]- '0';
	image1= image1 +t;
	image1*=10 ;
	i++;
	} 
	image1/=10 ;
	i=0;
	while (r1[i]!='\0')
	{
	t= r1[i] - '0';
	real1= real1 +t;
	real1*=10 ;
	i++;
	}
	real1/=10 ; */
	real1 = atof(r1);
	image1=atof(i1);
	real1*=g ;
	image1*=k;
	if (g==-1)
	a[0]='-';
	system ("cls");
	f1(real1 , image1) ;
	cout<<"input numbers is :"<<endl<<a<<endl;		
	organize2(d);	
}
void complex::organize2(char d[20])
{
	int   t ,k=1 , g=1;
	float real2 =0 , image2 =0 ;
	int i=0 ,j=0;
	while (d[i]!='\0')
	{
		if (d[i]!=' ')
		{
			b[j]=d[i] ;
			j++;
		}
			i++;
	}
	b[j]='\0';

	i=0 ;
	j=0;
	if (b[i]=='-')
	g=-1 , b[i]='0';
	while (b[i]!='+' && b[i]!='-')
	{
		r2[i]=b[i];
		i++;
		//j++;
		if (b[i]=='-')
		k=-1;
	}
	r2[i]='\0';
	i++ ;
	while(b[i]!='i')
	{
		i2[j]=b[i] ;
		if (b[i]=='\0')
		cout<<"eror" , exit (1) ;
		j++;
		i++;
	}
	i2[j]='\0';
	i=0 ;/*
	while (i2[i]!='\0')
	{
	t= i2[i] - '0';
	image2= image2 +t;
	image2*=10 ;
	i++;
	}
	image2/=10 ;
	i=0;
	while (r2[i]!='\0')
	{
	t= r2[i]- '0';
	real2= real2 +t;
	real2*=10 ;
	i++;
	}
	real2/=10 ; */
	real2 = atof(r2);
	image2= atof(i2);
	if (g==-1)
	b[0]='-' ;
	
	cout<<b<<endl ;
	real2*=g ;
	image2*=k;
//cout<<r2<<"..."<<"..."<<i2<<endl ;
	f2(real2 , image2);
		showmenu() ;
//	void showmenu();

}
void complex::f1(float a , float b)
{
	real11=a;
	image11=b;
}
void complex::f2(float a , float b)
{
	real22=a;
	image22=b;
}


void complex::showmenu()
{
	char i;
	cout<<"1- plus" ;
	cout<<endl<<"2- multiply "<<endl ;
	cout<<"3- abs"<<endl ;
	//cout<<"4- allote "<<endl ;
	cout<<"4- exit ..." ;
	cout<<endl<<"your chice :";
	cin>>i ;
	
	system ("cls");
	switch (i)
	{
		case '1' :
			 plus();
			break;
		case '2' :
			 multiply();
			break;
		case '3' :
			abs();
			break;
	//	case 4 :
	//		allote();
	//		break;
		case '4' :
			exit (1);
		default :
			cout<<"your input is out of range return again"<<endl;
			showmenu();
			
	}
}
void complex::plus()
{
char k;
float a , b ;
cout<<real11<<"----"<<image11<<"==="<<real22<<"-----"<<image22<<endl ;
a= real11 + real22	;
b=image11+ image22 ;
cout <<"plus ="<<a<<" "<<"+"<<" "<<b<<"i";
  cout<<endl<<"do you want to countinue ...(y/n) :";
  cin>>k ;
  if (k=='y')
  {
  	system ("cls") ;
  	showmenu() ;
  }
  else 
  exit (1) ;
}
void complex::multiply()
{
	char k ;
	float a , b;
	a=real11*real22 - image11*image22;     // (real11+image11i)(real22+image22i)=real11real22 - image11imag22+ (real11image22+ image11real22)
	b=real11*image22+image11*real22;
	cout <<"multiply ="<<a<<" "<<"+"<<" "<<b<<"i";
	cout<<endl<<"do you want to countinue ...(y/n) :";
 	cin>>k ;
  if (k=='y')
  {
  	system ("cls") ;
  	showmenu() ;
  }
  else 
  exit (1) ;
}
	

void complex::abs()
{
	char k;
	float g=sqrt (real11*real11+ image11*image11) ;
	float d=sqrt (real22*real22+ image22*image22) ;
	cout<<"abs "<<a<<" = "<<g<<endl;
	cout<<"abs "<<b<<" = "<<d<<endl;
	cout<<endl<<"do you want to countinue ...(y/n) :";
 	cin>>k ;
  if (k=='y')
  {
  	system ("cls") ;
  	showmenu() ;
  }
  else 
  exit (1) ;
}
int main()
{
	char c[20] , d[20];
	complex n ,m,k ;
	cout<<"enter 2 numbers in 2 line , frist enter the real then the image one ,like 3+ 4i or     10 -  2i :"<<endl;
	cin.getline(c , 20);
	cin.getline(d , 20);
	n.organize1(c , d);
}
