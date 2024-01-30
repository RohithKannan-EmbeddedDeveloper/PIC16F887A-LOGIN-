/*
#include<pic.h>
#define EN RE0
#define RS RE1
#define RW RE2
#define LCD PORTB

void delay(int count) 
{
    while(count--);
}

void refresh()
{
	EN=1;
	delay(1000);
	EN=0;
	delay(1000);
}

void type()
{
	RS=0;
	RW=0;
	LCD=0X38;
	refresh();
}

void on()
{
	RS=0;
	RW=0;
	LCD=0X0E;
	refresh();
}

void address(int place)
{
	RS=0;
	RW=0;
	LCD=place;
	refresh();
}

void data(char value)
{
	RS=1;
	RW=0;
	LCD=value;
	refresh();
}

	
void main()
{
	TRISE=0X00;
    PORTE=0X00;
    
    TRISB=0x00; 
    PORTB=0x00;
    
    TRISC=0xFF; 
    PORTC=0x00;
    
    TRISD=0x00; 
    PORTD=0x00; 
    
    ANSEL=0x00;  
    ANSELH=0x00;
    type();
    on();
    address(0x80);
    
    while(1)
    {
	    RD0=1;
	    RD1=0;
	    RD2=0;
	    RD3=0;
	    if(RC0==1)
	    {
		    data('1');
		    
		}while(RC0==1);
		if(RC1==1)
	    {
		    data('2');
		    
		}while(RC1==1);
		if(RC2==1)
	    {
		    data('3');
		    
		}while(RC2==1);	
		/////////////////////
		RD0=0;
	    RD1=1;
	    RD2=0;
	    RD3=0;
	    if(RC0==1)
	    {
		    data('4');
		    
		}while(RC0==1);
		if(RC1==1)
	    {
		    data('5');
		     
		}while(RC1==1);
		if(RC2==1)
	    {
		    data('6');
		    
		}while(RC2==1);
		////////////////////
		RD0=0;
	    RD1=0;
	    RD2=1;
	    RD3=0;
	    if(RC0==1)
	    {
		    data('7');
		    
		}while(RC0==1);
		if(RC1==1)
	    {
		    data('8');
		    
		}while(RC1==1);
		if(RC2==1)
	    {
		    data('9');
		     
		}while(RC2==1);
   	}
}  */





//LOGIN DISPLAY 

#include<pic.h>
#define EN RE0
#define RS RE1
#define RW RE2
#define LCD PORTB
int array[10]={0x06,0x5B,0xFD,0x4F};
int array1[10]={0x07,0x7F,0x6F};
int num2[6];
int num[6];
int i=0,j=0;
void delay(int count) 
{
    while(count--);
}

void refresh()
{
	EN=1;
	delay(1000);
	EN=0;
	delay(1000);
}

void type()
{
	RS=0;
	RW=0;
	LCD=0X38;
	refres();
}

void on()
{
	RS=0;
	RW=0;
	LCD=0X0E;
	refresh();
}

void address(int place)
{
	RS=0;
	RW=0;
	LCD=place;
	refresh();
}

void data(char value)
{
	RS=1;
	RW=0;
	LCD=value;
	refresh();
}

void display(char *word)
{
	while(*word)
	{
		RS=1;
		RW=0;
		LCD=*word;
		word++;
		refresh();
	}
}
void show(char *result)
{
	while(*result)
	{
		RS=1;
		RW=0;
		LCD=*result;
		result++;
		refresh();
	}
}

void show2(char *result2)
{
	while(*result2)
	{
		RS=1;
		RW=0;
		LCD=*result2;
		result2++;
		refresh();
	}
}
void show3(char *result3)
{
	while(*result3)
	{
		RS=1;
		RW=0;
		LCD=*result3;
		result3++;
		refresh();
	}
}	
void show4(char *result4)
{
	while(*result4)
	{
		RS=1;
		RW=0;
		LCD=*result4;
		result4++;
		refresh();
	}
}

		
	
void main()
{
	TRISE=0X00;
    PORTE=0X00;
    
    TRISB=0x00; 
    PORTB=0x00;
    
    TRISC=0xFF; 
    PORTC=0x00;
    
    TRISD=0x00; 
    PORTD=0x00; 
    
    ANSEL=0x00;  
    ANSELH=0x00;
    type();
    on();
    address(0x80);
    display("ENTER_USERNAME");
    address(0xC0);
    
    
    while(1)
    {
		    RD0=1;RD1=0;RD2=0;RD3=0;
		    if(RC0==1)
		    {
			    PORTB=array[1];
			    num[i]=1;
			    data('1');
			    i++;
			    while(RC0==1);
			}
			if(RC1==1)
		    {
			    PORTB=array[2];
			    num[i]=2;
			    data('2');
			    i++;
				while(RC1==1);
			}
			if(RC2==1)
		    {
			    PORTB=array[3];
			    num[i]=3;
			    data('3');
			    i++;
			    while(RC2==1);
			   
			}
				
			RD0=0;RD1=1;RD2=0;RD3=0;
			if(RC2==1)
		    {
			    PORTB=array[6];
			    num[i]=6;
			    data('6');
			    i++;
			    while(RC2==1); 
			}
			
			RD0=0;RD1=0;RD2=1;RD3=0;
			if(RC0==1)
		    {
			    PORTB=array1[1];
			    num2[j]=1;
			    data('7');
			    j++;
			    while(RC0==1); 
			}
			if(RC1==1)
		    {
			    PORTB=array1[2];
			    num2[j]=2;
			    data('8');
			    j++;
			    while(RC1==1); 
			}
			if(RC2==1)
		    {
			    PORTB=array1[3];
			    num2[j]=3;
			    data('9');
			    j++;
			    while(RC2==1); 
			}
			
			
		
		RD0=0;RD1=0;RD2=0;RD3=1;
		if(RC0==1)
		   {
			    if(num[0]==1&&num[1]==2&&num[2]==3&&num[3]==6)
			    {	
				    address(0x01);
				    address(0x80);
	   				show("ENTER_PASS");						   				 				
				}		
				else
					{
						address(0x01);
 					address(0xC0);
 					show2("WRONG_ID");
					}
			}
			if(RC2==1)
			{       
  				if(num2[0]==1&&num2[1]==2&&num2[2]==3)
  				{
	  				address(0x80);
			  		show3("LOGGED_IN");	 	 	 	
   			 	}
  			 	else
				{
					address(0xC0);
					show4("TERMINATED");
				}
   			}	 
		}
	}		 
   		
	    				
					    
	