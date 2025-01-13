#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void teorie() {
	char x[100] = "Ana\0are mere";

	cout << x << endl;


	char text[100] = "";


	cin.getline(text, 100);


	cout << text;

}


void functieLungimeSir() {


	char x[100] = "Ana are mere";

	cout << "Lungimea efectiva a sirului este: " << endl;

	cout << strlen(x);


}

void copiereAdresaSursaDestintatie() {

	char x[100] = "Ana are mere";

	char text[100] = "";

	cout << "Copierea adresei sursa catre destinatie: " << endl;

	strcpy_s(text, x);

	cout << text;

}

void adaugareSursaDest() {

	char x[100] = "Ana are mere ";

	char text[100] = "si pere";

	cout << "Adaugare adresa sursa la dest: " << endl;

	strcat_s(x, text);

	cout << x;

}

void nrOcteti() {

	char x[100] = "Ana are mere ";

	char text[100] = "si pere";

	cout << "Adaugare adresa sursa la dest cu nr octeti: " << endl;

	strncat_s(x, text, 4);

	cout << x << endl;

}

void primaAparitieCinS() {

	char x[100] = "Ana are caise si mere";

	char c = 'c';

	cout << "Incepe cu prima aparitie a caracturului citit: " << endl;

	cout<<strchr(x, c);

}

void ultimaAparitieCinS() {

	char x[100] = "Ana are caise si mere ";

	char c = 'a';

	cout << "Incepe cu ultima aparitie a caracterului citi: " << endl;

	cout << strrchr(x, c);
}

void comparare() {

	char x[100] = "Ana are caise";

	char s[100] = "Ana are pere";

	cout << "Compara stil dictionar cele 2 siruri de caractere: " << endl;

	cout << strcmp(x, s);

}

void subsir() {

	char x[100] = "Ana are pere";

	char s[100] = "Ana are ";

	cout << "Verifica daca s este subsir " << endl;

	cout << strstr(x, s);

}

void comparareLitMiciSiMari() {

	char x[100] = "Ana are mere";

	char s[100] = "Ana are mere";

	cout << "Compara cele 2 siruri de caracatere si face distinctie intre literele mari si mici: " << endl;

	cout << _stricmp(x, s);
}

void separtatori() {

	char str[100] = "sdsadas dasdasd asdas";
	const char delim[2] = " ";
	char* token;
	
	cout << "Separa sirul str in entitati prin separatorii specificati in delim: " << endl;

	token = strtok(str, " ");

	while (token != NULL) {
		cout << token << endl;
		token = strtok(NULL, delim);
	}

}

void numarCaractereCareNuSeGasescInSir2() {

	char x[100] = "Tudor are mere , caise si prune ";

	char s[100] = "Sebi are mere ,caise si banane";

	cout << "Numar de caractere ale sirului s1 care incep cu primul caracter care nu se gaseste in s2: " << endl;

	cout << strcspn(x, s);

}


void numarCaractereCareSeGasescInSir2() {

	char x[100] = "Tudor are mere , caise si prune ";

	char s[100] = "Tudor are mere ,caise si banane";

	cout << "Numar de caractere ale sirului s1 care incep cu primul caracter care se gaseste in s2 cu conditia sa inceapa ambele cu acelasi caracter: " << endl;

	cout << strspn(x, s);

}

void convertireNumereMariInMici() {

	char x[100] = "AnA aRe MeRE";

	cout << "Converteste literele mari in itere mici: " << endl;

	cout << _strlwr(x);

}

void convertireNumereMiciInMare() {

	char x[100] = "AnA aRe MeRE";

	cout << "Converteste literele mici in litere mare iar cele mari raman neschimbate: " << endl;

	cout << _strupr(x);

}

void cautarePrimCaracterS1inS2() {

	char x[100] = "Tudor are mere";

	char c[100] = "Ana are struguri";

	cout << "Cauta primul carcter al sirului s1 in s2, daca este gasit returnseaza adresa sa din 1" << endl;

	cout << strpbrk(x, c);

}

void convertireTipSirindouble() {

	char x[100] = "3.2";

	cout << "Converteste un sir catre tipul double: " << endl;

	cout << atof(x)+6.2 << endl;

}

void convertireTipSirinint() {

	char x[100] = "31";//31

	cout << "Converteste un sir catre tipul int: " << endl;

	cout << atoi(x)+21 << endl; 

}

void convertireSirTipIntLung() {

	char x[100] = "932441";

	cout << "Converteste un sir catre tipul int long: " << endl;

	cout << atol(x) << endl;

}