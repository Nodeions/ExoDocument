#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<time.h>
#define MAX 100 


typedef struct coord {

	int x;
	int y;

}coord;

typedef struct student {

	char name;
	char surname;
	int note;

}students;

typedef struct studInfo {

	char name;
	int moy;

}studInfo;


void PrintBonjour() {

	char bonjour[] = { 'B', 'o', 'n', 'j', 'o', 'u', 'r' };
	printf("Bonjour\n");

	for (int i = 0; i < sizeof(bonjour) - 1; i++) {
		printf("%c", bonjour[i]);
	}
}

void PermutInt(int x, int y) {

	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Vous avez maintenant %d et %d\n", x, y);

}

int AskInt() {
	int x;
	printf("Veuillez entrer un nombre entier : ");
	scanf_s("%d", &x);

	return x;
}

void PrintMoyenneInt(int x, int y, int z) {

	float moy = (x + y + z) / 3.0f;

	printf("La moyenne de %d, %d et %d est egale a : %.2f\n", x, y, z, moy);
}

void IsPair(int x) {

	if (x % 2 == 0)
		printf("%d est pair\n", x);
	else
		printf("%d est impair\n", x);

}

void CompareInt(int x, int y) {

	if (x < y)
		printf("%d est inferieur à %d\n", x, y);
	else if (x > y)
		printf("%d est superieur à %d\n", x, y);
	else
		printf("%d est egale a %d\n", x, y);
}

void PrintAscInt(int x, int y, int z) {

	if (z < x && z < y) {
		if (x < y) {
			printf("%d > %d > %d\n", z, x, y);
		}
		else {
			printf("%d > %d > %d\n", z, y, x);
		}
	}
	else if (y < z && y < x) {
		if (z < x) {
			printf("%d > %d > %d\n", y, z, x);
		}
		else {
			printf("%d > %d > %d\n", y, x, z);
		}
	}
	else {
		if (y < z) {
			printf("%d > %d > %d\n", x, y, z);
		}
		else {
			printf("%d > %d > %d\n", x, z, y);
		}
	}
}

void CheckIntOrDigit() {

	float number;
	printf("Entrez un nombre : ");
	if (scanf_s("%f", &number) == 1) {
		printf("Decimal\n");
	}
	else
		printf("Entier\n");

}

void CheckAscii() {

	char test;
	printf("Entrez un caractere\n");
	scanf_s("%c", &test, 1);
	while (getchar() != '\n'){


	}

	if (64 < test && test < 91) {
		printf("Appartient a alphabet et maj");
	}
	else if (96 < test && test < 123) {
		printf("Appartient a alphabet et min");
	}
	else
		printf("ratio bozo");
}


void ReturnDate() {
	char s[] = {'1', '5', '/', '0', '9', '/', '2', '0', '2', '3'};

	if (s[3] == '0') {
		if (s[4] == '1')
			printf("15-Janvier-2023\n");
		else if (s[4] == '2')
			printf("15-février-2023\n");
		else if (s[4] == '3')
			printf("15-mars-2023\n");
		else if (s[4] == '4')
			printf("15-avril-2023\n");
		else if (s[4] == '5')
			printf("15-mai-2023\n");
		else if (s[4] == '6')
			printf("15-juin-2023\n");
		else if (s[4] == '7')
			printf("15-juillet-2023\n");
		else if (s[4] == '8')
			printf("15-aout-2023\n");
		else if (s[4] == '9')
			printf("15-septembre-2023\n");
	}
	else {
		if (s[3] == '0')
			printf("15-octobre-2023\n");
		else if (s[4] == '1')
			printf("15-novembre-2023\n");
		else if (s[4] == '2')
			printf("15-decembre-2023\n");
	}

	//time_t tm;
	//time(&tm);
	//char chaine[128];
	//ctime_s(&chaine, sizeof(chaine), &tm);
	//char month[11] = {"Janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre"};
	//if (chaine[4], chaine[5], chaine[6]) {
	//	printf("ahhhhhhhhhhh");
	//}
	//printf("Current Date/Time = %c%c-%c%c%c-%c%c%c%c ", chaine[8], chaine[9], chaine[4], chaine[5],chaine[6], chaine[20], chaine[21], chaine[22], chaine[23]);
	//getchar();
}

void isFirstNumber() {
	int p = 0, i, nbr;

	printf(" Entrez un nombre: ");
	scanf_s("%d", &nbr);

	for (i = 1; i <= nbr; i++)
	{
		if (nbr % i == 0)
		{
			p++;
		}
	}
	if (p == 2)
	{
		printf(" %d est un nombre premier.\n", nbr);
	}
	else
	{
		printf(" %d n'est pas un nombre premier.\n", nbr);
	}
}

void SommeElem() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (j == 0) {
				printf("%d%d\n", i,j);
			}
		}	
	}
}

void TwistNumber() {
	int askInt;
	int nbrTwist = 0;
	printf("Entrez un nombre : ");
	scanf_s("%d", &askInt);

	while (askInt != 0) {

		nbrTwist = nbrTwist * 10;
		nbrTwist = nbrTwist + askInt % 10;
		askInt = askInt / 10;
	}

	printf("Nombre inverse : %d\n", nbrTwist);

}

