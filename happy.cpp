
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
  int i;
  char name[20];

  cout<<"\nEnter your name b'day girl/boy !!!.. ";
  gets(name);

  system("cls");
  Sleep(500);//Sleep used for delay 
  Beep(600, 600);//Beep is used for create beep sound

  //

  cout<<"\n\t\t          iiiiii       \n";
  Sleep(500);
  Beep(600, 500);
  cout<<"\t\t      __iiiiiiiiii__  \n";
  Sleep(500);
  Beep(500, 500);
  cout<<"\t\t     | *  HAPPY   * |  \n";
  Sleep(500);
  Beep(600, 500);
  cout<<"\t\t   _     BIRTHDAY     _  \n";
  Sleep(500);
  Beep(500, 500);
  cout<<"\t\t  |    *  DEAR    *    |  \n";
  Sleep(600);
  Beep(600, 500);
  cout<<"\t\t          "<<name<<"              \n";
  Sleep(500);
  Beep(500, 500);
  cout<<"\t\t|_*_____***____***_____*_| \n";
  Sleep(500);
  Beep(600, 500);
  Beep(400, 500);
  Beep(300, 500);
  Beep(200, 500);
  Beep(100, 500);
  Beep(50, 500);
  cout<<"\n\n\tWISH YOU MANY MANY HAPPY RETURNS OF THE DAY\n";
  Sleep(300);
  cout<<"\n\t\tWish you success! God bless you\n";
  cout<<"\nFrom: !!!..sagar..!!!";  cout<<"\n  To: #"<<name<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~\n";

return 0;
}