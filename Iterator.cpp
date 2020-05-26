#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;
 
	struct student
{
        string imie,nazwisko,pesel,adres;
        
		int adres;
};
 


class garazzzz
{
                vector <struct student> spis;
       
			public:
            //    void wprowadz();
                void wypisz();
                void zapiszDoPliku(const char *);
                void wczytajZPliku(const char *);                
};
 
 
 
 /*
void garazzzz::wprowadz()
{
        int iloscUczniow;
        struct student wprowadzany;
        
	cout << "Ilosc aut: ";
    cin  >> iloscUczniow;
        for (int i=0; i<iloscUczniow; i++)
        {
                
				cout << "Marka,Model,Rok,Pojemnosc: ";
                cin >> wprowadzany.adres
                        >> wprowadzany.marka
                        >> wprowadzany.model
                        >> wprowadzany.rok
                        >> wprowadzany.pojemnosc;
                spis.push_back(wprowadzany); //TU WSTAW do tablicy nowy rekord
        }
}
 */
 
 
 
void garazzzz::wypisz()
{
string a;
ifstream plik2;
    plik2.open("1a.txt");  
    if(plik2.good())
     while(!plik2.eof())  
           
                         {
                             
                         plik2>>a;  
                         cout<<a;
                         cout<<endl; //  na ekranie
                         }
    plik2.close();
}
 void garazzzz::wczytajZPliku(const char *nazwa)
{
	struct student wprowadzany;
ifstream plik;

	plik.open(nazwa);  //otwarcie pliku
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
                 // (vector<struct student>::iterator it = spis.begin(); it != spis.end(); ++it)
                 {
                plik    >> wprowadzany.adres 
                        >> wprowadzany.imie 
                        >> wprowadzany.nazwisko 
                        >> wprowadzany.pesel
                        >> wprowadzany.adres;
                         spis.push_back(wprowadzany); //TU WSTAW do tablicy nowy rekord
				 }
                  
                   
                   plik.close();  //zamkniecie pliku tekstowego

cout<<endl;
}
 
 
 
void garazzzz::zapiszDoPliku(const char *nazwa)
{
        ofstream plik1;
        plik1.open(nazwa);
        for (vector<struct student>::iterator it = spis.begin(); it != spis.end(); ++it)
        {
                  plik1 <<"["<<"{"<<it->adres<<":"<<it->imie<<":"<<it->nazwisko<<":"<<it->pesel<<":"<<it->adres<<"}"<<"]"<< "\n";
               cout <<"["<<"{"<<it->adres<<":"<<it->imie<<":"<<it->nazwisko<<":"<<it->pesel<<":"<<it->adres<<"}"<<"]"<< "\n";
        }
        plik1.close();  
}

	void menu()
    {
    cout<<"1.Wczytaj \n";
    cout<<"2.Wypisz \n";
    cout<<"3.Zapisz\n";
    cout<<"4.Koniec\n";
}
 
 
int main(int argc, char** argv) {
   
    {
   
   garazzzz ti;
    int wybor;
    do{
   
   menu();
    cin >> wybor;
    switch (wybor)
    {
         
        case 1:  
            ti.wczytajZPliku("1a.txt");
        break;
		
        case 2:
            ti.wypisz();
        break;
		
        case 3:
            ti.zapiszDoPliku("1b.txt");
        break; 
    }
      
     
 }while(wybor!=4);
 }
}
