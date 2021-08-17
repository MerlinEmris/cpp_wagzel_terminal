#include <iostream>
#include <cstdlib>

using namespace std;
int regist();
void menu();
int main()
{
	menu();
	system("pause");
	return 0;
}
void fpoka()
{
	FILE *m;
	m = fopen("money.txt", "r");
	int a, b;
	fscanf(m, "%d", &a);
	fscanf(m, "\n%d", &b);
	cout << "Peteklerden gelen girdeji:" << a << "\nSatylan petek mukdary:" << b << endl
		 << endl;
	fclose(m);
}
void foka()
{
	FILE *m;
	m = fopen("data.txt", "r");
	int alpha = 0;
	char txt[99999];
	while (!feof(m))
	{
		txt[alpha] = fgetc(m);
		alpha++;
	}
	cout << alpha;
	for (int i = 0; i <= alpha; i++)
	{
		cout << txt[i];
	}
}
void director()
{
	system("cls");
	int dsayla = 0;
	cout << "menu\n1.Musderlen sanowy.\n2.Satylan petek mukdary.\n";
	cin >> dsayla;
	switch (dsayla)
	{
	case 1:
	{
		foka();
		main();
	}
	break;
	case 2:
	{
		fpoka();
		main();
	}
	break;
	}
}
void gatnow()
{
	system("CLS");
	cout << "1.06:00	Mary-Asgabat	10 TMT\n2.12:00	Asgabat-Mary	15 TMT\n3.09:00	Asgabat-Coganly		120TMT\n4.12:00	Asgabat-Turkmenbashy	25 TMT\n5.09:00	Tejen-Coganly		4TMT\n";
}

void kassir()
{
	system("cls");
	cout << "kassir ishleyar";
	int ksayla = 0;
	cout << "menu\n1.Musder gos.\n";
	cin >> ksayla;
	switch (ksayla)
	{
	case 1:
	{
		regist();
	}
	break;
	}
}
void mushter()
{
	system("cls");
	foka();
	main();
}
void menu()
{
	cout << endl
		 << endl;
	cout << "menu\n1.Director.\n2.Kassir.\n3.muster.\n4.gatnow.\n";
	int sayla = 0;
	cin >> sayla;
	switch (sayla)
	{
	case 1:
	{
		director();
	}
	break;
	case 2:
	{
		kassir();
	}
	break;
	case 3:
	{
		mushter();
	}
	break;
	case 4:
	{
		gatnow();
		main();
	}
	break;
	}
}
int regist()
{
	FILE *m, *t;
	m = fopen("data.txt", "a+");
	t = fopen("money.txt", "r");
	int a = 0, b = 0;
	cout << "Ady ";
	char ady[25];
	gets(ady);
	fprintf(m, "%s\n", ady);
	cout << "Familiya:";
	char fam[25];
	gets(fam);
	fprintf(m, "%s\n", fam);
	cout << "Passport Id:";
	char id[25];
	gets(id);
	fprintf(m, "%s\n", id);
	gatnow();
	int aa = 0;
	cin >> aa;
	switch (aa)
	{
	case 1:
	{
		fprintf(m, "06:00	Mary-Asgabat	10 TMT\n");
		printf("\n\n1.06:00	Mary-Asgabat	10 TMT\n");
		a++;
		b = b + 10;
		break;
	}
	case 2:
	{
		fprintf(m, "12:00	Asgabat-Mary	15 TMT\n");
		printf("\n\n2.12:00	Asgabat-Mary	15 TMT\n");
		a++;
		b = b + 15;
		break;
	}
	case 3:
	{
		fprintf(m, "09:00	Asgabat-Coganly		120TMT\n");
		printf("\n\n3.09:00	Asgabat-Coganly		120TMT\n");
		a++;
		b = b + 120;
		break;
	}
	case 4:
	{
		fprintf(m, "12:00	Asgabat-Turkmenbashy	25 TMT\n");
		printf("\n\n4.12:00	Asgabat-Turkmenbashy	25 TMT\n");
		a++;
		b = b + 25;
		break;
	}
	case 5:
	{
		fprintf(m, "09:00	Tejen-Coganly		4TMT\n");
		printf("\n\n5.09:00	Tejen-Coganly		4TMT\n");
		a++;
		b = b + 4;
		break;
	}
	}
	int newbiletbaha;
	fscanf(t, "%d", &newbiletbaha); //cout<<"exisperimrjdghksjdfg:baha>>"<<newbiletbaha;
	int newbiletmukdar;
	fscanf(t, "%d", &newbiletmukdar); //cout<<"exisperimrjdghksjdfg:mukdar>>"<<newbiletmukdar;cout<<"exisperimrjdghksjdfg:a>>"<<a;cout<<"exisperimrjdghksjdfg:b>>"<<b;
	fclose(t);
	FILE *tt;
	tt = fopen("money.txt", "w");

	newbiletmukdar = newbiletmukdar + a;
	newbiletbaha = newbiletbaha + b;
	fprintf(tt, "%d\n%d", newbiletbaha, newbiletmukdar);
	fprintf(m, "\n\n");
	cout << "musder gosuldy\n";
	fclose(m);
	fclose(tt);
	return main();
}
