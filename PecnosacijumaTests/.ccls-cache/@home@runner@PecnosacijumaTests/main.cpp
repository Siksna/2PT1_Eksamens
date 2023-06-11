#include <iostream>
#include <unistd.h>

using namespace std;

#define NOTIRIT "\033[0m"
#define TREKNS "\033[1m"
#define PASVITROT "\033[4m"
#define SARKANS "\033[31m"
#define ZALS "\033[32m"
#define DZELTENS "\033[33m"
#define ZILS "\033[34m"
#define ROZA "\033[35m"
#define GAISIZILS "\033[36m"

void Rezultats(string Jautajums[], int NepareizasAtbildesSk, int PareizasAtbildesSk, int NepareizasAtbildes[],int PareizasAtbildes[], int y) {

    system("clear");
    cout << "Nepareizo atbilžu skaits: " <<SARKANS<<TREKNS<< NepareizasAtbildesSk << "\n"<<NOTIRIT;
    cout<<"Gala vērtējums: "<<ROZA<<PareizasAtbildesSk<<"/10\n\n"<<NOTIRIT;

    if(PareizasAtbildesSk==10){
        cout<<ROZA<<PASVITROT<<"\t\t\tApsveicam! Jūs nokārtojāt testu izcili!"<<NOTIRIT;
    }else{
        cout<<SARKANS<<TREKNS<<PASVITROT"\t\t\tNEPAREIZI ATBILDĒTIE JAUTĀJUMI!\n"<<NOTIRIT;
    }
    

    for (int i = 0; i < y; i++) {
        
        cout <<"\n"<<SARKANS<<NepareizasAtbildes[i]+1<<". Jautājums\n"<<NOTIRIT<<Jautajums[NepareizasAtbildes[i]]<< " " <<ZALS<<"\nPareizās atbildes: "<<TREKNS<<PareizasAtbildes[NepareizasAtbildes[i]]<<NOTIRIT<<ZILS<<"\n-----------------------------------\n"<<NOTIRIT;
    }
}

int main() {
    int Atbilde, NepareizasAtbildesSk = 0, PareizasAtbildesSk = 0, x = 0, y = 0;
    string Jautajums[10] = {
        "Kuri no dotajiem pārbauda vai pēcnosacījuma mainīgais ir vismaz vienads?\n\n1) <\n2) <=\n3) >\n4) >=\n",
        "Kuras divas koda līnijas ir svarigas lai pēcnosacijums stradatu?\n\n1) do{\n2) for(){\n3) }else{\n4) }while()\n",
        "Kas šijā kodā pietrūkst?\n\nint x = 1;\n... {\nx = ... + 1;\n} while (x < 5);\n\n1) Mainigais i\n2) while\n3) Mainigais x\n4) do\n",
        "Kuri NAV pēcnosacijuma kritēriju papildus nosacījumu funkcijas?\n\n1) !>=\n2) &&\n3) ++\n4) //\n",
        "Kurus skaitļus izvadīs šis kods?\n\nint i=1,x=0;\ndo{\ni=i+3*i;\ncout<<i;\nx++;\n}while(x<2);\n\n1) 4\n2) 16\n3) 5\n4) 64\n",
        "Cik reizes pēcnosacijuma cikls var nostradat?\n\n1) Nulle reizes\n2) Vienu reizi\n3) Vairākas reizes\n4) Mazāk par vienu reizi\n",
        "Kuri var but pēcnosacijuma kritēriji?\n\n1) do{...}while(x<9)\n2) do{...}while(x!=6 && y<9)\n3) do{...}while(y=0; y<8; y++)\n4) do{...}while(x=\"LAUVA\" || y=\"ZEBRA\")\n",
        "Kurus datu tipus var izmantot pēcnosacijuma ciklā?\n\n1) double\n2) char\n3) float\n4) void\n",
        "Kādai jābut ievadei lai cikls beigtu savu darbibu?\n\nstring a,b;\ndo{\ncout<<\"1. Ievade: \";\ncin>>a;\ncout<<\"2. Ievade: \";\ncin>>b;\n}while(a!=\"Viens\" || b!=\"Divi\");\n\n1) a=\"Viens\"\n2) a=\"Divi\"\n3) b=\"Divi\"\n4) b=\"Viens\"\n",
        "Kuri no šiem apgalvojumiem ir patiesi?\n\n1) Pēcnosacijuma cikls var nenostradat nevienu reizi\n2) Pēcnosacijuma ciklā var izveidot vairakus nosacijumus priekš tā apturēšanas\n3) Pēcnosacijuma cikls apstasies kad to nosacijums ir patiess\n4) Pēcnosacijuma ciklā, mainigo vertibas var mainīties\n"
    };
    int NepareizasAtbildes[10];
    int PareizasAtbildes[10] = {24, 14, 34, 134, 12, 23, 124, 123, 13, 24};

    cout <<TREKNS<<GAISIZILS<< "\t\t\t\tKontroles tests par pēcnosacijumiem!\n\n"<<NOTIRIT<<DZELTENS<<"Pareizas atbildes būs divas vai trīs.\n"<<TREKNS<<"\nAtbildēs jāvada atbilžu varianta nummuri augošā secībā "<<NOTIRIT<<PASVITROT<<ZALS<<TREKNS<<"(Piemērs: 134)"<<NOTIRIT;
    fflush(stdout);
    
    sleep(7);
    
    system("clear");
    cout <<ZALS<<PASVITROT<<TREKNS<<"SĀKAS TESTS"<<NOTIRIT;
    fflush(stdout);
    
    sleep(2);
    
    system("clear");
    do {
        cout <<ZALS<< x + 1 << ". Jautājums"<<NOTIRIT;
        cout <<SARKANS<< "\n-----------------------------\n"<<NOTIRIT<<TREKNS<<Jautajums[x]<<NOTIRIT<<SARKANS<<"\n-----------------------------\n"<<NOTIRIT;
        cout<<PASVITROT<<ZILS<<"Atbilžu ievade:"<<NOTIRIT<<" ";
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