#include <iostream>

using namespace std;

int main()
{
   int L = 0,i = 0;

   int leitura = 0, Maior = 0;

   while(cin >> L)
   {
       for(i = 0; i < L; i++)
       {
           cin >> leitura;
           if( Maior < leitura)
           {
               Maior = leitura;
           }
       }
       if(Maior < 10)
       {
           cout << "1" << endl;
       }
       else
       {
           if( Maior >= 10 && Maior < 20)
           {
               cout << "2" << endl;
           }
           else
           {
               cout << "3" << endl;
           }
       }
       Maior = 0;
   }
    return 0;
}
