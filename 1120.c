#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
   int tam = 0;
   string Dig = "";
   string  Num = "";
   string Resultante ="";

   cin >> Dig >> Num;

   while(!(Num == "0" && Dig == "0"))
   {
       bool verifica = false;

       tam = Num.size();
       for(int i = 0; i < tam; i++)
       {
           if(Num[i] != Dig[0])
           {
               if(!(Num[i] == '0' && verifica == false ))
               {
                   Resultante = Num[i] ;
                   cout << stoll(Resultante.c_str());
                   verifica = true;
               }
           }
       }
       if(verifica == false)
       {
           cout << 0;
       }
       cout << endl;
       Resultante = "";
       cin >> Dig >> Num;
   }
   return 0;
}

