// Uzrakstīt programmu, kas realizē sekojošo uzdevumu ( cikls jāatkārto tik ilgi, kamēr lietotājs to vēlēsies ).

//Ciklā tiek izsaukta funkcija, kurā kā parametrus saņem taisnstūra malu garumu un pārsūta tā laukumu.

#include <iostream>
using namespace std;

float laukumaAprekinasana(float x, float y) {
  float laukums = x * y;
  return laukums;
}

int main() {
  float x, y, laukums;
  string atbilde;
  bool cikls;

  //Atkārto programmu tik ilgi cik lietotājs to vēlas
  do {
    cout << "Ievadiet taisnstura malas!\n";
    //Malu ievadišana
    
    do {
      cout << "mala x: ";
      cin >> x;
      // Pārbauda vai skaitlis ir lielāks par 0
      if(x < 1){
        cout << "Ludzu ievadiet skaitli lielāku par 0!\n";
      }
    } while (x < 1);
    
    do {
      cout << "\nmala y: ";
      cin >> y;
      // Pārbauda vai skaitlis ir lielāks par 0
      if(y < 1){
        cout << "Ludzu ievadiet skaitli lielāku par 0!\n";
      }
    } while (y < 1);
      
    //Funkcijas izsaukšana
    cout << x << " * " << y;
    cout << "\nTaisnstura laukums ir: " << laukumaAprekinasana(x, y) << "\n";
    //Programmas atkārtošana
    cout << "\nVai velaties atkartot programmu? (y/n)";
    cin >> atbilde;
    //Atbildes pārbaude
    if(atbilde == "yes" || atbilde == "Yes"|| atbilde == "y" || atbilde == "Y" || atbilde == "ja" || atbilde == "Ja"){
      cikls = true;
    } else break;
  } while(cikls == true);
    //Programmas beigas
    cout << "\nProgrammas Beigas!";
}
