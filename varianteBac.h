#include "teorie.h"

// VARIANTA BAC 2009 

// VARIANTA 002 

void dublareVocala(char* x) {

	char rezultat[200] = "";

	int ct = 0;

	for (int i = 0; x[i] != '\0'; i++) {

		if (strchr("aeiou", x[i])) {

			rezultat[ct++] = x[i];
			rezultat[ct++] = toupper(x[i]);

		}
		else {
			rezultat[ct++] = x[i];
		}

	}
	rezultat[ct] = '\0';

	strcpy(x, rezultat);
}


// VARIANTA 004 

void eliminareaLiterelorMici(char* s) {

	int i = 0;

	char rezultat[200] = "";

	int ct = 0;

	while (i < strlen(s)) {

		if (islower(s[i])) {
			i++;
			continue;

		}
		else {

			rezultat[ct++] = s[i];

		}
		i++;
	}


	rezultat[ct] = '\0';

	strcpy(s, rezultat);

}

void eliminareaLiterelorMiciMetoda2(char* s) {

	int i = 0;

	char rezultat[200] = "";


	while (i < strlen(s)) {

		if (!islower(s[i])) {

			char temp[10] = { s[i],'\0' };

			strcat(rezultat, temp);

		}
		i++;
	}

	strcpy(s, rezultat);

}

// VARIANTA 003

void sirCorect(char* s) {

	int n = strlen(s);

	for (int i = 0; i < n; i++) {
		if (s[i] == 'e') {
			cout << '*';
		}
		else {
			cout << 'e' << s[i];
		}
	}

}

// VARIANTA 5

void interschimbare(char* s) {

	int i = 0;
	int j = strlen(s) - 1;

	while (i < j) {

		char aux = s[i];
		s[i] = s[j];
		s[j] = aux;

		i++;
		j--;
	}

}

// VARIANTA 6

void schimbarePrimaLiteraMare(char* s) {

	char* cuvinte = strtok(s, " ");

	char rezultat[200] = "";

	while (cuvinte != NULL) {

		int lungime = strlen(cuvinte);

		if (lungime > 0) {

			cuvinte[0] = toupper(cuvinte[0]);

			strcat(rezultat, cuvinte);
			strcat(rezultat, " ");

		}
		cuvinte = strtok(NULL, " ");

	}
	strcpy(s, rezultat);
}

//VARIANTA 007

void eliminareUltimaConsoana(char* s) {

	char ultimaConsoana;

	for (int i = strlen(s) - 1; i >= 0; i--) {

		if (!strchr("aeiouAEIOU", s[i])) {

			ultimaConsoana = i;
			break;

		}
	}

	if (ultimaConsoana != -1) {
		for (int i = ultimaConsoana; i < strlen(s); i++) {
			s[i] = s[i + 1];
		}
	}
}