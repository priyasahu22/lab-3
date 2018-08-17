#include<iostream>
using namespace std;
int main()
{
   cout<<"Assignment Operators\n";
   int a=2,b=4,sum1,diff1,multiply1,divide1,modulus1;
   float c=1.2,d=4.2,sum2,diff2,multiply2,divide2,sum3,diff3,multiply3,divide3;
  sum1=a+b;
  sum2=c+d;
  diff1=b-a;
  diff2=d-c;
  multiply1=a*b;
  multiply2=c*d;
  divide1=b/a;
  divide2=d/c;
  sum3=a+c;
  diff3=a-c;
  multiply3=a*c;
  divide3=c/a;
  modulus1=b%a;
 
   
cout<<"SUM OF TWO INTEGER NUMBERS "<<a<<"and"<<b<<" is "<<sum1<<endl;
cout<<"DIFFERENCE OF  TWO integer NUMBERS "<<a<<"and"<<b<<" is "<<diff1<<endl;
cout<<"MULTIPICATION OF  TWO integer NUMBERS "<<a<<"and"<<b<<" is "<<multiply1<<endl;
cout<<"DIVISION OF TWO INTEGER NUMBERS "<<a<<"and"<<b<<" is "<<divide1<<endl;
cout<<"MODULUS OPERATOR between"<<a<<"and"<<b<<" is "<<modulus1<<endl;

cout<<"SUM OF TWO float NUMBERS "<<c<<"and"<<d<<" is "<<sum2<<endl;
cout<<"DIFFERENCE OF  TWO float NUMBERS "<<c<<"and"<<d<<"  is "<<diff2<<endl;
cout<<"MULTIPICATION OF  TWO float NUMBERS "<<c<<"and"<<d<<"  is  "<<multiply2<<endl;
cout<<"DIVISION OF TWO float NUMBERS "<<c<<"and"<<d<<" is "<<divide2<<endl;

        
cout<<"SUM OF one INTEGER NUMBER one FLOAT NUMBER "<<a<<"and"<<c<<" is "<<sum3<<endl;
cout<<"DIFFERENCE OF  ONE integer NUMBER ONE FLOAT NUMBER "<<a<<"and"<<c<<" is "<<diff3<<endl;
cout<<"MULTIPICATION OF  ONE integer NUMBER ONE FLOAT NUMBER "<<a<<"and"<<c<<" is "<<multiply3<<endl;
cout<<"DIVISION OF ONE FLOAT NUMBER AND INTEGER NUMBER "<<c<<"and"<<a<<"  is "<<divide3<<endl;

}