void CheckOccurencyOfNumber(){
	
	int t[] = { 1,2,5,2,1,2 };
				//0 1 2 3 4 5 6 7 8 9
	int num[] = { 0,0,0,0,0,0,0,0,0,0 };
	
	for (int i = 0; i < 6; i++) { //check la longueur du int
		
		//utiliser le chiffre de t[] comme index pour ++
		int index = t[i];
		num[index]++;
		
		//for (int j = 0; j < 9; j++) { // check les chiffres du nombre
		//	if (t[i] = j) {
		//		num[j]++;
		//	}
		//}
	}

	//boucle for

	/*for (int i = 0; i < 6; i++)
	printf("%d\n", t);*/

}// PAS FINI

void Acs() {

	int tab[] = { 4, 2, 3, 4, 6, 3 }; // ---> 4 3 4 6 3 2
	int temp ;
	int taille = 5;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < taille; j++) {

			//mettre le plus grand au dernier index
			if (tab[i] < tab[i + 1]) {
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			taille--;
		}
		printf("%d\n", tab[i]);
	}
}


	/*int askInt;
	printf("Veuillez entrer un nombre : ");
	scanf_s("%d", askInt);
	//int nbrTwist = 0;
	int keepNbrTwist[] = { "" };
	int nDigits = floor(log10(abs(askInt))) + 1;
	while (askInt != 0) {

		for (int i = 0; i < nDigits; i++) {

		nbrTwist = nbrTwist * 10;
		nbrTwist = nbrTwist + askInt % 10;
		keepNbrTwist[i] = nbrTwist;
		askInt = askInt / 10;
		}
	}*/

void isPalindrom() {

	const char* chaine = "non";
	int length = sizeof(chaine) / sizeof(chaine[0]);
	int pal = 0;

	for (int i = 0; i <= length/2; i++) {
		printf("%d\n", i);
		if (&chaine[i] == &chaine[length - i -1]) {
			printf("%d", pal);
			pal++;		
		}	
	}
	if (pal == length-1) {
		printf("Palindrome");
	}
	else {
		printf("Not palindrome");
	}

}

void RangeAlphabet() {

	//Dans l'idee je veux recuperer le code ascii mais j'arrive pas
	const char* a = "baba";
	const char* b = "zook";
	int lengthA = sizeof(a) / sizeof(a[0]);
	int lengthB = sizeof(b) / sizeof(b[0]);

	for (int i = 0; i < lengthA; i++) {
		if (a[i] > b[i]) {
			for (int j = 0; j < lengthA; j++) {
				printf("%c", b[j]);
			}
			printf("\n");
			for (int k = 0; k < lengthB; k++) {
				printf("%c", a[k]);
			}
			printf("\n");
			
			break;
		}
		else if (b[i] > a[i]) {
			for (int j = 0; j < lengthA; j++) {
				printf("%c", a[j]);
			}
			printf("\n");
			for (int k = 0; k < lengthB; k++) {
				printf("%c", b[k]);
			}
			printf("\n");

			break;
		}
	}
}

void PrintCoord() {

	coord p;
	p.x = 10;
	p.y = 1045;

	printf("x : %d\ny : %d", p.x, p.y);

}

void ListOfStudents() {

	char stopProgram[] = { 'y', 'Y', 'n', 'N'};
	students stud;
	stud.name;
	stud.surname;
	stud.note;
	char askedContinue = 'n';

	while (askedContinue != stopProgram[0] && askedContinue != stopProgram[1]) {
		
		char sBuffer[256];

		printf("Entrez un nom : ");
		scanf_s("%s\n", sBuffer, 255);
		printf("Entrez un prenom : ");
		scanf_s("%s\n", &stud.surname, 255);
		printf("Entrez une note : ");
		scanf_s("%s\n", &stud.note, 255);
		printf("Avez-vous fini ? :");
		scanf_s("%s", &askedContinue, 255);
	}
	 
}

void ReadUpdateStudents() {

	studInfo* info[];

	while (1) {
		info->name = scanf_s("");
		info->moy = scanf_s("");

		char askContinue = 'yes';

		printf("Continue ? Y/N : ");
		scanf_s("", &askContinue);
		if (askContinue == 'N' && askContinue == 'n') {
			printf("Okay bye");
			break;
		}
	}
}


int main() {

	/*PrintBonjour();

	int a = AskInt();
	int b = AskInt();
	printf("Vous avez entre : %d et %d\n", a, b);

	PermutInt(a, b);

	int c = AskInt();

	PrintMoyenneInt(a, b, c);

	int d = AskInt();
	IsPair(d);
	CompareInt(a, d);
	PrintAscInt(a, b, c);
	CheckIntOrDigit();*/
	/*CheckAscii();
	ReturnDate();
	isFirstNumber();
	SommeElem();*/
	//TwistNumber();
	//CheckOccurencyOfNumber();
	//Acs();

	//isPalindrom();
	//RangeAlphabet();
	//PrintCoord();
	//ListOfStudents();
	ReadUpdateStudents();

	return 0;
}