#include <iostream>
#include <unistd.h>

using namespace std;

void Rezultats(string Jautajums[], int NepareizasAtbildesSk, int PareizasAtbildesSk, int NepareizasAtbildes[],int PareizasAtbildes[], int y) {

    system("clear");
    cout << "Nepareizo atbilžu skaits: " << NepareizasAtbildesSk << "\n";
    cout<<"Gala vērtējums: "<<PareizasAtbildesSk<<"/10\n\n";

    if(PareizasAtbildesSk==10){
        cout<<"\t\t\tApsveicam! Jūs nokārtojāt testu izcili!";
    }else{
        cout<<"\t\t\tNEPAREIZI ATBILDĒTIE JAUTĀJUMI!\n";
    }
    

    for (int i = 0; i < y; i++) {
        
        cout <<"\n"<<NepareizasAtbildes[i]+1<<". Jautājums\n"<<Jautajums[NepareizasAtbildes[i]] << " " <<"Pareizā atbilde: "<<PareizasAtbildes[NepareizasAtbildes[i]]<<"\n\n";
    }
}

int main() {
    int Atbilde, NepareizasAtbildesSk = 0, PareizasAtbildesSk = 0, x = 0, y = 0;
    string Jautajums[10] = {
        "Kuri no dotajiem pārbauda vai pēcnosacījuma mainīgais ir vismaz vienads?\n\n1) <\n2) <=\n3) >\n4) >=\n",
        "Kuras divas koda līnijas ir svarigas lai pēcnosacijums stradatu?\n\n1) do{\n2) for(){\n3) }else{\n4) }while()\n",
        "Kas šijā kodā pietrūkst?\n\nint x = 1;\n... {\nx = ... + 1;\n} while (x < 5);\n\n1) Mainigais i\n2) while\n3) Mainigais x\n4) do\n",
        "Kuri NAV pēcnosacijuma kritēriju papildus nosacījumu funkcijas?\n\n1) !>=\n2) &&\n3) ++\n4) //\n",
        "Kurus skaitļus izvadīs šis kods?\n\nint i=1,x=0;\ndo{\ni=i+3*i;\ncout<<i;\nx++;\n}while(x<2);\n\n1) 4\n2) 16\n3) 5\n4) 10\n",
        "Cik reizes pēcnosacijuma cikls var nostradat?\n\n1) Nulle reizes\n2) Vienu reizi\n3) Vairākas reizes\n4) Mazāk par vienu reizi\n",
        "Kuri var but pēcnosacijuma kritēriji?\n\n1) do{...}while(x<9)\n2) do{...}while(x!=6 && y<9)\n3) do{...}while(y=0; y<8; y++)\n4) do{...}while(x=\"LAUVA\" || y=\"ZEBRA\")\n",
        "Kurus datu tipus var izmantot pēcnosacijuma ciklā?\n\n1) double\n2) char\n3) float\n4) void\n",
        "Kādai jābut ievadei lai cikls beigtu savu darbibu?\n\nstring a,b;\ndo{\ncout<<\"1. Ievade: \";\ncin>>a;\ncout<<\"2. Ievade: \";\ncin>>b;\n}while(a!=\"Viens\" || b!=\"Divi\");\n\n1) a=\"Viens\"\n2) a=\"Viens\" un b=\"Divi\"\n3) b=\"Divi\"\n4) a=1 un b=2\n",
        "Kuri no šiem apgalvojumiem ir patiesi?\n\n1) Pēcnosacijuma cikls var nenostradat nevienu reizi\n2) Pēcnosacijuma ciklā var izveidot vairakus nosacijumus priekš tā apturēšanas\n3) Pēcnosacijuma cikls apstasies kad to nosacijums ir patiess\n4) Pēcnosacijuma ciklā, mainigo vertibas var mainīties\n"
    };
    int NepareizasAtbildes[10];
    int PareizasAtbildes[10] = {24, 14, 34, 134, 12, 23, 124, 123, 13, 24};

    cout << "Kontroles tests par pecnosacijumiem.\nPareizas atbildes būs divas vai trīs.\nAtbildēs jāvada atbilžu varianta nummurs augošā secībā (Piemers: 134)";
    fflush(stdout);
    
    sleep(7);
    
    system("clear");
    cout << "Sākas tests";
    fflush(stdout);
    
    sleep(2);
    
    system("clear");
    do {
        cout << x + 1 << ". Jautājums";
        cout << "\n-----------------------------\n"<<Jautajums[x]<<"\n-----------------------------\n";
        cout<<"Atbilžu ievade: ";
        cin >> Atbilde;
       
        if (Atbilde == PareizasAtbildes[x]) {
            PareizasAtbildesSk++;
        } else {
            NepareizasAtbildesSk++;
            NepareizasAtbildes[y] = x;
            y++;
        }
        x++;
        system("clear");
    } while (x < 10);
    Rezultats(Jautajums, NepareizasAtbildesSk, PareizasAtbildesSk, NepareizasAtbildes,PareizasAtbildes, y);

    return 0;
}