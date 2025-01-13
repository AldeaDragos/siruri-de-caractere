#include "teorie.h"


//PROBLEMA 1 a.
														// Ana are mere 
														// i=poz;i<12; x[i]=x[i+1] ;i++  x[strlen(x)]-1
void eliminareCaracter(char* x,int pozitia) {       // i=7; i<12 x[7]=x[8] =>7=" " => Ana ar   
														// i=8; i<12 x[8]=x[9] =>" " =m => Ana ar m 
	
	x[pozitia] = '\0';


	char p1[100] = "";

	strcpy(p1, x);

	char p2[100] = "";

	strcpy(p2, x + pozitia + 1);


	strcat(p1, p2);


	strcpy(x, p1);

}

void eliminareSpatillMultiple(char*x ,int a,int b) {

	x[a] = '\0';

	x[b] = '\0';

	char p1[100] = "";

	strcpy(p1, x);

	char p2[100] = "";

	strcpy(p2, x + b + 1);

	strcat(p1, p2);

	strcpy(x, p1);

}

//1.b


void transformaLitera(char* x) {

	char* cuvant = strtok(x, " ");

	while (cuvant) {

		int lungime = strlen(cuvant);

		if (lungime > 0) {

			cuvant[0] = toupper(cuvant[0]);
			cuvant[lungime - 1] = cuvant[lungime - 1 - 1];
		}
		cuvant = strtok(NULL, " ");
	}
}

//1.c

void dubleazaVocaleMariStergiMici(char* x) {

	char rezultat[200] = " ";

	int ct = 0;

	for (int i = 0; x[i]; i++) {

		if (strchr("aeiou", x[i])) {

			continue;

		}
		else if (strchr("AEIOU", x[i])) {

			rezultat[ct++] = x[i];
			rezultat[ct++] = x[i];

		}
		else {
			rezultat[ct++] = x[i];
		}

	}
	rezultat[ct] = '\0';
	strcpy(x, rezultat);

}

//1.d

int sumaCifrelor(char* x) {

	int suma = 0;

	for (int i = 0; x[i]; i++) {

		if (isdigit(x[i])) {
			suma += x[i]-'0';
		}

	}
	return suma;
}

//1.e

int aparitiiUltimulCuvant(char* x) {

	char* ultimulCuvant = strrchr(x, ' ');

	if (!ultimulCuvant) {
		ultimulCuvant = x;
	}
	else {
		ultimulCuvant++;
	}

	cout << ultimulCuvant << endl;

	int ct = 0;

	char* cuvant = strtok(x, " ");

	while (cuvant) {

		if (strcmp(cuvant, ultimulCuvant) == 0) {
			ct++;
		}
		cuvant = strtok(NULL, " ");
	}
	return ct;
}

//1.f

void oglindaSir(char* x){

	int lungime = strlen(x);

	for (int i = 0; i < lungime / 2; i++) {

		swap(x[i], x[lungime - i - 1]);

	}

}


//1.g

void numaraLitereMiciSiConosnae(char* x, int& litereMici, int& consoane) {

	litereMici = 0;
	consoane = 0;

	for (int i = 0; x[i]; i++) {

		if (islower(x[i])) {
			litereMici++;
		}
		if (!strchr("aeiou", x[i])) {
			consoane++;
		}

	}
}

//2.a

int estePalindrom( char* cuvant) {

	int lungime = strlen(cuvant);

	for (int i = 0; i < lungime / 2; i++) {

		if (cuvant[i] != cuvant[lungime - i - 1]) {
			return false;
		}

	}
	return true;
}

void construirePropPolindroame( char* x, char* rezultat) {

	rezultat[0] = '\0';

	char cuvant[100];
	int ct = 0;

	for (int i = 0; x[i] != '\0'; i++) {
		if (strchr(" !/,.;", x[i])) {
			if (ct > 0) {

				cuvant[ct] = '\0';
				if (estePalindrom(cuvant)) {
					strcat(rezultat, cuvant);
					strcat(rezultat, " ");
				}
				ct = 0;
			}
		}
		else {
			cuvant[ct++] = x[i];
		}
	}
}

//2.b

void cuvantMaxVocale(char* x, char* rezultat) {

	char cuvant[100];
	int maxVocale = 0;
	rezultat[0] = '0';
	int ct = 0;

	for (int i = 0; x[i]; i++) {
		if (strchr(" !?,.;", x[i])) {

			if (ct > 0) {

				cuvant[ct] = '0';
				int nrVocale = 0;
				for (int k = 0; k < ct; k++) {
					if (strchr("aeiouAEIOU", cuvant[k])) {
						nrVocale++;
					}
				}
				if (nrVocale > maxVocale) {
					maxVocale = nrVocale;
					strcpy(rezultat, cuvant);
				}
				ct = 0;
			}
		}
		else {
			cuvant[ct++] = x[i];
		}

	}
}

//2.e

void alTreileaCuvant(char* x) {

	char cuvant[100];

	int ct = 0;
	int numarCuvinte = 0;

	for (int i = 0; x[i] != '\0'; i++) {

		if (strchr(" !/,.;", x[i])) {
			if (ct > 0) {
				cuvant[ct] = '\0';
				numarCuvinte++;
				if (numarCuvinte == 3) {
					cout << cuvant << endl;
				}
				ct = 0;
			}
			
		}
		else {
			cuvant[ct++] = x[i];
		}

	}

	if (numarCuvinte < 3) {
		cout << "Șirul nu are cel puțin 3 cuvinte!" << endl;
	}

}

//2.f

void stergeCuvinte5Litere(char* x, char* rezultat) {

	rezultat[0] = '\0';

	char cuvant[100];
	int ct = 0;

	for (int i = 0; x[i] != '\0'; i++) {

		if (strchr(" !/,.;", x[i])) {
			if (ct > 0) {

				cuvant[ct]='\0';
				if (!(strlen(cuvant) == 5 && cuvant[0] == cuvant[4])) {
					strcat(rezultat,cuvant);
					strcat(rezultat," ");
				}
				ct=0;

			}
		}
		else {
			cuvant[ct++] = x[i];
		}


	}
}


//2.g

void schimbareUltimaCifraMicaInLitMare(char* x, char* rezultat) {

	rezultat[0] = '\0';

	char cuvant[100];
	int ct = 0;

	for (int i = 0; x[i] != '\0'; i++) {

		if (strchr(" !/,.;", x[i])) {
			if (ct > 0) {

				cuvant[ct] = '\0';

				int lungime = strlen(cuvant);

				for (int k = lungime-1; k >= 0; k--) {

					if (cuvant[k] = toupper(cuvant[k])) {

						strcat(rezultat, cuvant);

						strcat(rezultat, " ");

						break;
					}
				}
				ct = 0;

			}
		}
		else {
			cuvant[ct++] = x[i];
		}
	}
}

//3.a

void eliminareToateSpatiileMultiple(char* x) {

	int ct = 0;

	for (int i = 0; x[i] != '\0'; i++) {

		if (x[i] == ' ') {

		}

	}

}

//3.e

void stergereLitereCSiDublareD(char* x) {

	char rezultat[200] = "";
	for (int i = 0; x[i] != '\0'; i++) {

		if (x[i] == 'C' || x[i] == 'c') {
			continue;
		}
		else if (x[i] == 'D' || x[i] == 'd') {
			strncat(rezultat, &x[i], 1);
			strncat(rezultat, &x[i], 1);
		}
		else {
			strncat(rezultat, &x[i], 1);
		}

	}

	strcpy(x, rezultat);
}