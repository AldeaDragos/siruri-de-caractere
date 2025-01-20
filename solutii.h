#include "exercitii.h"


//Sa se elimine spptiile multiple dintre cuvinte.

void sol1() {

	char x[100] = "Ana  are   mere";


	eliminareSpatiiMultiple(x);

	cout << x << endl;

}

//Sa se transforme prima litera din ficcare cuvant in litera mare si sa se inlocuiasca ultima litera din fiecare cuvant cu urmatoarea de dupa ca din alfabet

void sol2() {

	char x[100] = "Ana are mere";


	transformaLitera(x);

	cout << x << endl;

}

//Dublati toate vocalele mari si stergeti toate vocalele mici.


//void sol3() {
//
//	char x[100] = "AnA arE mere";
//
//
//	dubleazaVocaleMariStergiMici(x);
//
//	cout << x << endl;
//
//}

//Realizati suma tuturor cifrelor din sir.


void sol4() {

	char x[100] = "Ana are 3 mere si 4 pere";

	cout << sumaCifrelor(x);

}

//Sa se verifice de cate ori apare ultimul cuvant in tot sirul


void sol5() {

	char x[100] = "Ana are 3 mere si 4 pere si inca 10 mere";

	cout << aparitiiUltimulCuvant(x);

}

//Interschimbati elementele sirului in oglinda fata de mijloe


void sol6() {

	char x[100] = "Ana are 3 mere si 4 pere si inca 10 mere";

	oglindaSir(x);

	cout << x << endl;
}

//Cate litere mici avem? Sunt toate literele consoane?


void sol7() {

	char x[100] = "Ana are 3 Mere si 4 Pere si inca 10 Mere";

	cout << numaraLitereMici(x);


}

//2.Se citeste un sir de maxim 200 de caractere, cuvinte separate prin separatorii ",!?; ".

//Realizati un nou sir cu toate cuvintele palindrome.

void sol8() {

	char x[100] = "ana are un cojoc si un rotator";

	construirePropPolindroame(x);

	cout <<x << endl;
}
//Afisati cuvantul ce are cele mai multe vocale.


void sol9() {

	char x[100] = "ana frumoasa are un cojoc si un rotator";

	cuvantMaxVocale(x);

	cout << x << endl;
}

// Modificati sirul citit astfel incat sa stergeti toate cuvintele ce au mai putin de 4 caractere.


void sol10() {

	char x[100] = "Ana are cojoc si pe langa asta mai are si un rotator";


	stergereCuvinteSub4Litere(x);

	cout << x << endl;


}

// Care este al treilea cuvant citit? Daca sirul nu are cel putin 3 cuvinte se va afisa un mesaj.


void sol11() {

	char x[100] = "Ana are cazac si un civic";

	alTreileaCuvant(x);

	cout << x << endl;


}

//Stergeti cuvintele de exact 5 litere ce au prima si ultima litera identica.


void sol12() {

	char x[100] = "Ana are un cazac si un civic";

	stergeCuvinte5Litere(x);

	cout << x << endl;


}

//Dublati grupurile de 3 litere identice.

// Transformati ultima litera din fiecare cuvant (doar daca este litera mica) in litera mare
void sol14() {

	char x[100] = "Ana are mere , pere si struguri";

	schimbareUltimaLitMicaInLitMare(x);

	cout << x << endl;

}

//3. Se citeste un sir de maxim 100 de cuvinte de la tastatura, separate prin unul sau mai multe spatii.

// Sa se stearga toate spatiile multiple.


void sol15() {

	char x[100] = "Ana  doreste  un cazac si    un civic";

	eliminareToateSpatiileMultiple(x);

	cout << x << endl;
}

// Sa se faca prima litera din fiecare cuvant mare si sa se inlocuiasca ultima litera cu urmatoarea din alfabet.


void sol16() {

	char x[100] = "Ana are o livada plina de mere si pere";

	primaLiteraMareSiUltimLiteraSchimbata(x);

	cout << x<< endl;
}

// Sa se inverseze toate cuvintele din sir ce NU sunt palindrome.


void sol17() {

	char x[100] = "Ana se plimba rar pe afara cu ajutorul rolelor ";

	inversareCuvinteSirCeNuSuntPalindroame(x);

	cout << x << endl;

}

//Realizati un nou sir in care sa se puna toate cuvinte care au freeventa singulara in sir. (singular - care apar doar o singura data in sirul citit)

void sol18() {

	char x[100] = "Ana are o livada plina de mere si mai are o livada plina de pere";

	//inversareOrdineCuvinte(x);

	cout << x << endl;
}


// Stergeti toate literele C si dublati toate literele D. (C si D - un caracter citit de la tastatura)

void sol19() {

	char x[100] = "cadouri de Craciun";

	stergeCSiDubleazaLiteraD(x);

	cout << x << endl;
}