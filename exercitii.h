#include "teorie.h"


//PROBLEMA 1 a.
														
void eliminareSpatiiMultiple(char* x) {       
														
	
	int i = 0;
	int j = 0;

	int n = strlen(x);

	for (int i = 0; i < n; i++) {
		if (!(x[i] == ' ' && x[i + 1] == ' ')) {

			x[j++] = x[i];

		}
	}
	
	x[j] = '\0';
}

//1.b

void transformaLitera(char* x) {

	char* cuvant = strtok(x, " ");

	char c[100] = "";

	while (cuvant) {

		int lungime = strlen(cuvant);

		if (lungime > 0) {

			cuvant[0] = toupper(cuvant[0]);
			cuvant[lungime - 1] = cuvant[lungime - 1 - 1];
		}
		strcat(c, cuvant);
		strcat(c, " ");

		cuvant = strtok(NULL, " ");
	}
	strcpy(x, c);
}

//1.c

//void dubleazaVocaleMariStergiMici(char* x) {
//
//	int i = 0;
//	int j = 0;
//	int n = strlen(x);
//
//	char c[200] ="";
//	
//	for (int i = 0;i<n; i++) {
//
//		if (strchr("aeiou", x[i])) {
//
//			continue;
//
//		}
//		else if (strchr("AEIOU", x[i])) {
//
//			strcat(c, x[i]);
//			strcat(c, x[i]);
//
//		}
//		else {
//			strcat(c, x[i]);
//		}
//	}
//	strcpy(x, c);
//
//}

//1.d

int sumaCifrelor(char* x) {

	int suma = 0;

	for (int i = 0; i<strlen(x); i++) {

		if (isdigit(x[i])) {
			suma += x[i] - '0';
		}

	}
	return suma;
}

//1.e

int aparitiiUltimulCuvant(char* x) {

	char* ultimulCuvant = strrchr(x, ' ');

	ultimulCuvant++;

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

void oglindaSir(char* x) {

	int n = strlen(x);

	for (int i = 0; i < n / 2; i++) {

		char temp = x[i];
		x[i] = x[n - i - 1];
		x[n - i - 1] = temp;

	}

}


//1.g

int numaraLitereMici(char* x) {

	int ct = 0;
	

	for (int i = 0; i<strlen(x); i++) {
		
		if (islower(x[i])) {
			ct++;
		}
	}
	return ct;
}

//2.a

int estePalindrom( char* cuvant) {

	int n = strlen(cuvant);

	for (int i = 0; i < n / 2; i++) {

		if (cuvant[i] != cuvant[n - i - 1]) {
			return 0;
		}

	}
	return 1;
}

void construirePropPolindroame( char* x) {

	char* cuvant = strtok(x, " ,;.");

	char c[100] = "";

	while (cuvant!=NULL) {

		if (estePalindrom(cuvant)) {
			strcat(c, cuvant);
			strcat(c, " ");
		}
		cuvant = strtok(NULL, " ,;.");
	}
	strcpy(x, c);
}

//2.b

void cuvantMaxVocale(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " ,;.");

	int maxVocale = 0;

	while (cuvant) {
		int vocale = 0;
		for (int i = 0; i < strlen(cuvant); i++) {
			if (strchr("aeiouAEIOU", cuvant[i])) {
				vocale++;
			}
		}
		if (vocale > maxVocale) {
			maxVocale = vocale;
			strcpy(c, cuvant);
		}
		cuvant = strtok(NULL, " ,;.");
	}
	strcpy(x, c);
	
}

//2.c

void stergereCuvinteSub4Litere(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " ,;.");

	while (cuvant) {

		if (strlen(cuvant) >= 4) {

			strcat(c, cuvant);
			strcat(c, " ");
		}
		cuvant = strtok(NULL, " ,;.");
	}
	strcpy(x, c);

}

//2.d

void alTreileaCuvant(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " ,;.");

	int ct = 0;

	while (cuvant) {

		ct++;
		if (ct == 3) {
			strcat(c, cuvant);
		}
		cuvant = strtok(NULL, " .;.");
	}
	strcpy(x, c);

}

//2.e

void stergeCuvinte5Litere(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " .;,");

	int ct = 0;

	while (cuvant) {

		if (strlen(cuvant) == 5 && cuvant[0] == cuvant[4]) {
			strcat(c, cuvant);
			strcat(c, " ");
		}
		cuvant = strtok(NULL, " .;,");
	}
	strcpy(x, c);
}


//2.g

void schimbareUltimaLitMicaInLitMare(char* x) {

	char* cuvant = strtok(x, " ,;.");

	char c[200] = "";

	while (cuvant) {

		int n = strlen(cuvant);
		if (n > 0 && islower(cuvant[n - 1])) {
			cuvant[n - 1] = toupper(cuvant[n - 1]);
		}
		strcat(c, cuvant);
		strcat(c, " ");

		cuvant = strtok(NULL, " ,;.");
	}
	strcpy(x, c);
}

//3.a

void eliminareToateSpatiileMultiple(char* x) {

	int i = 0;
	int j = 0;

	int n = strlen(x);

	for (int i = 0; i < n; i++) {
		if (!(x[i] == ' ' && x[i + 1] == ' ')) {

			x[j++] = x[i];

		}
	}

	x[j] = '\0';

}

//3.b

void primaLiteraMareSiUltimLiteraSchimbata(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " ");

	while (cuvant) {

		int n = strlen(cuvant);

		if (n > 0) {

			cuvant[0] = toupper(cuvant[0]);
			cuvant[n - 1] = cuvant[n - 1] + 1;
		}
		strcat(c, cuvant);
		strcat(c, " ");
		cuvant = strtok(NULL, " ");

	}
	strcpy(x, c);
}

//3.c

void inversareCuvinteSirCeNuSuntPalindroame(char* x) {

	char c[200] = "";

	char* cuvant = strtok(x, " ");

	while (cuvant) {

		if (!estePalindrom(cuvant)) {

			int n = strlen(cuvant);

			for (int i = 0; i < n/2; i++) {

				char temp = cuvant[i];
				cuvant[i] = cuvant[n - i - 1];
				cuvant[n - i - 1] = temp;

			}

		}

		strcat(c, cuvant);
		strcat(c, " ");

		cuvant = strtok(NULL, " ");
	}
	strcpy(x, c);
}

//3.e

void stergeCSiDubleazaLiteraD(char* x) {

	char c[200] = "";

	int n = strlen(x);

	for (int i = 0; i < n; i++) {
		if (x[i] == 'C' || x[i] == 'c') {
			continue;
		}
		else if (x[i] == 'D' || x[i] == 'd') {
			strncat(c, &x[i], 1);
			strncat(c, &x[i], 1);
		}
		else {
			strncat(c, &x[i], 1);
		}
	}
	strcpy(x, c);
}