#include <iostream>

using namespace std;

int main () 
{
  bool PNr = false;
  double Rezult;
 // bool PoateRula = true;
  char Input;
  double Nr;
  
  for (int i = 0; i < i + 1; i++)
  {
     
    if (!PNr) 
    {
     
      PNr = true;
      cin >> Nr;
      Rezult = Nr;
    }
      
     
     cin >>Input;
     if (Input != '=') 
      {
        cin >> Nr;
      }  
     
    //}
    //cout<<"gdfg";

   // if (PoateRula) 
   // {
     //2 cout<<"gdfg";
      if (Input == '+') 
      {
        //cout<<"gdfg";
        Rezult += Nr;
      }
       if (Input == '-') 
      {
        Rezult -= Nr;
      } 
       if (Input == '/') 
      {
        Rezult /= Nr;
      } 
       if (Input == '*') 
      {
        Rezult *= Nr;
      } 
       if (Input == '=') 
      {
        cout << Rezult << endl;
        PNr = false;
        Rezult = 0;
      } 
      if (Input == '\n') 
      {
        cout << Rezult;
         PNr = false;
          Rezult = 0;
      }
      cout <<Rezult << endl;
      PNr = false;
      Rezult = 0;
   // }

    /*if (Input == ' ') 
    {
      PoateRula = true;
    } else 
    {
      PoateRula = false;
    }*/
  }
  
}