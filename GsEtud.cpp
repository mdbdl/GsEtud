#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define  max 50
#define  MAX_F 999999


#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"
#define CLEARSCREEN "\x1b[2J"

#define BRED   "\x1B[41m"
#define BGRN   "\x1B[42m"
#define BYEL   "\x1B[43m"
#define BBLU   "\x1B[44m"
#define BMAG   "\x1B[45m"
#define BCYN   "\x1B[46m"
#define BWHT   "\x1B[47m"

int i,j,n=1,nbr,choix,chx;

struct etudiant
{
	int num;
	char nom[30],prenom[30],filiere[30];
	float moyen;
};
struct etudiant etud[max];

struct Tri_etudiant
{
	int NUM;
	char NOM[30],PRENOM[30],FILIERE[30];
	float MOYEN;
};
struct Tri_etudiant  Tri[max];

void Ajouter()
{
	printf(MAG"\n\nSaisir les informations de votre etudiant %d : \n\n",n);
	printf(GRN"Numero d'inscreption : ");
	scanf("%d",&etud[n].num);
	printf("Nom : ");
	scanf("%s",etud[n].nom);
	printf("Prenom : ");
	scanf("%s",etud[n].prenom);
	printf("Moyenne : ");
	scanf("%f",&etud[n].moyen);
	printf("Filiere : ");
	scanf("%s",etud[n].filiere);
	printf("\n\n");
	n++;
}
 
void Ajouter_N()
{
	printf(RED"Entrez le nombre des etudiant : ");
	scanf("%d",&nbr);
	printf("\n\n");
	for(i=1;i<=nbr;i++)
	{
		printf(MAG"\n\nSaisir les informations de votre etudiant %d : \n\n",n);
		printf(GRN"Numero d'inscreption : ");
		scanf("%d",&etud[n].num);
		printf("Nom : ");
		scanf("%s",etud[n].nom);
		printf("Prenom : ");
		scanf("%s",etud[n].prenom);
		printf("Moyenne : ");
		scanf("%f",&etud[n].moyen);
		printf("Filiere : ");
		scanf("%s",etud[n].filiere);
		printf("\n\n");
		n++;
	}
}

void Afficher()
{
	for(i=1;i<n;i++)
	{
		printf(YEL"%d\t",etud[i].num);
		printf("%s\t",etud[i].nom);
		printf("%s\t",etud[i].prenom);
		printf("%.2f\t",etud[i].moyen);
		printf("%s\t\n\n",etud[i].filiere);
	}
}

void Afficher_Admis()
{
	printf(RED"\n\nLes etudiant admis sont :\n\n");
	for(i=1;i<=n;i++)
	{
		if(etud[i].moyen > 10)
		{
			printf(YEL"%d\t",etud[i].num);
			printf("%s\t",etud[i].nom);
			printf("%s\t",etud[i].prenom);
			printf("%.2f\t",etud[i].moyen);
			printf("%s\t\n\n",etud[i].filiere);
		}
	}
}

void Afficher_Filiere()
{
	char Filiere[10];
	printf(RED"Entrer le filiere : ");
	scanf("%s",&Filiere);
	for(i=1;i<=n;i++)
	{
		if(strcmp(etud[i].filiere,Filiere)==0)
		{
			printf(YEL"Numero d'inscription : %d\n",etud[i].num);
			printf("Nom : %s\n",etud[i].nom);
			printf("Prenom : %s\n",etud[i].prenom);
			printf("Moyenne : %.2f\n",etud[i].moyen);
			printf("Filiere : %s\n\n",etud[i].filiere);
		}
	}
}

void Rechercher_Num()
{
	int Num;
	printf(RED"Entrer le numero d'etudiant : ");
	scanf("%d",&Num);
	for(i=1;i<=n;i++)
	{
		if(etud[i].num==Num)
		{
			printf(YEL"Numero d'inscription : %d\n",etud[i].num);
			printf("Nom : %s\n",etud[i].nom);
			printf("Prenom : %s\n",etud[i].prenom);
			printf("Moyenne : %.2f\n",etud[i].moyen);
			printf("Filiere : %s\n\n",etud[i].filiere);
		}
	}
}

void Rechercher_Nom()
{
	char Nom[30];
	printf(RED"Entret le nom d'etudiant : ");
	scanf("%s",Nom);
	for(i=1;i<=n;i++)
	{
		if(strcmp(etud[i].nom,Nom)==0)
		{
			printf(YEL"Numero d'inscription : %d\n",etud[i].num);
			printf("Nom : %s\n",etud[i].nom);
			printf("Prenom : %s\n",etud[i].prenom);
			printf("Moyenne : %.2f\n",etud[i].moyen);
			printf("Filiere : %s\n\n",etud[i].filiere);
		}
	}
}

