#include <iostream>

using namespace std;
void primenum(int y);

int main()
{
  int num = 0;
  cout<< "Input a number:" << endl ;
  cin>> num ;
  primenum(num) ;

}

void primenum(int y)
{
    int totalsum = 0 ;
   for(int m = y; m>0 ; m--){
      bool not_pimenum = false ;
      for (int n = 2 ; n<m ; n++){
          if (m%n == 0){
            not_pimenum = true ;
            n = m ;
          }
      }
      if (not_pimenum == false){
            totalsum = totalsum + m ;
      }
   }
   cout<< "The sum of all prime numbers less than the given number is: " << totalsum ;
}
