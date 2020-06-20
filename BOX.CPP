#include<iostream>
#include<conio.h>
//#include<graphics>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
using namespace std;
void main()
{ clrscr();
char ans;
int ch,i,ch1,a,z;
float l,b,op1,op2;
//*****************************************************************
 //box1


  // line1
for(i=0;i<80;i++)
{
sound(100*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}





 if(ch1=='a'||ch1=='z')
cin>>ch1;
{

 gotoxy(35,5);
cout<<"\n*  ";
 }
textcolor(RED);
cputs("\n   **     **    *******  **        *******   ****** *   *********** ******** ");
cout<<"\n      **     **    *******  **        *******   ****** *   *********** ******** ";
textcolor(WHITE);
cputs("\n     **     **    **       **        **        **   * *   **   *   ** **       ");
cputs("\n     **  *  **    *****    **        **        **   * *   **   *   ** ******   ");
cputs("\n     **  *  **    **       **        **        **   * *   **       ** **       ");
textcolor(GREEN);
cputs("\n       *********    *******  ********  *******   ****** *   **       ** ******** ");
textcolor(GREEN);
cputs("\n       *********    *******  ********  *******   ********   **       ** ******** ");
getch();
clrscr();






gotoxy(25,5);
textcolor(WHITE);
cputs("C++  introduction");


	      gotoxy(2,8);
	      cout<<"The c++ programming language was developed at ";
	      cout<<"AT&T Bell laboratories in the early 1980s by ";
	      cout<<"Bjarne stroustrup.He found 'c' lacking for simulations ";
	      cout<<"and decided to extend the language by adding features ";
	      cout<<"from his favourite language,simula 67.simula 67 was one ";
	      cout<<"of the object oriented languages.bjarne stroustroup called ";
	      cout<<"it c with classes originally.The name c++ (pronounced c plus ";
	      cout<<"plus) was coined by rich mascitti where ++ is the c increment ";
	      cout<<"operator Ever since its birth,c++ evolved to cope with problems ";
	      cout<<"encountered by users,and through discussion at AT&T.";



getch();
clrscr();

do
{
//****************************************************
//box3
  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}


gotoxy(6,6);
char ch3;
textcolor(WHITE);
cputs("\n*  plz enter your choice");
cout<<"\n*  a.>MATHS";
cout<<"\n*  b.>CHEMISTRY";
cout<<"\n*  c.>PHYSICS";
cout<<"\n*  d.>ENGLISH";
cin>>ch3;
clrscr();
if(ch3=='a')
{
//***********************************************************
//box4




  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}


gotoxy(35,2);
textcolor(WHITE);
cputs("***MATH***");

gotoxy(35,3);
textcolor(GREEN);
cputs("*** MENU ***");
textcolor(WHITE);
cout<<"\n*   1.> Sum";
cout<<"\n*   2.>Subtract";
cout<<"\n*   3.>Divide";
cout<<"\n*   4.>Multiplay";
cout<<"\n*   5.>Rectangle Perimeter";
cout<<"\n*   6.>Number square";
cout<<"\n*   7.>Number cube";
cout<<"\n*   8.> N power";
cout<<"\n*   9.>Square Perimeter";
cout<<"\n*   10.>Square area";
cout<<"\n*   11.>Triangle area";
cout<<"\n*   12.>Simple interest";
cout<<"\n*   13.>Compound interest";
cout<<"\n*   14.>Amount";
cout<<"\n*   15.>Temperature convert";
cout<<"\n*   16.>Distance formula";

cin>>ch;
clrscr();
//********************************************************
//box5
// line

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}






gotoxy(10,5);
switch(ch)
{
case 1: cout<<"\n* plz enter first no";
	cin>>op1;
	cout<<"\n plz enter second no";
	cin>>op2;
	int sum=op1+op2;
	cout<<"\n*  sum :"<<sum;
	break;
case 2: cout<<"\n*  plz enter first no";
	cin>>op1;
	cout<<"\n*  plz enter second no";
	cin>>op2;
	float subtract=op1-op2;
	cout<<"\n*  Subtract :"<<subtract;
	break;
case 3: float div;
       cout<<"\n*  plz enter first number";
	cin>>op1;
	cout<<"\n*  plz enter second number";
	cin>>op2;
	if(op2==0)
	{
	cout<<"\n undefined";
	getch();
	exit(0);
	}
	else

	 div=op1/op2;
	cout<<"\n*  Divide  :"<<div;
	break;
case 4: cout<<"\n*  plz enter first no";
	cin>>op1;
	cout<<"\n*  plz enter second no";
	cin>>op2;
	float m=op1*op2;
	cout<<"\n*  Multiplay :"<<m;
	break;
case 5: cout<<"\n*  plz enter length";
	cin>>l;
	cout<<"\n*  plz enter breath";
	cin>>b;
	float peri;
	peri=2*(l+b);
	cout<<"\n*  Rectangle perimeter :"<<peri;
	break;
case 6: cout<<"\n*  plz enter no";
	float s,n;
	cin>>n;
	s=pow(n,2);
	cout<<"\n*  Square :"<<s;
	break;
case 7: cout<<"\n*  plz enter no";
	cin>>n;
	float c=pow(n,3);
	cout<<"\n*  Cube  :"<<c;
	break;
case 8: cout<<"\n*   plz enter number";
	float power,number;
	cin>>number;
	cout<<"\n*   plz enter power";
	cin>>power;
	float Npower=pow(number,power);
	cout<<"\n*   Result :"<<Npower;
	break;
case 9: cout<<"\n*  plz enter sides";
	cin>>s;
	float squarearea=s*4;
	cout<<"\n*  Square perimeter :"<<squarearea;
	break;
case 10: cout<<"\n*  plz enter side:";
	cin>>s;
	float squareperi=s*s;
	cout<<"\n*  Square area :"<<squareperi;
	break;
case 11:cout<<"\n*   plz enter base :";
	float base;
	cin>>base;
	cout<<"\n*   plz enter height :";
	float height;
	cin>>height;
	float triagle=0.5*(base*height);
	cout<<"\n*   Triangle area :"<<triagle;
	break;
case 12:cout<<"\n*    plz enter principle :";
	float principle,rate,time;
	cin>>principle;
	cout<<"\n*    plz enter rate  :";
	cin>>rate;
	cout<<"\n*    plz enter  time  :";
	cin>>time;
	float simpleinterest=(principle*rate*time)/100;
	cout<<"\n*    Simple Interest :"<<simpleinterest;
	break;
case 13:cout<<"\n*    plz enter principle :";
	cin>>principle;
	cout<<"\n*   plz enter Amount :";
	float amount;
	cin>>amount;
	float ci=amount-principle;
	cout<<"\n*   Compund interest :"<<ci;
	break;
case 14:cout<<"\n*   plz enter principle :";
	cin>>principle;
	cout<<"\n*   plz enter rate :";
	cin>>rate;
	cout<<"\n*   plz enter time :";
	cin>>time;
	amount=principle*(pow(1+(rate/100),time));
	cout<<"\n*   Amount :"<<amount;
	break;
case 15: gotoxy(35,5);
	 textcolor(RED);
	 cputs("TEMPERATURE CONVERT");
	 cout<<"\n*   a.>Convert Celcius to fahrenhit";
	 cout<<"\n*   b.>Convert fahrenhite to celcius";
	 cout<<"\n*   c.>Convert Celcius to kelvin";

	 char ch5;
	 cin>>ch5;

	if(ch5=='a')
	{
	cout<<"\n*   plz enter celcius :";
	float celcius;
	cin>>celcius;
	float fah=(((9*celcius)/5)+32);
	cout<<"\n*   Fahrenhit :"<<fah;
	}
       if(ch5=='b')
	{  	float celcius;
	cout<<"\n*   plz enter fahrenhit :";
	float fahrenhit;
	cin>>fahrenhit;
	celcius=5*(fahrenhit-32)/9;
	cout<<"\n*   Celcius :"<<celcius;
	}
	if(ch5=='c')
	{  	float celcius;
	cout<<"\n*    plz  celcius :";
	cin>>celcius;
	float kelvin=celcius+273;
	cout<<"\n*    Kelvin  :"<<kelvin;
	}
	break;


case 16 :float dist,x1,x2,y1,y2;
	 cout<<"\n*  plz enter x1";
	 cin>>x1;
	 cout<<"\n* plz enter x2";
	 cin>>x2;
	 cout<<"\n* plz enter y1";
	 cin>>y1;
	 cout<<"\n* plz enter y2";
	 cin>>y2;
	 dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	 cout<<"\n*  Distance :"<<dist;
	 break;
default :textcolor(YELLOW);
	 cputs("\n*   you enter a wrong choice");
	 break;
	}
	}

     if(ch3=='b')
     {
//*************************************************************
//box6
  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}


