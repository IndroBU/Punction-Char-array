
///God Help Me
/*
    UVA - 10945
Indrojit Mondal
   Computer Science and Engineering, University Of Barisal
    */

#include<bits/stdc++.h>
using namespace std;


int main()
{

     char s[1000000];


    char p[33]={'!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/',':',';','<','=','>','?','@','[','\\',']','^','_','`','{','|','}','~',' '};
     //int k;
     while(cin.getline(s,1000000)){

            if(strcmp(s,"DONE")==0) return 0;
     int ct=0;
     string sp="";

     int ck=0;
     for(int i=0; s[i]!='\0'; i++)
     {
         ck=0;
         for(int k=0; k<33; k++){
         if(s[i]==p[k])
          ck=1;
         }
         if(ck==0) sp+=tolower(s[i]);

     }

     int l= sp.size();
     //
     string s1="",s2="";
    for(int i=0; i<l; i++)    s1+=sp[i];

    for(int i=l-1; i>=0; i--) s2+=sp[i];

    if(s1==s2) cout<<"You won't be eaten!"<<endl;
    else cout<<"Uh oh.."<<endl;
     }


    return 0;

}
