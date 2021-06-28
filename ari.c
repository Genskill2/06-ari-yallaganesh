#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<cs50.h>
#include<ctype.h>
string ari(string s)
{
     float l=0,w=0,sen=0;
     for(int i=0;s[i]!='\0';i++)
    {
         if (isalnum(s[i]))
         {
             l+=1;
         }
        if (s[i]=='.'||s[i]=='!'||s[i]=='?')
         {
             sen+=1;
         }
         if(s[i]==' ')
         {
             w=w+1;
         }
    }
         float score=4.7*(l/w)+0.5*(w/sen)-21.43;
         int x=(int)(score);
         if(score-x!=0)
         {
             score=x+1;
         }
         if(score==1)
         {
             return "Kindergarten";
              
         }
         if(score==2)
         {
             return "First/Second Grade";
         }
         if(score==3)
         {
             return "Third Grade";
         }
         if(score==4)
         {
             
             return "Fourth Grade"; 
         }
         if(score==5)
         {
             return "Fifth Grade";
         }
         if(score==6)
         {
             
             return "Sixth Grade";
         }
         if(score==7)
         {
             return "Seventh Grade";
         }
         if(score==8)
         {
             return "Eighth Grade";
         }
         if(score==9)
         {
             return "Ninth Grade";
         }
         if(score==10)
         {
             return "Tenth Grade";
         }
         if(score==11)
         {
             return "Eleventh Grade";
         }
         if(score==12)
         {
             return "Twelfth grade";
         }
         if(score==13)
         {
             return "College student";
         }
         if(score==14)
         {
             return "Professor";
         }
}