void Rechercher_Prenom()
{
	char Prenom[30];
	printf(RED"Entret le prenom d'etudiant : ");
	scanf("%s",Prenom);
	for(i=1;i<=n;i++)
	{
		if(strcmp(etud[i].prenom,Prenom)==0)
		{
			printf(YEL"Numero d'inscription : %d\n",etud[i].num);
			printf("Nom : %s\n",etud[i].nom);
			printf("Prenom : %s\n",etud[i].prenom);
			printf("Moyenne : %.2f\n",etud[i].moyen);
			printf("Filiere : %s\n\n",etud[i].filiere);
		}
	}
}

void Modifier()
{
	int Num,M;
	printf(RED"Entrer le numero d'etudiant : ");
	scanf("%d",&Num);
	for(i=1;i<=n;i++)
	{
		if(etud[i].num==Num)
		{
			M=i;
		}
	}
	printf(YEL"Numero d'inscreption : ");
	scanf("%d",&etud[M].num);
	printf("Nom : ");
	scanf("%s",etud[M].nom);
	printf("Prenom : ");
	scanf("%s",etud[M].prenom);
	printf("Moyenne : ");
	scanf("%f",&etud[M].moyen);
	printf("Filiere : ");
	scanf("%s",etud[M].filiere);
	printf("\n\n");
}

void Supprimer()
{
	int Num,M;
	printf(RED"Entrer le numero d'etudiant : ");
	scanf("%d",&Num);
	for(i=1;i<=n;i++)
	{
		if(etud[i].num==Num)
		{
			M=i;
			n--;
			for(j=M;j<=n;j++)
			{
				etud[j]=etud[j+1];
			}
		}
	}
}

void Trier_Num()
{
	int permu;
	do
	{
		permu=0;
		for(i=1;i<n-1;i++)
		{
			if(etud[i].num>etud[i+1].num)
			{
				Tri[i].NUM=etud[i].num;
				strcpy(Tri[i].NOM,etud[i].nom);
				strcpy(Tri[i].PRENOM,etud[i].prenom);
				Tri[i].MOYEN=etud[i].moyen;
				strcpy(Tri[i].FILIERE,etud[i].filiere);
				
				etud[i].num=etud[i+1].num;
				strcpy(etud[i].nom,etud[i+1].nom);
				strcpy(etud[i].prenom,etud[i+1].prenom);
				etud[i].moyen=etud[i+1].moyen;
				strcpy(etud[i].filiere,etud[i+1].filiere);
				
				etud[i+1].num=Tri[i].NUM;
				strcpy(etud[i+1].nom,Tri[i].NOM);
				strcpy(etud[i+1].prenom,Tri[i].PRENOM);
				etud[i+1].moyen=Tri[i].MOYEN;
				strcpy(etud[i+1].filiere,Tri[i].FILIERE);
				
				permu=1;
			}
		}
	}
	while(permu!=0);
	printf(RED"les etudiants sont trier\n\n");
	for(i=1;i<n;i++)
	{
		printf(YEL"\t\t>>> %2d >> \t",i);
		printf("%d\t",etud[i].num);
		printf("%s\t",etud[i].nom);
		printf("%s\t",etud[i].prenom);
		printf("%.2f\t",etud[i].moyen);
		printf("%s\t\n\n",etud[i].filiere);
	}
}

void Trier_Nom()
{
	int permu;
	do
	{
		permu=0;
		for(i=1;i<n-1;i++)
		{
			if(strcmp(etud[i].nom,etud[i+1].nom)>0)
			{
				Tri[i].NUM=etud[i].num;
				strcpy(Tri[i].NOM,etud[i].nom);
				strcpy(Tri[i].PRENOM,etud[i].prenom);
				Tri[i].MOYEN=etud[i].moyen;
				strcpy(Tri[i].FILIERE,etud[i].filiere);
				
				etud[i].num=etud[i+1].num;
				strcpy(etud[i].nom,etud[i+1].nom);
				strcpy(etud[i].prenom,etud[i+1].prenom);
				etud[i].moyen=etud[i+1].moyen;
				strcpy(etud[i].filiere,etud[i+1].filiere);
				
				etud[i+1].num=Tri[i].NUM;
				strcpy(etud[i+1].nom,Tri[i].NOM);
				strcpy(etud[i+1].prenom,Tri[i].PRENOM);
				etud[i+1].moyen=Tri[i].MOYEN;
				strcpy(etud[i+1].filiere,Tri[i].FILIERE);
				
				permu=1;
			}
		}
	}
	while(permu!=0);
	printf(RED"les etudiants sont trier\n\n");
	for(i=1;i<n;i++)
	{
		printf(YEL"\t\t>>> %2d >> \t",i);
		printf("%d\t",etud[i].num);
		printf("%s\t",etud[i].nom);
		printf("%s\t",etud[i].prenom);
		printf("%.2f\t",etud[i].moyen);
		printf("%s\t\n\n",etud[i].filiere);
	}
}

