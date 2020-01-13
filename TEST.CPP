#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<iomanip.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
class Student { int Studtid, clas, marks, ID ;
		     char name[25], sec, ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10 ;
		     int mobno ;
		   public:
		     void readStudent()
		{
		     calcStudtid() ;
		     clrscr() ;
		     cout<<"Enter Your Details Correctly .\n\n" ;


		     cout<<"Name : " ;

		     gets(name) ;

		     cout<<"Class : " ;

		     cin>>clas ;

		     cout<<"Section : " ;

		     cin>>sec ;

		     cout<<"Parents Mobile No. : " ;

		     cin>>mobno ;

		     cout<<"\nYour Student Test ID Is : "<<Studtid ;
		     cout<<setw(-2) ;            //set viewing position
		     textcolor(CYAN + BLINK) ;
		     cprintf("\nPlease Note It Down For Your Future Reference .") ;

		}
		     void calcStudtid()
		     {
		       int randnum,i ;
		       unsigned int seedval ;
		       time_t t ;
		       seedval = (unsigned) time (&t) ;
		       srand(seedval) ;

		       Studtid=rand();
		     }
		 public :
		 void testStudent()
	       {   clrscr() ;
		   cprintf("Enter Your Student Test ID : ") ;
		   cin>>ID ;
		   if(ID == Studtid)
		   {
		   clrscr() ;
		   textcolor(YELLOW) ;
		   cprintf("Welcome Mst. ") ;
		   cout<<name ;
		   cout<<setw(50)<<"Max. Marks : 50" ;
		   textcolor(MAGENTA) ;
		   cprintf("\nQ1. Functions that are necessarily responsible for taking values or data to memory are called : \n\n ") ;
		   cout<<"A. Class     \t B. Constructor\n " ;
		   cout<<"C. Destructor\t D. Pre-Processors\n " ;
		   cin>>ch1 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ2. Two functions defined by same name but different parametres is called : \n") ;
		   cout<<"A. Inheritance \t B. Modularity\n " ;
		   cout<<"C. Polymorphism\t D. OOP\n " ;
		   cin>>ch2 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ3. The collection of variables refrenced under one name is called : \n") ;
		   cout<<"A. Object \t B. Array\n " ;
		   cout<<"C. Class  \t D. Structures\n " ;
		   cin>>ch3 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ4. What does the `~` sign represent before a function ?\n") ;
		   cout<<"A. Differnce \t B. Constructor\n " ;
		   cout<<"C. Destructor\t D. Similarity\n " ;
		   cin>>ch4 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ5. Which header file is required for using gets() & puts() ?\n") ;
		   cout<<"A. iostream.h\t B. ctype.h\n " ;
		   cout<<"C. stdlib.h  \t D. stdio.h\n " ;
		   cin>>ch5 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ6. A class defined under a class is called : \n ") ;
		   cout<<"A. Nesting     \t B. Inheritance\n " ;
		   cout<<"C. Polymorphism\t D. Argument\n " ;
		   cin>>ch6 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ7. A function, not returning a result is called : ") ;
		   cout<<"A. Null        \t B. Void\n " ;
		   cout<<"C. All of above\t D. None of above\n " ;
		   cin>>ch7 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ8. What will you use to have an audio-visual chat with an expert sitting in a far away place to fix-up a technical issue ?\n ") ;
		   cout<<"A. VOIP \t B. E-mail\n " ;
		   cout<<"C. FTP  \t D. Bluetooth\n " ;
		   cin>>ch8 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ9. How many digits can be accumulated in a Hexadecimal integer constant ?\n ") ;
		   cout<<"A. 8  \t B. 10\n " ;
		   cout<<"C. 16 \t D. 12\n " ;
		   cin>>ch9 ;

		   textcolor(MAGENTA) ;
		   cprintf("\nQ10. Simultaneous use of both Constructor as well as Destructor is necessary in order to :\n ") ;
		   cout<<"A. Only 1 can't be used .  \t B. Remove the data placed by constructor .\n " ;
		   cout<<"C. One is part of another .\t D. None of the above .\n " ;
		   cin>>ch10 ;
		   }
		   else
		 {  textcolor(RED) ;
		   cprintf("Please Check Your Student Test ID") ;
		 }
	       }
	       public :
	       void marksStudent()
	       {
		  int marks = 0 ;
		    if(ch1 == 'B'|| ch1 =='b')
		   {  marks+= 5 ;
		   }
		     else marks-=1 ;

		    if(ch2 == 'C' || ch2 =='c')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch3 == 'D' || ch3 == 'd')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch4 == 'C' || ch4 =='c')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch5 =='D' || ch5 =='d')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch6 =='A' || ch6 =='a')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch7 =='C' || ch7 =='c')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch8 =='A' || ch8 =='a' )
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch9 =='C' || ch9 =='c' )
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

		    if(ch10 =='B' || ch10 =='b')
		   {  marks+=5 ;
		   }
		     else marks-=1 ;

	       }
	       public :
		   void resultStudent()
	       {                                 // To Add Checking Of ID
		   clrscr() ;
		   int perc, CGPA ;
		   perc = (marks/50)*100 ;
		   CGPA = perc / 9.5 ;
		   if(perc>=95)
		   CGPA = 10 ;
		   else
		   textcolor(CYAN) ;
		   cout<<setprecision(1) ;
		   cprintf("You Scored : ") ;
		   cout<<CGPA ;
		   { if(CGPA>=3.6)
		     textcolor(GREEN) ;
		     else
		     textcolor(RED) ;
		     cprintf(" CGPA") ;
		   }
		   cprintf("\nWanna Convert It To Percentage") ;
		   cout<<"(y/n) : " ;
		   cin>>ch ;
		   if(ch == 'y' || ch == 'Y')
		 { cprintf("You Scored : ") ;
		   cout<<perc ;
		   { if(perc>=33)
		     textcolor(GREEN) ;
		     else
		     textcolor(RED) ;
		     cprintf(" %") ;
		   }
		 }
		   else
		   cout<<"OK" ;
	       }
	       public :
	       void abtStudent()
	       { clrscr() ;
		 cout<<"\n\nABOUT" ;
		 cout<<"\n\n\nOrganised By : Naval's Academy\n" ;
		 cout<<"\nPowered By : Mst.Swapnil Soni\n" ;
		 cout<<"\nKnowledge Partner : Textbook of Computer Science - 12\n" ;
		 cout<<"\nAssisted By : Mr.Sumit Samajhdaar\n" ;
		 cout<<"\nDeveloped By : Mst.Swapnil Soni\n" ;
		 cout<<"\nCopyright : Mst.Swapnil Soni\n\n" ;
	       }

	      };

       int main()
       {   int choice ;
	   char ch11 ;
	   Student XII ;
	   clrscr() ;
	   textcolor(BLUE) ;
	   cprintf("Welcome To The Test") ;
	   cout<<setw(55)<<"Powered By : Swapnil Soni" ;
	   cout<<"\n\n 1. Registration\n " ;
	   cout<<"2. Appear Test\n " ;
	   cout<<"3. Result\n " ;
	   cout<<"4. About\n " ;
	   cout<<"5. Exit\n " ;
	   textcolor(CYAN) ;
	   cprintf("Enter Your Choice : ") ;
	   do
	 { cin>>choice ;

	switch(choice)
	{
	    case 1 : XII.readStudent() ;
		     break ;
	    case 2 : XII.testStudent() ;
		     break ;
	    case 3 : XII.resultStudent() ;
		     break ;
	    case 4 : XII.abtStudent() ;
		     break ;
	    case 5 : textcolor(RED) ;
		     cprintf("Exiting...") ;
		     exit(0) ;
	    default: textcolor(RED + BLINK) ;
		     cprintf("Wrong Choice") ;
		     break ;
	}
	textcolor(CYAN) ;
	cout<<setw(2)<<"\nGo To Main Menu (y/n) : " ;
	cin>>ch11 ;
	if(ch11=='y' || ch11=='Y')
       { clrscr() ;
	textcolor(BLUE) ;
	cprintf("Main Menu") ;
	cout<<setw(55)<<"Powered By : Swapnil Soni" ;
	cout<<"\n\n 1. Registration\n " ;
	cout<<"2. Appear Test\n " ;
	cout<<"3. Result\n " ;
	cout<<"4. About\n " ;
	cout<<"5. Exit\n " ;
	textcolor(CYAN) ;
	cprintf("Enter Your Choice : ") ;
       }
	else
	cout<<"\nExiting..." ;
	 }while(ch11=='y' || ch11=='Y') ;
	 return 0 ;
       }