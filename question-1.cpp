/* There are 7 secret members in a gang. Each member is allocated a specific code which ranges from 1 to 99.
During a meeting all the members where invited but 9 gangsters arrived instead of 7. The specific code that was allocated to
the gang members add to 100. Now write a program to print the real 7 gangsters code out of 9.*/

#include<iostream>
using namespace std;
int main()
{
int val[9];
int sum=0;
for(int i=0;i<9;i++)
{
cin>>val[i];
sum+=val[i];
}
for(int i=0;i<9;i++)
{
  for(int j=i+1;j<9;j++)
    {
      if(sum - val[i]- val[j] ==100)
        for(int k=0;k<9;k++)
        {
          if(k!=i && k!=j)
          cout<<val[k];
         }
     }
  }
  return 0;
 }
      
