#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;

void Rezultats(string Jautajums[],int NepareizasAtbildesSk, int PareizasAtbildesSk,int NepareizasAtbildes[],int y){
    int PareizasAtbildes[9];
     system("clear");
    cout<<"Pareizo atbilžu skaits: "<<PareizasAtbildesSk;
    cout<<"Nepareizo atbilžu saits: "<<NepareizasAtbildesSk;
   
    for(int i=0;i<NepareizasAtbildes[y].length;i++){
        cout<<Jautajums[NepareizasAtbildes[i]];
        cout<<PareizasAtbildes[NepareizasAtbildes[i]];
    }
}
int main() {
    int Atbilde,NepareizasAtbildesSk,PareizasAtbildesSk,x,y;
    string Jautajums[9];
    int NepareizasAtbildes[y];
    int PareizasAtbildes[9];
    
cout<<"Kontroles tests par pēcnosacījumiem (Atbildes jāvada pēc cipara lielumu secības sākot ar mazāko)";
    fflush(stdout);
    
    sleep(7);
    
    system("clear");
    cout<<"Sākās tests";
    fflush(stdout);
    
    sleep(2);
    
    system("clear");
    do{
          cout<<Jautajums[x];
            cin>>Atbilde;
       
        if(Atbilde==PareizasAtbildes[x]){
            PareizasAtbildesSk++;
        }else{
         NepareizasAtbildesSk++;
            NepareizasAtbildes[y]=x;
            y++;
        }
        x++;
        system("clear");
    }while(x<10);
    Rezultats(Jautajums[],NepareizasAtbildesSk,PareizasAtbildesSk,NepareizasAtbildes[y],y);
    
}