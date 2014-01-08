#include<reg51.h>
#define port P1
#define dataport P2  // Dataport for lcd
#define key P0  // Port for keypad
#define sec 100
sbit rs = port^0;
sbit rw = port^1;
sbit en = port^2;

sbit col1=key^4;
sbit col2=key^5;
sbit col3=key^6;
sbit row1=key^0;
sbit row2=key^1;
sbit row3=key^2;
sbit row4=key^3;

void delay(unsigned int msec) //Time delay function
{
int i,j ;
for(i=0;i<msec;i++)
  for(j=0;j<1275;j++);
}

void lcd_cmd(unsigned char item) //Function to send command to LCD
{
dataport = item;
rs= 0;
rw=0;
en=1;
delay(1);
en=0;
return;
}

void lcd_data(unsigned char item) //Funtion to send data on LCD
{
dataport = item;
rs= 1;
rw=0;
en=1;
delay(1);
en=0;
return;
}

void lcd_data_string(unsigned char *str) // Function to send string on LCD
{
int i=0;
while(str[i]!='\0')
{
  lcd_data(str[i]);
  i++;
  delay(10);
}
return;
}

void lcd(unsigned char str[10])  // Funtion to Initialize LCD
{
lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_data_string(str);
}

	  void ab1()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(24);
lcd_data(24);
lcd_data(8);
lcd_data(8);
lcd_data(24);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(14);
lcd_data(10);
lcd_data(14);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(2);
lcd_data(2);
lcd_data(30);
lcd_data(20);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);
}
  void ab2()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(16);
lcd_data(8);
lcd_data(4);
lcd_data(2);
lcd_data(1);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(2);
lcd_data(2);
lcd_data(30);
lcd_data(18);
lcd_data(18);
lcd_data(18);
lcd_data(18);
lcd_data(30);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(1);
lcd_data(1);
lcd_data(31);
lcd_data(17);
lcd_data(19);
lcd_data(17);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);
}
  void ab3()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(1);
lcd_data(0);
lcd_data(15);
lcd_data(0);
lcd_data(0);
lcd_data(20);
lcd_data(20);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(16);
lcd_data(16);
lcd_data(16);
lcd_data(23);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(29);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(4);
lcd_data(4);
lcd_data(28);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);
}
void ab4()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(31);
lcd_data(25);
lcd_data(1);
lcd_data(1);
lcd_data(29);
lcd_data(21);
lcd_data(21);
lcd_data(23);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(29);
lcd_data(21);
lcd_data(29);
lcd_data(17);
lcd_data(17);
lcd_data(17);
lcd_data(17);
lcd_data(31);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(112);
lcd_data(31);
lcd_data(21);
lcd_data(21);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_cmd(0xC4);
lcd_data(6);
delay(10);
}
  void ab5()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(31);
lcd_data(21);
lcd_data(21);
lcd_data(1);
lcd_data(1);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(1);
lcd_data(31);
lcd_data(17);
lcd_data(17);
lcd_data(21);
lcd_data(31);
lcd_data(4);
lcd_data(7);
lcd_cmd(0x80);
lcd_data(1);
delay(10);
}
  void ab6()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(28);
lcd_data(20);
lcd_data(28);
lcd_data(19);
lcd_data(16);
lcd_data(16);
lcd_data(8);
lcd_data(7);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(28);
lcd_data(20);
lcd_data(20);
lcd_data(28);
lcd_data(16);
lcd_data(16);
lcd_data(16);
lcd_data(16);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(4);
lcd_data(28);
lcd_data(20);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);
}
  void ab7()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(1);
lcd_data(31);
lcd_data(16);
lcd_data(8);
lcd_data(6);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(0);
lcd_data(17);
lcd_data(17);
lcd_data(10);
lcd_data(4);
lcd_data(10);
lcd_data(17);
lcd_data(31);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(0);
lcd_data(0);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(28);
lcd_cmd(0x82);
lcd_data(2);
delay(10);
}
 void ab8()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(0);
lcd_data(16);
lcd_data(8);
lcd_data(4);
lcd_data(2);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(14);
lcd_data(10);
lcd_data(14);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(27);
lcd_data(17);
lcd_data(17);
lcd_data(27);
lcd_data(17);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);

lcd_cmd(88);
lcd_data(0);
lcd_data(0);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(4);
lcd_data(28);
lcd_cmd(0x84);
lcd_data(3);
delay(10);
}
 void ab9()
{
 lcd_cmd(0x38);
lcd_cmd(0x0e);
//delay(sec);
lcd_cmd(0x01);
//delay(sec);
lcd_cmd(0x82);
//delay(sec);
lcd_cmd(64);  //Address where values of the first custom character is stored
lcd_data(24);
lcd_data(24);
lcd_data(8);
lcd_data(24);
lcd_data(16);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0xC0);  //Address of the location where the character is to be displayed
lcd_data(0);  // Displaying the character created at address 0x64 
delay(10);

lcd_cmd(72);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(0);
lcd_data(14);
lcd_data(10);
lcd_data(14);
lcd_cmd(0x80);
lcd_data(1);
delay(10);

lcd_cmd(80);
lcd_data(25);
lcd_data(25);
lcd_data(9);
lcd_data(29);
lcd_data(21);
lcd_data(21);
lcd_data(21);
lcd_data(31);
lcd_cmd(0x82);
lcd_data(2);
delay(10);

lcd_cmd(88);
lcd_data(4);
lcd_data(28);
lcd_data(4);
lcd_data(4);
lcd_data(29);
lcd_data(5);
lcd_data(5);
lcd_data(31);
lcd_cmd(0x84);
lcd_data(3);
delay(10);
}
ab10()
{
int i=0;
for(i=0;i<12;i++)
{
  lcd_cmd(0x1C);  //Shift the entire display to right
  delay(75);
}
}
void display(int a) //Display functon for LCD

{
switch(a)
{
  case 1:ab1();
    break;
  case 2:ab2();
    break;
  case 3:ab3();
    break;
  case 4:ab4();
    break;
  case 5:ab5();
    break;
  case 6:ab6();
    break;
  case 7:ab7();
    break;
  case 8:ab8();
    break;
  case 9:ab9();
    break;
  case 0:ab10();
    break;
  case 11:lcd("*");
    break;
  case 12:lcd("#");
    break;
}
}

void check_col1() //Function for checking column one
{
row1=row2=row3=row4=1;
row1=0;
if(col1==0)
display(1);
row1=1;
row2=0;
if(col1==0)
display(4);
row2=1;
row3=0;
if(col1==0)
display(7);
row3=1;
row4=0;
if(col1==0)
display(11); 
row4=1;
}

void check_col2() //Function for checking column two
{
row1=row2=row3=row4=1;
row1=0;
if(col2==0)
display(2);
row1=1;
row2=0;
if(col2==0)
display(5);
row2=1;
row3=0;
if(col2==0)
display(8);
row3=1;
row4=0;
if(col2==0)
display(0);
row4=1;
}

void check_col3() //Function for checking column three
{
row1=row2=row3=row4=1;
row1=0;
if(col3==0)
display(3);
row1=1;
row2=0;
if(col3==0)
display(6);
row2=1;
row3=0;
if(col3==0)
display(9);
row3=1;
row4=0;
if(col3==0)
display(12);  //For #
row4=1;
}

void main()
{
col1=col2=col3=1;  //Input Port
while(1)
{
  row1=row2=row3=row4=0;
  if(col1==0)
  check_col1();
  else
   if(col2==0)
   check_col2();
   else
    if(col3==0)
    check_col3();
}
}
