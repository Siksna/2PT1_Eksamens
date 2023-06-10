#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;

void Rezultats(string Jautajums[],int NepareizasAtbildesSk, int PareizasAtbildesSk,int NepareizasAtbildes[],int y){
    int PareizasAtbildes[9];
     system("clear");
    cout<<"Pareizo atbilžu skaits: "<<PareizasAtbildesSk;
    cout<<"Nepareizo atbilžu saits: "<<NepareizasAtbildesSk;
   
    for(int i=0;i<y;i++){
        cout<<Jautajums[NepareizasAtbildes[i]]<<"\n"<<PareizasAtbildes[NepareizasAtbildes[i]];
    }
}
int main() {
    int Atbilde,NepareizasAtbildesSk,PareizasAtbildesSk,x,y;
    string Jautajums[10]={"Kuri no dotajiem pārbauda vai pēcnosacījumā mainīgais ir vismaz vienāds?\n\n1) <\n2) <=\n3) >\n4) >=\n\nAtbildes: ",
    
    "Kuras divas koda līnijas ir svarīgas lai pēcnosacījums strādātu?\n\n1) do{\n2) for(){\n3) }else{\n4) }while()\n\nAtbildes: ",
    
    "Kas šijā kodā pietrūkst?\n\nint x = 1;\n... {\nx = ... + 1;\n} while (x < 5);\n\n1) Mainīgais i\n2) while\n3) Mainīgais x\n4) do\n\nAtbildes: ",

    "Kuri NAV pēcnosacījuma kritēriju papildus nosacījumu funkcijas?\n\n1) !>=\n2) &&\n3) ++\n4) //\n\nAtbildes: ",
    
    "Kurus skaitļus izvadīs šis kods?\n\nint i=1,x=0;\ndo{\ni=i+3*i;\ncout<<i;\nx++;\n}while(x<2);\n\n1) 4\n2) 16\n3) 5\n4) 10\n\nAtbildes: ",

"Cik reizes pēcnosacījuma cikls var nostrādāt?\n\n1) Nulle reizes\n2) Vienu reizi\n3) Vairākas reizes\n4) Mazāk par vienu reizi\n\n Atbildes: ",

"Kuri var būt pēcnosacījuma kritēriji?\n\n1) do{...}while(x<9)\n2) do{...}while(x!=6 && y<9)\n3) do{...}while(y=0; y<8; y++)\n4) do{...}while(x=\"LAUVA\" || y=\"ZEBRA\")\n\nAtbildes: ",

"Kurus datu tipus var izmantot pēcnosacījuma ciklā?\n\n1) double\n2) char\n3) float\n4) void\n\nAtbildes: ",

"Kas jaievada lai cikls beigtu savu darbību?\n\nstring a,b;\ndo{\ncout<<\"1. Ievade: \";\ncin>>a;\ncout<<\"2. Ievade: \";\ncin>>b;\n}while(a!=\"Viens\" || b!=\"Divi\");\n\n1) a=\"Viens\"\n2) a=\"Viens\" un b=\"Divi\"\n3) b=\"Divi\"\n4) a=1 un b=2\n\nAtbildes: ",

"Kuri no šiem apgalvojumiem ir patiesi?\n\n1) Pēcnosacījuma cikls var nenostrādāt nevienu reizi\n2) Pēcnosacījuma ciklā var izveidot vairākus nosacījumus priekš tā apturēšanas\n3) Pēcnosacījuma cikls apstāsies kad to nosacījums ir patiess\n4) Pēcnosacījuma ciklā, mainīgo vērtības var mainīties\n\nAtbildes: "};
    int NepareizasAtbildes[y];
    int PareizasAtbildes[10]={24,14,34,134,12,23,124,123,13,24};

    
cout<<"Kontroles tests par pēcnosacījumiem.\nPareizas atbildes būs divas vai trīs tādēļ atbilde jāvada atbilžu nummurs pēc cipara lieluma secības sākot ar mazāko (Piemērs: 134)";
    fflush(stdout);
    
    sleep(7);
    
    system("clear");
    cout<<"Sākas tests";
    fflush(stdout);
    
    sleep(2);
    
    system("clear");
    do{
        cout<<x+1<<". Jautājums\n";
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
    }while(x<=9);
    Rezultats(Jautajums,NepareizasAtbildesSk,PareizasAtbildesSk,NepareizasAtbildes,y);
    
}