int ch2;
gotoxy(25,5);
textcolor(WHITE);
cputs("      CHEMISTRY");
gotoxy(35,6);
textcolor(GREEN);
cputs("*** MENU ***");
cout<<"\n*   1.>Periodic Table";
cout<<"\n*   2.>Molarity";
cout<<"\n*   3.>molality";
cout<<"\n*   4.>Points of Dalton atomic theory";
cout<<"\n*   5.>First law of thermodynamics";
cout<<"\n*   6.>About Sigma & Pia bond";
cout<<"\n*   7.>Ideal gas ";
cin>>ch2;
clrscr();
//********************************************************
//box7

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}







gotoxy(10,5);  //display at centre

    switch(ch2)
      {
case 1:     int ch1;
	cout<<"\n*   plz enter group number ";
	cin>>ch1;
	if(ch1==1)
	{
	gotoxy(35,5);
	cout<<"\n*                          ";
	cout<<" Group 1 element";
	cout<<"\n*    Hydrogen [H]=1,1s1 "  ;
	cout<<"\n*    Lithium [Li]=3,              2s2";
	cout<<"\n*     Sodium[Na]=11,      [ne]    3s1";
	cout<<"\n*     Potassium[k]=19 ,   [ar]    4s1";
	cout<<"\n*     Rubidium[Rb]=37,    [kr]    5s1";
	cout<<"\n*     Caesium[Cs]=55,     [xe]    6s1";
	cout<<"\n*     Francium[Fr]=87     [rn]    7s1";
	}
	if(ch1==2)
	{ gotoxy(35,5);
	cout<<"\n*                                               ";
	cout<<"\n Group 2 Element";
	cout<<"\n*    Beryllium[Be]=4,     1s2     2s2 ";
	cout<<"\n*    Magnesium [Mg]=12,   [ne]    3s2 ";
	cout<<"\n*    Calcium[Ca]=20       [ar]    4s2 ";
	cout<<"\n*    Strontium[Sr]=38     [kr]    5s2 ";
	cout<<"\n*    Barium [Ba]=56       [xe]    6s2 ";
	cout<<"\n*    Radium[Ra]=88        [Rn]    7s2 ";
	}
	if(ch1==3)
	{
	gotoxy(30,5);
	cout<<"   GROUP 3 ELEMENT";
	cout<<"\n*                                              ";
	cout<<"\n*     Scandium[Sc]=21,    [ar]   3d1  4s2";
	cout<<"\n*      Yttrium[Y]=39,     [kr]   4d4  5s1 ";
	cout<<"\n*     [La]=57";
	cout<<"\n*     [Ac]=89";
	}
	if(ch1==4)
	{
	gotoxy(30,5);
	cout<<"GROUP 4 ELEMENT";
	cout<<"\n*                                         ";
	cout<<"\n*    Titanium[Ti]=22,        [ar]    3d2   4s2";
	cout<<"\n*    Zirconium[Zr]=40,       [kr]    5s2   4d2 ";
	cout<<"\n*    Hafnium[Hf]=72,         [xe]    4f14  5d2  6s2";
	cout<<"\n*    rutherfordium[Rf]=104,  [rn]    5f14  6d2  7s2 ";
	}
	if(ch1==5)
	{
	gotoxy(30,5);
	cout<<" GROUP 5 ELEMENT";
	cout<<"\n*                                                     ";
	cout<<"\n*     Vandium[V]=23,         [ar]    3d3   4s2";
	cout<<"\n*     Niobium[Nb]=41         [kr]    4d4   5s1 ";
	cout<<"\n*     Tatalum[Ta]=73         [xe]    4f14  5d3   6s2";
	cout<<"\n*     dubniu[Db]=105         [rn]    5f14  6d3   7s2";
	}
	if(ch1==6)
	{   gotoxy(30,5);
	cout<<"\ Group 6 ELEMENT";
	cout<<"\n*     Chromium[Cr]=24,       [ar]   3d5    4s1";
	cout<<"\n*     Molybdenum[Mo]=42      [kr]   5s1    4d5";
	cout<<"\n*     Tungsten[W]=74         [xe]  4f14    5d4   6s2 ";
	cout<<"\n*     Seaborgium[Sg]=106     [rn]  7s2     5f14  6d4";
	}
	if(ch1==7)
	{
	gotoxy(30,5);
	cout<<"GROUP 7 ELEMENT";
	cout<<"\n*                                                    ";
	cout<<"\n*    Manganese[Mn]=25        [ar] 4s2   3d2";
	cout<<"\n*    Tectnetium[Tc]=43       [kr] 4d5   5s2 ";
	cout<<"\n*    Rhenium[Re]=75          [xe] 4f14  5d5  6s2";
	cout<<"\n*    Bohrium[Bh]=107         [rn] 5f14  6d5  7s2";
	}
	if(ch1==8)
	{
	gotoxy(30,5);
	cout<<" GROUP 8 ELEMENT";
	cout<<"\n*                                  ";
	cout<<"\n*     iron[Fe]=26         [ar]  3d6  4s2";
	cout<<"\n*     Ruthenium[Ru]=44    [kr]  4d7  5s1";
	cout<<"\n*     Osmium[Os]=76       [xe]  4f14 5d6  6s2";
	cout<<"\n*     Hassium[Hs]=108     [rn]  5f14 6d6  7s2";
	}
	if(ch1==9)
	{
	gotoxy(35,5);
	cout<<"\GROUP 9 ELEMENT";
	cout<<"\n*                                     ";
	cout<<"\n*     Cobalt[Co]=27      [ar] 4s2 3d7";
	cout<<"\n*     Rhodium[Rh]=45     [kr] 5s1 4d8";
	cout<<"\n*     iridium[Ir]=77     [xe] 4f14 5d7  6s2";
	cout<<"\n*     Meltnerium[Mt]=109 [rn] 7s2  5f14 6d7";
	}
	if(ch1==10)
	{
	gotoxy(30,5);
	cout<<"GROUP 10 ELEMENT";
	cout<<"\n*                                 ";
	cout<<"\n*     Nickel[Ni]=28      [ar]  4s1   3d9";
	cout<<"\n*     palladium[Pd]=46   [kr]  4d10";
	cout<<"\n*     platinum[Pt]=78    [xe]  4f14  5d9";
	cout<<"\n*     damastadium[Ds]=110 [rn] 7s1  5f14  5d9";
	}
	if(ch1==11)
	{
	gotoxy(30,5);
	cout<<"\GROUP 11 ELEMENT";
	cout<<"\n*                              ";
	cout<<"\n*      Copper[Cu]=29    [ar]  3d10  4s1      ";
	cout<<"\n*      Silver[Ag]=47    [kr]  4d10  5s1";
	cout<<"\n*      Gold[Au]=79      [xe]  4f14  5d10  6s1 ";
	cout<<"\n*      Rotentgenium[Rg]=111   5f14   6d10  7s1";
	}
	if(ch1==12)
	{
	gotoxy(30,5);
	cout<<"GROUP 12 ELEMENT ";
	cout<<"\n*                                              ";
	cout<<"\n*      Zinc[Zn]=30  [ar]  3d10   4s2";
	cout<<"\n*      Cadmium[Cd]=48 [kr] 5s2 4d10 ";
	cout<<"\n*      Mercury[Hg]=80  [xe] 4f14  5d10  6s2";
	cout<<"\n*      Copernicium[Cn]=112  [rn]  5f14  6d10  7s2";
	}
	if(ch1==13)
	{
	gotoxy(30,5);
	cout<<"GROUP 13 ELEMENT";
	cout<<"\n*                                                ";
	cout<<"\n*     Boron[B]=5         [he]  2s2  2p1";
	cout<<"\n*     Aluminium[Al]=13   [ne]  3s2  3p1 ";
	cout<<"\n*     Gallium[Ga]=31     [ar]  4s2  3d10  4p1 ";
	cout<<"\n*     Indium[In]=48      [kr]  4d10  5s2  5p1";
	cout<<"\n*     Thallium[Tl]=81    [xe]  4f14  5d10  6s2  6p1";
	cout<<"\n*     Ununtrium[Uut]=113 [rn] 5f14 6d10 7s2  7p1";
	}
	if(ch1==14)
	{
	gotoxy(30,5);
	cout<<"GROUP 14 ELEMENT";
	cout<<"\n*                                                  ";
	cout<<"\n*     Carbon[C]=6      [he] 2s2 2p2";
	cout<<"\n*     Silicon[Si]=14   [ne] 3s2 3p2";
	cout<<"\n*     Germanium[Ge]=32 [ar] 3d10  4s2 4p2";
	cout<<"\n*     Tin[Sn]=50       [kr] 4d10  5s2  5p2";
	cout<<"\n*     Lead[Pb]=82      [xe] 4f14  5d10 6s2 6p2";
	cout<<"\n*     Ununquadium[Uuq]=14 [rn] 5f14 6d10  7s2  7p2";
	}
	if(ch1==15)
	{
	gotoxy(30,5);
	cout<<"GROUP 15 ELEMENT";
	cout<<"\n*                                               ";
	cout<<"\n*     Nitrogen[N]=7         [he] 2s2   2p3";
	cout<<"\n*     Phosphorus[P]=15      [ne] 3s2   3p3";
	cout<<"\n*     Arseni[As]=33         [ar] 4s2   3d10  4p3";
	cout<<"\n*     Antimony[Sb]=51       [kr] 4d10  5s2   5p3 ";
	cout<<"\n*     Bismuth[Bi]=83        [xe] 4f14  5d10  6s2  6p3";
	cout<<"\n*     Ununpentium[Uup]=115  [rn] 5f14  6d10  7s2  7p3";
	}
	if(ch1==16)
	{
	gotoxy(30,5);
	cout<<"GROUP 16 ELEMENT";
	cout<<"\n*                                                    ";
	cout<<"\n*     Oxygen[O]=8           [he] 2s2  2p4";
	cout<<"\n*     Sulfur[S]=16          [ne] 3s2  3p4";
	cout<<"\n*     Selenium[Se]=34       [ar] 4s2  3d10   4p4";
	cout<<"\n*     Tellurium[Te]=52      [kr] 4d10 5s2    5p4";
	cout<<"\n*     Polonium[Po]=84       [xe] 6s2  4f14   5d10  6p4";
	cout<<"\n*     Ununhexium[uuh]=116   [rn] 5f14 6d10   7s2   7p4";
	}
	if(ch1==17)
	{
	gotoxy(30,5);
	cout<<" GROUP 17 ELEMENT";
	cout<<"\n*                                              ";
	cout<<"\n*     Fluorine[F]=9        [he] 2s2   2p5";
	cout<<"\n*     Chlorine[Cl]=17      [ne] 3s2   3p5";
	cout<<"\n*     Bromine[Br]=35       [ar] 4s2   3d10   4p5";
	cout<<"\n*     Iodine[I]=53         [kr] 4d10  5s2    5p5";
	cout<<"\n*     Astaine[At]=85       [xe] 4f14  5d10   6s2  6p5";
	cout<<"\n*     Ununseptium[Uus]=117   unknow";
	}

	 if(ch1==18)
	{
	gotoxy(30,5);
	cout<<" GROUP 18 ELEMENT";
	cout<<"\n*                                              ";
	cout<<"\n*     Helium[He]=2         1s2";
	cout<<"\n*     Neon[Ne]=10          [he]  1s2   2s2    2p6";
	cout<<"\n*     Argon[Ar]=18         [ne]  3s2   3p6";
	cout<<"\n*     Krypton[Kr]=36       [ar]  3d10  4s2    4p6";
	cout<<"\n*     Xenon[Xe]=54         [kr]  5s2   4d10   5p6 ";
	cout<<"\n*     Radon[Rn]=86         [xe]  4f14  5d10   6s2    6p6";
	cout<<"\n*     Ununoctium[Uuo]=118  [rn]  5f14  6d10   7s2";
	}

	break;
case 2: float givenmass,molarmass,vol,molarity;
	cout<<"\n*    plz enter Given mass";
	cin>>givenmass;
	cout<<"\n*    plz enter Molar mass";
	cin>>molarmass;
	cout<<"\n*    plz enter volume in ml";
	cin>>vol;
	molarity=((givenmass*1000)/(molarmass*vol));
	cout<<"\n*   Molarity :"<<molarity;
	break;
case 3:float weight,molality;
       cout<<"\n*  plz enter Given mass";
       cin>>givenmass;
       cout<<"\n*  plz enter Molar mass";
       cin>>molarmass;
       cout<<"\n*  plz enter Weight";
       cin>>weight;
       molality=((givenmass*1000)/(molarmass*weight));
       cout<<"\n*  Molality :"<<molality;
       break;
case 4:gotoxy(30,5);
       cout<<"***DALTON ATOMIC THEORY***";
       cout<<"\n*   i.>A matter made up of very small individual particle called atom";
       cout<<"\n*  ii.>Similer types ofatom contain same property";
       cout<<"\n*      but different types of atom contain different property";
       cout<<"\n* iii.>When two atoms of diferent  element ina defimate ratio";
       cout<<"\n*      combine to form compound";
       cout<<"\n*  iv.> Chemical reaction involve recognisation of atoms";
       cout<<"\n*       these are nither be created nor be destroyed in chemical reaction";
       break;
case 5: gotoxy(30,5);
	textcolor(WHITE);
	cputs("First law of thermodynamics");
	cout<<"\n*\n\n\n*   Energy neither be created nor be destroyed during chemical reaction";
	break;
case 6 : char ch6;
	 cout<<"\n*  a.> sigma";
	 cout<<"\n*  b.> pia";
	 cin>>ch6;
	 if(ch6=='a')
	 { gotoxy(35,5);
	 textcolor(GREEN);
	 cputs(" SIGMA BOND");
	 cout<<"\n*  1.>It form head to head (axial over laping)";
	 cout<<"\n*                                                     ";
	 cout<<"\n*  2.> Extent over laping";
	 cout<<"\n*                                                         ";
	 cout<<"\n*  3.> It is strong bond";
	 cout<<"\n*                                                          ";
	 cout<<"\n*  4.> It can  exist only single bond";
	 cout<<"\n*                                                             ";
	 cout<<"\n*  5.> its only exist in single bond";
	 }
	  if(ch6=='b')
	  {
	  gotoxy(35,5);
	  textcolor(BLUE);
	  cputs(" PIA BIOND");

	  cout<<"\n*  1.>It is formed  by side way  or lateral over laping or vertical overlaping";
	  cout<<"\n*                                                               ";
	  cout<<"\n*  2.> extent overlapin is less";
	  cout<<"\n*                                                                  ";
	  cout<<"\n*  3.> It  is  a weak bond ";
	  cout<<"\n*                                                                    ";
	  cout<<"\n*  4.> It is exist only in pair";
	  cout<<"\n*                                         ";
	  cout<<"\n*  5.> It is only  exist in double & triple bond";
	  }
	  break;
case 7 : gotoxy(30,5);
	 textcolor(GREEN);
	 cputs("Derivation ofdensity of mass");
	 cout<<"\n*    pv=nrt         //ideal gas equation]";
	 cout<<"\n*    pv=(w/m)rt";
	 cout<<"\n*    p=drt/m";
	 textcolor(RED);
	 cputs("\n*   d=pm/rt   ");
	 break;
case '8' :gotoxy(30,5);
	textcolor(GREEN);
	cputs("Structure of atom");
	cout<<"\n*  Shape of atom  is shperical";
	cout<<"\n*  atom makes two things";
	cout<<"\n*  1.>Nuclear";
	cout<<"\n*  2.>Orbit";
	break;
default:textcolor(YELLOW);
	cputs(" you enter a wrong choice!!!!");
	break;
	}
	}
