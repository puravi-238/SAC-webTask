#include<iostream>

using namespace std;

/*
According to definition you give for Armstrong number :
Armstrong number is a positive n-digit number that is equal to the sum of the
nth powers of their digits.

all single digit number is Armstrong number :
i.e ; 7^1 = 7 //Armstrong number
and  let 12 ; 1^2 + 2^2 = 5 (not equal to 12 so not a Armstrong)

earlier I used to think we have to take sum of the cube of individual digits
and think 0 , -1 , -153 are also Armstrong numbers   :') ♥ ☻
*/

int main()
{
          int n,x,y;
          int bk,c,sum=0,r;

          cout<<"\n\n Enter a Number : ";
          cin>>n;

          cout<<"\n\n Armstrong numbers between  1 to "<<n<<" are  : ";
          for(x=1;x<=n;x++)
          {
                    sum=0;
                    c=0;
                    bk = x; // taking backup

                    // count number of digit
                    while(bk!=0)
                    {
                           bk = bk/10;
                           c++;
                    }

                    bk = x;
                    while(bk!=0)
                    {
                          r = 1;
                          for(y=1;y<=c;y++)
                                 r =  r*(bk%10);

                            sum += r;
                            bk /= 10;
                    }

                    if(sum == x)
                        cout<<"   "<<x;
          }

          return 0;
}