void Trier_Prenom()
{
	int permu;
	do
	{
		permu=0;
		for(i=1;i<n-1;i++)
		{
			if(strcmp(etud[i].prenom,etud[i+1].prenom)>0)
			{
				Tri[i].NUM=etud[i].num;
				strcpy(Tri[i].NOM,etud[i].nom);
				strcpy(Tri[i].PRENOM,etud[i].prenom);
				Tri[i].MOYEN=etud[i].moyen;
				strcpy(Tri[i].FILIERE,etud[i].filiere);
				
				etud[i].num=etud[i+1].num;
				strcpy(etud[i].nom,etud[i+1].nom);
				strcpy(etud[i].prenom,etud[i+1].prenom);
				etud[i].moyen=etud[i+1].moyen;
				strcpy(etud[i].filiere,etud[i+1].filiere);
				
				etud[i+1].num=Tri[i].NUM;
				strcpy(etud[i+1].nom,Tri[i].NOM);
				strcpy(etud[i+1].prenom,Tri[i].PRENOM);
				etud[i+1].moyen=Tri[i].MOYEN;
				strcpy(etud[i+1].filiere,Tri[i].FILIERE);
				
				permu=1;
			}
		}
	}
	while(permu!=0);
	printf(RED"les etudiants sont trier\n\n");
	for(i=1;i<n;i++)
	{
		printf(YEL"\t\t>>> %2d >> \t",i);
		printf("%d\t",etud[i].num);
		printf("%s\t",etud[i].nom);
		printf("%s\t",etud[i].prenom);
		printf("%.2f\t",etud[i].moyen);
		printf("%s\t\n\n",etud[i].filiere);
	}
}

void Enregistrer()
{
	char fichier[20];
	FILE *f;
	printf(RED"Entrez le nom de fichier : ");
	scanf("%s",fichier);
	f=fopen(fichier,"w");
	for(i=1;i<n;i++)
	{
		fprintf(f,"Numero d'inscription : %d\n",etud[i].num);
		fprintf(f,"Nom : %s\n",etud[i].nom);
		fprintf(f,"Prenom : %s\n",etud[i].prenom);
		fprintf(f,"Moyenne : %.2f\n",etud[i].moyen);
		fprintf(f,"Filiere : %s\n\n",etud[i].filiere);
	}
	fclose(f);
}
void Lire()
{
	char fichier[20],Nom[20],FICH[MAX_F];
	FILE* f = NULL;
	printf(RED"Entrez le nom de fichier : ");
	scanf("%s",fichier);
	printf (WHT"Le contenu du fichier %s est :\n\n\n",fichier);
	f=fopen(fichier,"r");
	if(f != NULL)
	{
		char c;
		do
		{
			c =getc(f);
			printf("%c",c);
		}while(c!=EOF);
	}
	else 
	{
		printf("\nImpossible..!\n");
	}
}
void EcrireSimox()
{
	puts("    ____                                           ");
	puts("   /\  _`\      __                                 ");
	puts("   \ \,\L\_\   /\_\     ___ ___      ___    __  _  ");
	puts("    \/_\__ \   \/\ \  /' __` __`\   / __`\ /\ \/'\ ");
	puts("      /\ \L\ \  \ \ \ /\ \/\ \/\ \ /\ \L\ \\/>  </ ");
	puts("      \ `\____\  \ \_\\ \_\ \_\ \_\\ \____/ /\_/\_\ ");
	puts("       \/_____/   \/_/ \/_/\/_/\/_/ \/___/  \//\/_/ \n\n");
}
void Quitter()
{
	printf(RED"\n\t  --------------->>>"GRN" FIN "RED"<<<---------------\n");
	printf("\t----------------------------------------------\n");
}

void Default(int def)
{
	printf(WHT"Votre choix (%d) n'est pas valide ...!\n\n"RESET,def);
}