if(ch3=='c')
{


  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}



gotoxy(35,5);
textcolor(WHITE);
cputs("***PHYSCIS***");
gotoxy(35,5);
textcolor(GREEN);
cputs("***MENU***");
cout<<"\n*   1.>Kinetic energy";
cout<<"\n*   2.>Potential energy";
cout<<"\n*   3.>Young's modules";
cout<<"\n*   4.>Bulk modules";
cout<<"\n*   5.>Gravitation";
char ch4;
cin>>ch4;
clrscr();

//********************************************************
//box8

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}






gotoxy(35,5);
switch(ch4)

{
case '1': float mass,velocity,ke;
	cout<<"\n*  plz enter a mass";
	cin>>mass;
	cout<<"\n*  plz enter a veocity";
	cin>>velocity;
	ke=0.5*(mass*velocity);
	cout<<"\n*  Kinetic energy :"<<ke;
	break;
case '2': float pe,height;
	  cout<<"\n*  plz enter mass";
	  cin>>mass;
	  cout<<"\n*  plz enter Height";
	  cin>>velocity;
	  pe=mass*10*height;
	  cout<<"\n*  Potential energy"<<pe;
	  break;
case '3' : float youngs,force,L,l,area;
	   cout<<"\n*    plz enter force";
	   cin>>force;
	   cout<<"\n*    plz enter length";
	   cin>>L;
	   cout<<"\n*    plz enter change in length";
	   cin>>l;
	   cout<<"\n*    plz enter the area";
	   cin>>area;
	   youngs=(force*L)/(area*l);
	   cout<<"\n*    YOUNGS MODULES :"<<youngs;
	   break;
case '4' : float bulk,V,v;
	   cout<<"\n*  plz enter force :";
	   cin>>force;
	   cout<<"\n*  plz enter area :";
	   cin>>area;
	   cout<<"\n*  plz enter  Volume";
	   cin>>V;
	   cout<<"\n*  plz enter change in volume";
	   cin>>v;
	   bulk=(force*V)/(area*v);
	  cout<<"\n*  Bulk modules :"<<bulk;
	  break;
case '5' : textcolor(WHITE);
	   gotoxy(30,5);
	   cputs("GRAVITATION");
	   cout<<"\n*  The attraction force between two masses ";
	   cout<<"\n*  is known as gravitation";
	   cout<<"\n*  gravitation force inversly proportinal to distance";
	   cout<<"\n*  between two masses";
	   cout<<"\n*  & dirctly proportional to  force of attraction";
	   cout<<" between two body";
	   break;
default : textcolor(YELLOW);
	  cputs("ENTER A WRONG CHOICE");
	  break;
	  } //switch close bracket

	  }//if close bracket
