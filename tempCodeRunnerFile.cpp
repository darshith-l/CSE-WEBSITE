#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,k,flag=1,score=0,i=0,j;
      cin>>n>>k;

      string s;
      cin>>s;
      
      while(i<n)
      {
         
         for(j=i;j<i+k;j++)
         {
            if(s[j]==1)
            {
               flag=0;
               break;
            }
         }

         if(flag==1)
         {
            score++;
         }

         i=j+1;
      }

      cout<<score;
   }    
}