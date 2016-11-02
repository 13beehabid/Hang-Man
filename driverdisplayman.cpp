#include"DisplayMan.h"
#include<iostream>
using namespace std;


//DRIVER CLASS FOR STICKMAN DISPLAY FUNCTIONS..


void DisplayStickMan::DisplaySMHead()
{
	
 // The \\ will translate as '\' because it is a special char 
cout<<endl<<endl
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 



}
void DisplayStickMan::DisplaySMArm1()
{


cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 

}
void DisplayStickMan::DisplaySMArm2()
{

{ 
  cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|\\ "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 
 } 


}
void DisplayStickMan::DisplaySMLeg1()
{


 cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|\\ "<<endl 
   <<"   |     \\ "<<endl 
   <<"   |       "<<endl 
   <<"  ============"<<endl<<endl; 


}
void DisplayStickMan::DisplaySMDead()
{

  cout<<endl<<endl 
   <<"   +----+     "<<endl 
   <<"   |    |     "<<endl 
   <<"   |    O     "<<endl 
   <<"   |   /|\\   "<<endl 
   <<"   |   / \\   "<<endl 
   <<"   |          "<<endl 
   <<"  ============"<<endl<<endl; 


}

void DisplayStickMan::DisplaySMhanged()
{

  cout<<endl<<endl 
   <<"   +----+     "<<endl 
   <<"   |    |     "<<endl 
   <<"   |    x     "<<endl<<endl
    
   <<"   |   /|\\   "<<endl 
   <<"   |   / \\   "<<endl 
   <<"   |          "<<endl 
   <<"  ============"<<endl<<endl; 
}