if(ch3=='d')
{

//******************************************************

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}





char ch4;
gotoxy(35,2);
textcolor(GREEN);
cputs("ENGLISH");
textcolor(WHITE);
cputs("      ");
cout<<"\n*  1.>how to use should";
cout<<"\n*  2.>how to use will";
cout<<"\n*  3.>how to use can";
cout<<"\n*  4.>how to write notice";

cin>>ch4;
clrscr();


//********************************************************
//box9

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("*");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("*");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("*");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("*");
}




gotoxy(35,2);



switch(ch4)
{
case '1':
	 cout<<"\n* how to use should ";
	 cout<<"\n*  ( Toshow : advice & Duty";
	 cout<<"\n*                                                          ";
	 cout<<"\n*   subject + should + first form of verb + object";
	 cout<<"\n*                                           ";
	 cout<<"\n*  EXAMPLE :-";
	 cout<<"\n*  Humay roj school jana chayea";
	 cout<<"\n*  We should goto school daily";
	 cout<<"\n*                                             ";
	 cout<<"\n*                                ";
	 cout<<"\n*                                 Negative senetence ";
	 cout<<"\n*                                    ";
	 cout<<"\n*  Subject + should not / shouldn't + object";
	 cout<<"\n*  ";
	 cout<<"\n*  EXAMPLE :-";
	 cout<<"\n*  Tumay ab padna nahi  chayea";
	 cout<<"\n*  You shouldnot read";
	 cout<<"\n*                              ";
	 cout<<"\n*             Interogative sentence";
	 cout<<"\n*  Should + subject + first form of verb";
	 cout<<"\n*                ";
	 cout<<"\n*  EXAMPE :-     ";
	 cout<<"\n*  kya tummay school jana chayea ?";
	 cout<<"\n*  Should you goto school ?";
	 break;
case '2' :cout<<"\n*                  how to used Will     ";
	  cout<<"\n*   its used in future like ga ,ge";
	  cout<<"\n*   Subject+ will+ verb first form + object";
	  cout<<"\n*   EXAMPLE :-";
	  cout<<"\n*    tum nachoge ";
	  cout<<"\n*    you will dance";
	  cout<<"\n*                   Negative sentence";
	  cout<<"\n*   Subject + will not /won't + object";
	  cout<<"\n*   EXAMPLE :-";
	  cout<<"\n*   may kal keluga";
	  cout<<"\n*   I will not play tomorrow  ";
	  cout<<"\n*                   Interogative sentence";
	  cout<<"\n*  Will + subject + verb first form + object";
	  cout<<"\n*  EXAMPLE :-";
	  cout<<"\n*  kya tum kal bha jaoge ?";
	  cout<<"\n*  will you go there ?";
	  break;
case '3' :cout<<"\n*                           Can";
	  cout<<"\n*       (to show  in present: ability & power)";
	  cout<<"\n*    Subject + can + verb  first form + object";
	  cout<<"\n*    EXAMPLE:-";
	  cout<<"\n*     may cricket khel sakta hu";
	  cout<<"\n*     I can play cricket";
	  cout<<"\n*                    Negative";
	  cout<<"\n*      subject + can + not +object";
	  cout<<"\n*      EXAMPLE :-";
	  cout<<"\n*     bo nach nahe sakte ";
	  cout<<"\n*     she cannot dance";
	  cout<<"\n*                 interogative sentence";
	  cout<<"\n*     can + subject + verb first form";
	  cout<<"\n*    EXAMPLE:-";
	  cout<<"\n*    kya tum thod sakte ho ?";
	  cout<<"\n*    Can you run ?";
	  break;

case '4': cout<<"\n*   1.>write a name of school";

	  cout<<"\n*                                ";
	  cout<<"\n*   2.>write a notice";
	  cout<<"\n*                                ";
	  cout<<"\n*   3.>write a topic ";
	  cout<<"\n*                                ";
	  cout<<"\n*   4.> write a date ";
	  cout<<"\n*                                ";
	  cout<<"\n*   5.>write about topics";
	  cout<<"\n*                                ";
	  cout<<"\n*   6.>end the notice write the name";
	  cout<<"\n*                                ";
	  cout<<"\n*   7.>cover the notice in the box ";
	  cout<<"\n*                                ";
	  cout<<"\n*  press any key for example";
	  getch();
	  clrscr();

 //**************************************************

  // line1
for(i=0;i<80;i++)
{
sound(10*random(100));
delay(10);
nosound();
 textcolor(BLUE);
gotoxy(i,0);
cputs("-");
}
//line2
for(i=1;i<25;i++)
{
sound(100*random(100));
delay(10);
nosound();
textcolor(RED);
gotoxy(1,i);
cputs("-");
}
//line3
for(i=0;i<80;i++)
{ sound(10*random(100));
delay(10);
nosound();
textcolor(BLUE);
gotoxy(i,24);
cputs("-");
}
//line 4
for(i=0;i<25;i++)
{sound(100*random(100));
 delay(10);
 nosound();
textcolor(RED);
gotoxy(80,i);
cputs("-");
}







	   gotoxy(30,5);
	   cout<<"BHEL SHIKSHA NIKETAN SCHOOL ";
	   gotoxy(35,6);
	   cout<<" NOTICE";
	   gotoxy(30,7);
	   cout<<" lost ! lost !";
	   cout<<"\n*  date=22.2.2017 ";
	   cout<<"\n*                    It is to inform  to all the student";
	   cout<<"\n*  & teacher that  i have lost my wrist watch  some where ";
	   cout<<"\n*  in the school  campus during interval . It is a golden ";
	   cout<<"\n*  titan watch one who find its please return  to me ";
	   cout<<"\n*  or deposit in our school office the finder will give good treat";
	   cout<<"\n*  Rahul dubey";

	   break;


default : textcolor(YELLOW);
	  cputs("wrong choice !!!!!!!!");
	  break;
	  }  //switch bracket
	  } //if brack

	 cout<<"\n*  do uwant to continue  yes to press y & no press any key  ";
       cin>>ans;
       clrscr();
	} while(ans=='y');
	 clrscr();

      for( i=2;i<=20;i++)
      { sound(100*random(100));
      delay(50);
      nosound();
      gotoxy(i,12);
	{
	textcolor(RED);
	textattr(random(16)*'a'+BLINK);
      cprintf(" ******THANKS FOR USING THIS SOFTWARE****** ");
      gotoxy(i,13);
      textcolor(WHITE);
      cprintf(" ****This programe is made by RAHUL DUBEY**** ");
      gotoxy(i,14);
      textcolor(GREEN);
      cprintf(" *****and guided by mr rajiv sharma sir******* ");
	 }
      }
      for(i=1;i<=30;i++)
      {
      delay(60);
      gotoxy(i,25);
      cout<<" PRESS ANY KEY TO EXIT ";

      }

getch();
}