int main()
{
	system("cls");
	do
	{
		printf(RED"""======================================================\n");
		printf("================ "GRN"Gestion des etudiants"RED" ===============\n");
		printf("======================================================\n"RESET);
		EcrireSimox();
		printf(MAG"\n\n\n\t\t\tTotal des etudiants = %d",n-1);
		printf("\n\t\t\t------------------------\n\n");
		printf(YEL"\t 1 - Ajouter-------------------------------------\n");
		printf(GRN"\t\t\t\tun etudiant--------------------------\n");
		printf("\t\t\t\tplusieur etudiants-------------------\n\n");
		printf(YEL"\t 2 - Afficher------------------------------------\n");
		printf(GRN"\t\t\t\tliste des etudiants------------------\n");
		printf("\t\t\t\tles etudiant admis-------------------\n");
		printf("\t\t\t\tles etudiant d'une filiere-----------\n\n");
		printf(YEL"\t 3 - Rechercher un etudiant----------------------\n");
		printf(GRN"\t\t\t\tpar numeo---------------------------\n");
		printf("\t\t\t\tpar nom------------------------------\n");
		printf("\t\t\t\tpar prenom---------------------------\n\n");
		printf(YEL"\t 4 - Trier les etudiants-------------------------\n");
		printf(GRN"\t\t\t\tpar numero---------------------------\n");
		printf("\t\t\t\tpar nom------------------------------\n");
		printf("\t\t\t\tpar prenom---------------------------\n\n");
		printf(YEL"\t 5 - Modifier un etudiant------------------------\n");
		printf(YEL"\t 6 - Supprimer un etudiant-----------------------\n");
		printf(YEL"\t 7 - Enregistrer dans le fichier-----------------\n");
		printf(YEL"\t 8 - lire un fichier-----------------------------\n");
		printf(YEL"\t 9 - Quitter-------------------------------------\n");
		printf(CYN"\n\t         Entrer votre choix : ");
		scanf("%d",&choix);
		
		switch(choix)
		{
			case 1:
				system("cls");
				do
				{
					printf(CYN"\t\t 1 - un etudiant----------------------\n");
					printf("\t\t 2 - plusieur etudiants---------------\n");
					printf("\t\t 3 - Menu-----------------------------\n");
					printf(MAG"\n\t\t\t Entrer votre choix : ");
					scanf("%d",&chx);
				 	switch(chx)
					{
						case 1:system("cls");Ajouter();break;
						case 2:system("cls");Ajouter_N();break;
						case 3:system("cls");break;
						default:system("cls");Default(chx);break;
					}
				}
				while(chx!=3);
			break;
				
			case 2:system("cls");
				do
				{
				 	printf(CYN"\t\t 1 - liste des etudiants--------------\n");
					printf("\t\t 2 - les etudiant admis---------------\n");
					printf("\t\t 3 - les etudiant d'une filiere-------\n");
					printf("\t\t 4 - Menu-----------------------------\n");
					printf(MAG"\n\t\t\t Entrer votre choix : ");
			 		scanf("%d",&chx);
					switch(chx)
					{
						case 1:system("cls");Afficher();break;
						case 2:system("cls");Afficher_Admis();break;
						case 3:system("cls");Afficher_Filiere();break;
						case 4:system("cls");break;
						default:system("cls");Default(chx);break;
					}
				}
				while(chx!=4);
			break;
				
			case 3:system("cls");
				do
				{
					printf(CYN"\t\t 1 - par numero-----------------------\n");
					printf("\t\t 2 - par nom--------------------------\n");
					printf("\t\t 3 - par prenom-----------------------\n");
					printf("\t\t 4 - Menu-----------------------------\n");
					printf(MAG"\n\t\t\t Entrer votre choix : ");
					scanf("%d",&chx);
					switch(chx)
				 	{
						case 1:system("cls");Rechercher_Num();break;
						case 2:system("cls");Rechercher_Nom();break;
				 		case 3:system("cls");Rechercher_Prenom();break;
						case 4:system("cls");break;
						default:system("cls");Default(chx);break;
					}
				}
				while(chx!=4);
			break;
					
			case 4:system("cls");
				do
				{
					printf(CYN"\t\t 1 - par numero-----------------------\n");
					printf("\t\t 2 - par nom--------------------------\n");
					printf("\t\t 3 - par prenom-----------------------\n");
					printf("\t\t 4 - Menu-----------------------------\n");
					printf(MAG"\n\t\t\t Entrer votre choix : ");
					scanf("%d",&chx);
					switch(chx)
					{
						case 1:system("cls");Trier_Num();break;
						case 2:system("cls");Trier_Nom();break;
						case 3:system("cls");Trier_Prenom();break;
						case 4:system("cls");break;
						default:system("cls");Default(chx);break;
					}
				}
				while(chx!=4);
			break;
				
			case 5:system("cls");Modifier();break;
			case 6:system("cls");Supprimer();break;
			case 7:system("cls");Enregistrer();break;
			case 8:system("cls");Lire();break;
			case 9:Quitter();break;
			default:system("cls");Default(choix);
			break;
		}
	}
	while(choix!=9);
	getch();
}
