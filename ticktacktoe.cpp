#include<iostream>
using namespace std;
void frrame();    // main frame of code when its Run
char sign;
int a,number,player=1;
int possibles();           //possibles condition when code run
void welcome();


char arr[9]={'1','2','3','4','5','6','7','8','9'}; 
int main()
{
	welcome();
  do
   {
    frrame();
    if(player%2==1)
    {
    player=1;
    }
    else
    player=2;
   
   if(player==1)
   {
   cout<<"\n\nyour sign is X\n";
   sign='X';
   }
   else
   {
   cout<<"\nyour sign is O";
   sign='O';
     }


    cout<<"\nplayer "<<player<<" enter the number= ";
    cin>>number;
  
    if(number==1 && arr[0]=='1')
     arr[0]=sign;
    else if(number==2 && arr[1]=='2')
     arr[1]=sign;
    else if(number==3 && arr[2]=='3')
     arr[2]=sign;
    else if(number==4 && arr[3]=='4')
     arr[3]=sign;
    else if(number==5 && arr[4]=='5')
     arr[4]=sign;
    else if(number==6 && arr[5]=='6')
     arr[5]=sign;
    else if(number==7 && arr[6]=='7')
     arr[6]=sign;
    else if(number==8 && arr[7]=='8')
     arr[7]=sign;
    else if(number==9 && arr[8]=='9')
     arr[8]=sign;
    else if(number>='a' && number<='z' )
    {
     cout<<"invalid you enter a string";
     --player;
    }
    else if(number>='A' && number<='Z' )
    {
     cout<<"invalid you enter a string";
     --player;
    }
    else{
     cout<<"Invalid number";
    --player;
    
    }
     a=possibles();
     ++player; 
    }
     while(a==-1);
    if(a==1)
    {
      cout<<"congratulation ( *__* ) player "<<--player<<" win";
    }
   else
   cout<<"Game draw (^|^)";
   return 0;
}
void frrame()
{
	system("cls");
    
    cout<<"\n----------------------------------\n";
    cout<<"\n            =============  ";
    cout<<"\n           |             |  ";
    cout<<"\n             Ticktacktoe   ";
    cout<<"\n           |             |  ";
    cout<<"\n            ============= \n  ";
    cout<<"\n----------------------------------\n";
    cout<<"\n Choose player(1)=(X)  and  player(2)=(O)\n";
    cout<<"\n     "<<arr[0]<<"    |      "<<arr[1]<<"    |     "<<arr[2];
    cout<<"\n__________|___________|_________             ";                             // Game main frame screen 
    cout<<"\n     "<<arr[3]<<"    |      "<<arr[4]<<"    |     "<<arr[5];
    cout<<"\n__________|___________|_________   ";
    cout<<"\n     "<<arr[6]<<"    |      "<<arr[7]<<"    |     "<<arr[8];
    cout<<"\n__________|___________|_________ ";
    cout<<"\n          |           |     ";
}
int possibles()
{  
if(arr[0]==arr[1] and arr[1]==arr[2])
  return 1;
else if(arr[0]==arr[3] and arr[1]==arr[6])
  return 1;
else if(arr[1]==arr[4] and arr[4]==arr[7])
  return 1;
else if(arr[2]==arr[5] and arr[5]==arr[8])
  return 1;
else if(arr[6]==arr[7] and arr[7]==arr[8])
  return 1;
else if(arr[0]==arr[4] and arr[4]==arr[8])
  return 1;
else if(arr[2]==arr[4] and arr[4]==arr[6])
  return 1;
else if(arr[3]==arr[4] and arr[4]==arr[5])
  return 1;
else if(arr[6]==arr[7] and arr[7]==arr[8])
  return 1;
else if(arr[0]!='1' and arr[1]!='2' and arr[2]!='3' and arr[3]!='4' and arr[4]!='5' and arr[5]!='6' and arr[6]!='7' and arr[7]!='8' and arr[8]!='9')
  return 0;
else 
return -1;




  



    
}
void welcome()
{
cout<<"\n\n \n \n \n \n                                                WELCOME IN GAME\n\n"	;
cout<<"                                                  TIK TACK TOE\n\n\n\n";
     system("pause"); 
	
	
	
	
}
