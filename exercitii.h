#include "solutii.h"

void sol1() {

	char x[100] = "Ana are mere";


	eliminareSpatillMultiple(x, 3, 7);

	cout << x << endl;

}

void sol2() {

	char x[100] = "Ana are mere";


	transformaLitera(x);

	cout << x << endl;

}

void sol3() {

	char x[100] = "Ana are mere";


	dubleazaVocaleMariStergiMici(x);

	cout << x << endl;

}

void sol4() {

	char x[100] = "Ana are 3 mere si 4 pere";

	cout << sumaCifrelor(x);

}


void sol5() {

	char x[100] = "Ana are 3 mere si 4 pere si inca 10 mere";

	cout << aparitiiUltimulCuvant(x);

}

void sol6() {

	char x[100] = "Ana are 3 mere si 4 pere si inca 10 mere";

	oglindaSir(x);

	cout << x << endl;
}

void sol7() {
	
	int litereMici, consoane;

	char x[100] = "Ana are 3 Mere si 4 Pere si inca 10 Mere";

	numaraLitereMiciSiConosnae(x,litereMici,consoane);

	cout << "In sirul data se numara " << litereMici << " litere mici si " << consoane << " consoane" << endl;

}

void sol8() {

	char x[100] = "ana are un cojoc si un rotator";

	char c[100];

	construirePropPolindroame(x, c);

	cout << c << endl;
}


void sol9() {

	char x[100] = "ana frumoasa are un cojoc si un rotator";

	char c[100];

	cuvantMaxVocale(x, c);

	cout << c << endl;
}


void sol10() {

	char x[100] = "Ana are cojoc si un rotator";


	alTreileaCuvant(x);


}

void sol11() {

	char x[100] = "Ana are un cazac si un civic";
	char c[100];

	stergeCuvinte5Litere(x,c);

	cout << c << endl;


}

void sol12() {

	char x[100] = "Ana are un cazac si un civic";
	char c[100];

	schimbareUltimaCifraMicaInLitMare(x, c);

	cout << c << endl;


}

void sol14() {

	char x[100] = "Ana doreste un cazac si un civic";
	char c[100];

	stergereLitereCSiDublareD(x);

	cout << x << endl;

}