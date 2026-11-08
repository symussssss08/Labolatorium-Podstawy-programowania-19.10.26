// L. Podstawy programowania 19.10.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
#include<vector>
#include<algorithm>

using namespace std; 


struct WynikMnozenia
{
	int czynnik1; 
	int czynnik2; 
	int iloczyn; 
};

bool porownaj(const WynikMnozenia& x, const WynikMnozenia& y)
{
	return x.iloczyn < y.iloczyn; 
}

int main()
{
/*
	int liczba; 
	cout << " Podaj liczbe: ";
	cin >> liczba;

	if (liczba > 0)
	{
		cout << "liczba: " << liczba << " jest dodatnia" << endl;
	}
	else if (liczba < 0)
	{
		cout << "liczba: " << liczba << " jest ujemna" << endl; 
	}
	else
	{
		cout << "liczba: " << liczba << " jest rowna 0 " << endl; 
	}

	char znak = 'b'; 
	int liczba = 3; 
	int inna = 5; 

	if (znak == 'a' || znak == 'b')
		cout << " wykona sie jesli znak = a lub jesli znak = b" << endl; 

	if (znak == 'b' && liczba == 13)
		cout << "wykona sie jesli znak = b i jesli liczba = 13" << endl; 

	if (znak != 'A')
		cout << " wykona sie jesli znak bedzie rozny od wielkiej litery A" << endl; 
	
	if (znak == 'a' || (liczba == 3 && inna == 7))
		cout << "True" << endl;
	else
		cout << "Not true" << endl; 

	int opcja; 
	cout << "Wypisz z klawiatury 1,2, lub 3:\n";
	cin >> opcja; 

	switch (opcja)
	{
	case 1:
		cout << "Wybrales opcje 1\n"; 
		break;
	case 2:
		cout << "Wybrales opcje 2\n"; 
		break; 
	case 3:
		cout << "Wybrales opcje 3\n";
		break;
	default:
		 cout << "wybrano inna opcje niz 1,2,3\n";
		break;
	}
	

	// Zadanie 1 i 2 
	int a; 
	cout << "Podaj wartosc dla a: "; 
	cin >> a; 
	int b;
	cout << "Podaj wartosc dla b: " ;
	cin >> b; 
	if (a == b)
	{
		cout << " Wartosci a i b sa sobie rowne " << endl;
	}
	else
	{
		if (a < b)
		{
			cout << " a jest mniejsze od b" << endl;
		}
		else 
		{
			if (a > b)
			{
				cout << " a > b" << endl; 
			}
		}
		
	}

	// Zadanie 3 

	float r; 
	cout << "Wprowadz wartosc dla r (1-0): "  ;  
	cin >> r; 

	if (r >=0.7 && r <= 1)
	{
		cout << " Wspolczynnik r wskazuje na bardzo silna korelacje dodatnia" << endl;
	}
	else
	{
		if (r >= 0.5)
		{
			cout << "Wspolczynnik r wskazuje na silna korelacje dodatnia" << endl;
		}
		else
		{
			if (r >= 0,3)
			{
				cout << " Wspolczynnik r wskazuje na umiarkowana korelacje dodatnia " << endl;
			}
			else
			{
				if (r >= 0,2)
				{
					cout << "Wspolczynnik r wskazuje na slaba korelacje dodatnia " << endl;
				}
				else
				{
					if (r >= 0)
					{
						cout << "Wspolczynnik r wskazuje na brak korelacji  " << endl;
					}
				}
			}
		}
	}

	
	// Zadanie 4 
	
	float a, b;
	char dzialanie; 
	cout << "Wprowadź wartość dla a:"; 
	cin >> a; 
	cout << " Podaj znak (+, -, /):"; 
	cin >> dzialanie;
	cout << "Wprowadz wartosc dla b:";
	cin >> b; 
	if (dzialanie == '+')
	{
		cout << "Wynik: " << a + b << endl;
	}
	else if (dzialanie == '-')
	{
		cout << "Wynik: " << a - b << endl; 
	}
	else if (dzialanie == '/')
	{
		if (b == 0)
		{
			cout << " Nie mozna dzielic przez 0" << endl; 
		}
		else
		{
			cout << "Wynik: " << a / b << endl;
		}
	}
	else
	{
		cout << "Nieprawidlowy znak dzialania" << endl;
	}
 

	//Zadanie 5 
	
	while (true)
	{
		cout << "petla nieskonczona" << endl;
	}
	bool zmienna_logiczna = true; 

	if (zmienna logiczna == true)
		cout << " Prawda " << endl;
	else
		cout << " falsz " << endl;


	// Zadanie 6 
	
	while (true)
	{
		char moja_decyzja; 
		cout << " Czy chcesz zakonczyc dzialanie programu (tak badz nie): ";
		cin >> moja_decyzja; 
		if (moja_decyzja == ' tak ')
		{
			return 0; 
		}
	}
		float a, b;
		char dzialanie;
		cout << "Wprowadź wartość dla a:";
		cin >> a;
		cout << " Podaj znak (+, -, /):";
		cin >> dzialanie;
		cout << "Wprowadz wartosc dla b:";
		cin >> b;
		if (dzialanie == '+')
		{
			cout << "Wynik: " << a + b << endl;
		}
		else if (dzialanie == '-')
		{
			cout << "Wynik: " << a - b << endl;
		}
		else if (dzialanie == '/')
		{
			if (b == 0)
			{
				cout << " Nie mozna dzielic przez 0" << endl;
			}
			else
			{
				cout << "Wynik: " << a / b << endl;
			}
		}
		else
		{
			cout << "Nieprawidlowy znak dzialania" << endl;
		}

	
	//Zadanie 7 
	
	int iterator = 0; 
	
	while (true)
	{
		iterator++;

		if (iterator == 200)
		{
			break;
		}
		if (iterator % 2 == 0)
		{
			continue;
		}
		cout << iterator << endl;
	}


	//Zadanie 8 
	int n;
	cout << " Wprowadz dodatnia liczbe naturalna: ";
	cin >> n; 

	if (n <= 1)
	{
		cout << "Liczba musi być większa od 1" << endl;
		return 0;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << " Znaleziono dzielnik: " << i << endl;
			break; 
		}
	}



	//Zadanie 9 
	int t;
	int n = 0; 
	while (n < 6)
	{
		cout << "Podaj wartosc temperatury powietrza: "; 
		cin >> t; 
		if (t < 0)
		{
			cout << "Mroz" << endl; 
		}
		else
		{
			if (t >= 0 && t < 10)
			{
				cout << " Zimno " << endl; 
			}
			else
			{
				if (t >= 10 && t < 20)
				{
					cout << " Umiarkowanie " << endl;
				}
				else
				{
					if (t >= 20 && t < 30)
					{
						cout << " Cieplo " << endl;
					}
					else
					{
						cout << " goraco" << endl;;
					}
				}
			}

		}
		n++;

	}



	//Zadanie 10 

	int a, b, c;
	cout << "Wprowadz wartosc dla pierwszej liczby : " ;
	cin >> a; 
	cout << "Wprowadz wartosc dla drugiej liczby: ";
	cin >> b;
	cout << "Wprowadz wartosc dla trzeciej liczby : ";
	cin >> c;

	if (a >= b && a >= c)
	{
		cout << "Najwieksza liczba to liczba pierwsza: " << a << endl; 
	}
	else if (b >= a && b >= c)
	{
		cout << "Najwieksza liczba to liczba druga: " << b << endl; 
	}
	else
	{
		cout << " Najwieksza liczba to liczba trzecia: " << c << endl;
	}


	//Zadanie 11
	
	int rok;
	int n = 0; 
	while (n < 5)
	{
		cout << "Podaj rok: ";
		cin >> rok; 

		if (rok % 4 == 0 && rok % 100 != 0 || (rok % 400 == 0))
		{
			cout << "Rok " << rok << " jest przestepny. " << endl;
		}
		else
		{
			cout << "Rok " << rok << " nie jest przestepny. " << endl;
		}
	n++;
	}


	// Zadanie 12 

	int opcja;	
	cout << " Wybierz z klawiatury numer od 1 do 4: ";
	cin >> opcja; 

	switch (opcja)
	{
	case 1:
		cout << " Start " << endl; 
		break; 
	case 2:
		cout << " Ustawienia " << endl; 
		break; 
	case 3:
		cout << " Pomoc " << endl; 
		break; 
	case 4:
		cout << " Koniec " << endl; 
		break; 
	default:
		cout << " Wybrano inna opcje " << endl; 
	}


	// Zadanie 13 

	int opcja;
	cout << " Wybierz z klawiatury numer od 1 do 5: ";
	cin >> opcja;

	switch (opcja)
	{
	case 1:
		cout << " niedostateczny " << endl;
		break;
	case 2:
		cout << " dopuszczajacy " << endl;
		break;
	case 3:
		cout << " dostateczny " << endl;
		break;
	case 4:
		cout << " dobry " << endl;
		break;
	case 5:
		cout << " bardzo dobry " << endl; 
		break; 
	default:
		cout << "Nieprawidlowa wartosc oceny" << endl; 
		break;
	}




	// Zadanie 1 i 2 

	
	int a, b; 
	cout << "Podaj wartosc dla a = ";
	cin >> a; 
	cout << "Podaj wartosc dla b = ";
	cin >> b; 
	if (a == b)
	{
		cout << "Wprowadzone wartosci sa sobie rowne " << endl; 
	}
	else
	{
		if (a < b)
		{
			cout << " A jest mniejsze od B" << endl;
		}
		else
			{
				cout << " a > b " << endl; 
			}
	}
	



	// Zadanie 3 

	float a, b; 
	char dzialanie; 
	cout << "Podaj pierwsza liczbe ";
	cin >> a; 
	cout << "Podaj znak(+, -, *, /) ";
	cin >> dzialanie; 
	cout << "Podaj druga liczbe ";
	cin >> b; 
	if (b == 0)
	{
		cout << "Nie mozna dzielic przez 0 " << endl; 
		return 0; 
	}
	if (dzialanie == '+')
	{
		cout << a + b << endl; 
	}
	else
	{
		if (dzialanie == '-')
		{
			cout << a - b << endl; 
		}
			

	}


	// Zadanie 13 
	int ocena;
	cout << "Podaj ocene ";
	cin >> ocena; 

	switch (ocena)
	{
	case 1:
		cout << " niedostateczna " << endl; 
		break; 
	case 2:
		cout << " dopuszczajaca " << endl; 
		break; 
	case 3:
		cout << "dostateczna " << endl; 
		break; 
	case 4:
		cout << "dobra" << endl; 
		break; 
	case 5:
		cout << "Bardzo dobra " << endl; 
		break; 
	case 6:
		cout << "celujaca " << endl; 
		break; 
	default:
		cout << "Wybrana niepoprawna ocene " << endl; 
		break; 
		

	}



	// Zadanie 14 
	int suma = 0; 
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		else
		{
			suma += i; 
		}

	}
		
	cout << "suma wynosi: " << suma << endl; 

	lub mozna tez tak

	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0) continue;
    
		suma += i; // Dodaje tylko pozostałe liczby
	}



	for (int a = 1; a <= 10; a++)
	{
		for (int b = 1; b <= 10; b++)
		{
			cout << "Wynik mnożenia: " << a * b << endl;
		}
	}

*/

vector<WynikMnozenia> listaWynikow;

for (int a = 1; a <= 10; a++)
{
	for (int b = 1; b <= 10; b++)
	{
		listaWynikow.push_back({ a, b, a * b });
	}
}

sort(listaWynikow.begin(), listaWynikow.end(), porownaj);

sort(const auto& element : listaWynikow)
{
	cout << element.czynnik1 << " * " << element.czynnik2 << " = " << element.iloczyn << endl; 
}
return 0;

	


}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
