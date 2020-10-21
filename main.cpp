// Uzrakstīt programmu, kas realizē sekojošo uzdevumu ( cikls jāatkārto tik ilgi, kamēr lietotājs to vēlēsies ).

//Ciklā tiek izsaukta funkcija, kurā kā parametrus saņem taisnstūra malu garumu un pārsūta tā laukumu.

#include <iostream>
// #include <string>
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
    cout << "mala x: ";
    cin >> x;
    cout << "\nmala y: ";
    cin >> y;
    //Funkcijas izsaukšana
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