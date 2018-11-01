#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu1();
int menu2();
typedef struct etudiant{
    char p[20];
    char n[20];
    char num[20];
}etudiant;
typedef struct identifiant{
char log[20];
char mot[20];
}identifiant;
typedef struct professeur{
    char p[20];
    char n[20];
    char num[20];
}professeur;

int menu1(){
    int i;
    printf("\t\t_______________________________________________________\n");
    printf("\t\t _____________________________________________________\n");
    printf("\t\t  BIENVENUE SUR LE PORTAIL D'INFORMATION DE LA L1TDSI:\n");
    printf("\t\t\t        QUE VOULEZ-VOUS FAIRE\n");
    printf("\t\t _____________________________________________________\n");
    printf("\t\t_______________________________________________________\n\n");
    printf(" ________________\n");
    printf("|1.VOUS CONNECTER|\n");
    printf("|________________|\n\n");
    printf("\t _______________________\n");
    printf("\t|2.QUITTER L'APPLICATION|\n");
    printf("\t|_______________________|\n\n\t==>");
    scanf("%d",&i);
    while(i!=1 && i!=2)
    {
        system("CLS");
        printf("\tSAISIE INCORRECTE. SAISISSEZ A NOUVEAU\n");
        printf("|1.VOUS CONNECTER|\n");
        printf("|________________|\n\n");
        printf("\t _______________________\n");
        printf("\t|2.QUITTER L'APPLICATION|\n");
        printf("\t|_______________________|\n\n\t==>");
        scanf("%d",&i);
    }
    return i;

};
int menu2(){
    int j;
        printf("\t\t\tVOUS CONNECTER EN TANTQUE:\n");
        printf(" __________\n");
        printf("|1.ETUDIANT|\n");
        printf("|__________|\n\n");
        printf("\t ____________\n");
        printf("\t|2.PROFESSEUR|\n");
        printf("\t|____________|\n\n");
        printf("\t\t ________________\n");
        printf("\t\t|3.ADMINISTRATEUR|\n");
        printf("\t\t|________________|\n\n");
        printf("\t\t\t _________\n");
        printf("\t\t\t|4.QUITTER|\n");
        printf("\t\t\t|_________|\n\n\t\t\t==>");
        scanf("%d",&j);
         while(j!=1 && j!=2 && j!=3 && j!=4)
    {
        system("CLS");
        printf("\tSAISIE INCORRECTE. SAISISSEZ A NOUVEAU\n");
        printf(" __________\n");
        printf("|1.ETUDIANT|\n");
        printf("|__________|\n\n");
        printf("\t ____________\n");
        printf("\t|2.PROFESSEUR|\n");
        printf("\t|____________|\n\n");
        printf("\t\t ________________\n");
        printf("\t\t|3.ADMINISTRATEUR|\n");
        printf("\t\t|________________|\n\n");
        printf("\t\t\t _________\n");
        printf("\t\t\t|4.QUITTER|\n");
        printf("\t\t\t|_________|\n\n\t\t\t==>");
        scanf("%d",&j);
    }
        return j;
        };
int menu3(){
    int r;
        printf("\tQUE VOULEZ VOUS FAIRE\n");
        printf(" _____________________________\n");
        printf("|1.CONSULTER L'EMPLOI DU TEMPS|\n");
        printf("|_____________________________|\n\n");
        printf("\t ____________________________\n");
        printf("\t|2.VOIR MON BULLETIN DE NOTES|\n");
        printf("\t|____________________________|\n\n");
        printf("\t\t ________________\n");
        printf("\t\t|3.SE DECONNECTER|\n");
        printf("\t\t|________________|\n\n\t\t==>");
        scanf("%d",&r);
     while(r!=1 && r!=2 && r!=3)
    {
        system("CLS");
        printf("\t\t\tSAISIE INCORRECTE. SAISISSEZ A NOUVEAU\n");
        printf(" _____________________________\n");
        printf("|1.CONSULTER L'EMPLOI DU TEMPS|\n");
        printf("|_____________________________|\n\n");
        printf("\t ____________________________\n");
        printf("\t|2.VOIR MON BULLETIN DE NOTES|\n");
        printf("\t|____________________________|\n\n");
        printf("\t\t ________________\n");
        printf("\t\t|3.SE DECONNECTER|\n");
        printf("\t\t|________________|\n\n\t\t==>");
        scanf("%d",&r);
    }
    return r;
};
int menu4(){
    int t;
        printf("\tQUE VOULEZ VOUS FAIRE\n");
        printf(" _____________________________\n");
        printf("|1.CONSULTER L'EMPLOI DU TEMPS|\n");
        printf("|_____________________________|\n\n");
        printf("\t _____________________________________\n");
        printf("\t|2.VOIR LA LISTE DE TOUS LES ETUDIANTS|\n");
        printf("\t|_____________________________________|\n\n");
        printf("\t\t _______________________________\n");
        printf("\t\t|3.VOIR LES NOTES D'UN ETUDIANTS|\n");
        printf("\t\t|_______________________________|\n\n");
        printf("\t\t\t ________________\n");
        printf("\t\t\t|4.SE DECONNECTER|\n");
        printf("\t\t\t|________________|\n\n==>");
        scanf("%d",&t);
    while(t!=1 && t!=2 && t!=3 &&t!=4)
    {
        system("CLS");
        printf("\t\t\tSAISIE INCORRECTE. SAISISSEZ A NOUVEAU\n");
        printf(" _____________________________\n");
        printf("|1.CONSULTER L'EMPLOI DU TEMPS|\n");
        printf("|_____________________________|\n\n");
        printf("\t _____________________________________\n");
        printf("\t|2.VOIR LA LISTE DE TOUS LES ETUDIANTS|\n");
        printf("\t|_____________________________________|\n\n");
        printf("\t\t _______________________________\n");
        printf("\t\t|3.VOIR LES NOTES D'UN ETUDIANTS|\n");
        printf("\t\t|_______________________________|\n\n");
        printf("\t\t\t ________________\n");
        printf("\t\t\t|4.SE DECONNECTER|\n");
        printf("\t\t\t|________________|\n\n==>");
        scanf("%d",&t);
    }
    return t;
};
int menu5(){
    int k;
        printf("\t~~~~~~CONNEXION REUSSIE~~~~~~\n");
        printf("\tQUE VOULEZ VOUS FAIRE\n");
        printf(" _____________________\n");
        printf("|1.AJOUTER UN ETUDIANT|\n");
        printf("|_____________________|\n");
        printf(" _______________________\n");
        printf("|2.SUPPRIMER UN ETUDIANT|\n");
        printf("|_______________________|\n\n");
        printf("\t _______________________\n");
        printf("\t|3.AJOUTER UN PROFESSEUR|\n");
        printf("\t|_______________________|\n");
        printf("\t _________________________\n");
        printf("\t|4.SUPPRIMER UN PROFESSEUR|\n");
        printf("\t|_________________________|\n\n");
        printf("\t\t _____________________________________\n");
        printf("\t\t|5.VOIR LA LISTE DE TOUS LES ETUDIANTS|\n");
        printf("\t\t|_____________________________________|\n");
        printf("\t\t _______________________________________\n");
        printf("\t\t|6.VOIR LA LISTE DE TOUS LES PROFESSEURS|\n");
        printf("\t\t|_______________________________________|\n\n");
        printf("\t\t\t ____________________________\n");
        printf("\t\t\t|7.MODIFIER L'EMPLOI DU TEMPS|\n");
        printf("\t\t\t|____________________________|\n");
        printf("\t\t\t ________________\n");
        printf("\t\t\t|8.SE DECONNECTER|\n");
        printf("\t\t\t|________________|\n\n\t\t\t==>");
        scanf("%d",&k);
    while(k!=1 && k!=2 && k!=3 && k!=4 &&k!=5 && k!=6 && k!=7 && k!=8)
    {
        system("CLS");
        printf("\t\t\tSAISIE INCORRECTE. SAISISSEZ A NOUVEAU\n");
        printf(" _____________________\n");
        printf("|1.AJOUTER UN ETUDIANT|\n");
        printf("|_____________________|\n");
        printf(" _______________________\n");
        printf("|2.SUPPRIMER UN ETUDIANT|\n");
        printf("|_______________________|\n\n");
        printf("\t _______________________\n");
        printf("\t|3.AJOUTER UN PROFESSEUR|\n");
        printf("\t|_______________________|\n");
        printf("\t _________________________\n");
        printf("\t|4.SUPPRIMER UN PROFESSEUR|\n");
        printf("\t|_________________________|\n\n");
        printf("\t\t _____________________________________\n");
        printf("\t\t|5.VOIR LA LISTE DE TOUS LES ETUDIANTS|\n");
        printf("\t\t|_____________________________________|\n");
        printf("\t\t _______________________________________\n");
        printf("\t\t|6.VOIR LA LISTE DE TOUS LES PROFESSEURS|\n");
        printf("\t\t|_______________________________________|\n\n");
        printf("\t\t\t ____________________________\n");
        printf("\t\t\t|7.MODIFIER L'EMPLOI DU TEMPS|\n");
        printf("\t\t\t|____________________________|\n\n");
        printf("\t\t\t ________________\n");
        printf("\t\t\t|8.SE DECONNECTER|\n");
        printf("\t\t\t|________________|\n\n\t\t\t==>");
        scanf("%d",&k);
    }
    return k;
};
void supetu()
{
    char ex[20], a[20], b[20], c[20];
    printf("\t __________________________________________\n");
    printf("\t|ENTRER LE NUMERO DE L'ETUDIANT A SUPPRIMER|\n");
    printf("\t|__________________________________________|==>");
    scanf("%s",&ex);
    FILE *ft;
    FILE *f;
    f=fopen("etudiants.txt","r");
    if(f!=NULL)
      {
        ft=fopen("tests.txt","a");
        if(ft!=NULL)
        {
            while(!feof(f))
            {
            fscanf(f,"%s %s %s", &a,&b,&c);
            if(strcmp(ex,c)!=0 && feof(f)==0)
                {
                    fprintf(ft,"%s %s %s\n", a,b,c);
                }
            }fclose(ft);
        }fclose(f);
        remove("etudiants.txt");
        rename("tests.txt","etudiants.txt");

      }
        printf("\tSUPPRESSION REUSSIE\n");
};
void suppro()
{
    char ex[20], a[20], b[20], c[20];
    printf("\t ______________________________________________\n");
    printf("\t|ENTRER L'IDENTIFIANT DU PROFESSEUR A SUPPRIMER|\n");
    printf("\t|______________________________________________|==>");
    scanf("%s",&ex);
    FILE *fp;
    FILE *f;
    f=fopen("professeurs.txt","r");
    if(f!=NULL)
      {
        fp=fopen("test.txt","a");
        if(fp!=NULL)
        {
            while(!feof(f))
            {
            fscanf(f,"%s %s %s", &a,&b,&c);
            if(strcmp(ex,c)!=0 && feof(fp)==0)
                {
                    fprintf(fp,"%s %s %s\n", a,b,c);
                }
            }fclose(fp);
        }fclose(f);
        remove("professeurs.txt");
        rename("test.txt","professeurs.txt");

      }
        printf("\tSUPPRESSION REUSSIE\n");
};
void listet()
{
    char ch[100];
        printf("\t\t _____________________________________\n");
        printf("\t\t|VOICI LA LISTE DE TOUS LES ETUDIANTS |\n");
        printf("\t\t|_____________________________________|\n\n");
        FILE *f;
        f=fopen("etudiants.txt","r");
        if(f!=NULL)
            {
                while(fgets(ch,50,f)!=NULL)
                {
                    puts(ch);
                }
                fclose(f);
                fflush(stdin);
            }
};
void listpr()
{
    char ch[100];
    printf("\t\t ______________________________________\n");
    printf("\t\t|VOICI LA LISTE DE TOUS LES PROFESSEURS|\n");
    printf("\t\t|______________________________________|\n\n");
    FILE *f;
    f=fopen("professeurs.txt","r");
    if(f!=NULL)
        {
            while(fgets(ch,50,f)!=NULL)
            {
                puts(ch);
            }
            fclose(f);
            fflush(stdin);
        }
};
void emploi()
{
    char ch[100];
    printf("\t\t _______________________\n");
    printf("\t\t|VOICI L'EMPLOI DU TEMPS|\n");
    printf("\t\t|_______________________|\n\n");
    FILE *fe;
    fe=fopen("emploi.txt","r");
    if(fe!=NULL)
        {
            while(fgets(ch,50,fe)!=NULL)
            {
                puts(ch);
            }fclose(fe);
        }fflush(stdin);
};
void conexetu()
{
    char etl[20], etm[20], ex[50], a[20], b[20], c[20];
    int t, avis;
    printf("\tVOUS VOUS CONNECTER EN TANT QU'ETUDIANT\n");
    do{
    printf("\t __________________\n");
    printf("\t|ENTRER VOTRE LOGIN|\n");
    printf("\t|__________________|==>");
    fflush(stdin);
    gets(etl);
    printf("\t _________________________\n");
    printf("\t|ENTRER VOTRE MOT DE PASSE|\n");
    printf("\t|_________________________|==>");
    fflush(stdin);
    gets(etm);
    system("CLS");
    FILE *f;
    f=fopen("etudiants.txt","r");
    if(f!=NULL)
        {
            while(fscanf(f,"%s %s %s",&a,&b,&c)!=NULL)
            {
            if(strcmp(etl,a)!=0 || strcmp(etm,c)!=0)
                {
                    fseek(f,1L,SEEK_CUR);
                    if(fgets(ex,20,f)==NULL)
                        {
                            printf("DESOLE. VOUS NE FIGUREZ PAS SUR LA LISTE DES ETUDIANTS\n");
                            break;
                        }
                }else
                {
                    printf("\t~~~~CONNEXION REUSSIE~~~~\n");
                    printf("\tBIENVENU ETUDIANT %s %s\n",a,b);
                    switch(menu3()){
                        case 1:
                            system("CLS");
                            emploi();break;
                        case 2:
                            system("CLS");
                            printf("VOUS VOULEZ VOIR VOTRE BULLETIN DE NOTES:\n");
                            bultetu();break;
                        case 3:
                            system("CLS");
                            return 0;
                        }break;
                    }
                }
            }fclose(f);
            printf("TAPER 1 POUR REESSAYER OU 0 POUR QUITTER\n");
            scanf("%d",&avis);
}while(avis!=0);
};
void bultetu()
{
    char ch[250], ex[20], a[20], b[20], c[20], neb[20], etm[20];
    int I, test;
    printf(" _______________________\n");
    printf("|ENTRER VOTRE N°ETUDIANT|\n");
    printf("|_______________________|==>");
    fflush(stdin);
    gets(neb);
    FILE *fb;
    fb=fopen("bulletin.txt","r");
    if(fb!=NULL)
        {
            do{
                fscanf(fb,"%s %s %s",&a,&b,&c);
                if(strcmp(etm,c)==0)
                    {
                        test=1;
                        printf(" _________________________________________\n");
                        printf("|VOICI VOTRE BULLETIN DE NOTES %s %s      |\n",a,b);
                        printf("|_________________________________________|\n\n");
                        for(I=1; I<=9; I++)
                            {
                                fseek(fb,1L,SEEK_CUR);
                                fgets(ch,200,fb);
                                puts(ch);
                            }
                            break;
                    }else
                    {
                        fseek(fb,9L,SEEK_CUR);
                    }
                    }while(!feof(fb));
                    fclose(fb);
                }
                if(test!=1)
                    {
                        printf("DESOLE. VOUS NE FIGUREZ PAS SUR LA LISTE DES ETUDIANTS\n");
                    }
};
void conexpr()
{
    char prl[20], prm[20], ex[50], a[20], b[20], c[20];
    int avis;
    printf("\tVOUS VOUS CONNECTER EN TANT QUE PROFESSEUR\n");
            do{
                printf("\t __________________\n");
                printf("\t|ENTRER VOTRE LOGIN|\n");
                printf("\t|__________________|==>");
                fflush(stdin);
                gets(prl);
                printf("\t _________________________\n");
                printf("\t|ENTRER VOTRE MOT DE PASSE|\n");
                printf("\t|_________________________|==>");
                fflush(stdin);
                gets(prm);
                system("CLS");
                FILE *f;
                f=fopen("professeurs.txt","r");
                if(f!=NULL)
                    {
                        while(fscanf(f,"%s %s %s",&a,&b,&c)!=NULL)
                        {
                            if(strcmp(prl,a)!=0 || strcmp(prm,c)!=0)
                                {
                                    fseek(f,1L,SEEK_CUR);
                                    if(fgets(ex,20,f)==NULL)
                                        {
                                            printf("DESOLE. VOUS NE FIGUREZ PAS SUR LA LISTE DES PROFESSEURS\n");
                                            break;
                                        }
                                }else
                                {
                                printf("\t~~~~CONNEXION REUSSIE~~~~\n");
                                printf("\tBIENVENU PROFESSEUR %s %s\n",a,b);
                                switch(menu4()){
                                case 1:
                                    system("CLS");
                                    emploi();break;
                                case 2:
                                    system("CLS");
                                    listet();break;
                                case 3:
                                    system("CLS");
                                    bultetu();break;
                                case 4:
                                    system("CLS");
                                    return 0;
                                    }break;
                                }
                        }fclose(f);
                    }
                    printf("TAPER 1 POUR REESSAYER OU 0 POUR QUITTER\n");
                    scanf("%d",&avis);
                }while(avis!=0);
};
void conexad()
{
    char adl[20], adm[20];
    int re,k;
    printf("\tVOUS VOUS CONNECTER EN TANT QU' ADMINISTRATEUR\n");
    printf("\t __________________\n");
    printf("\t|ENTRER VOTRE LOGIN|\n");
    printf("\t|__________________|==>");
    fflush(stdin);
    gets(adl);
    fflush(stdin);
    printf("\t _________________________\n");
    printf("\t|ENTRER VOTRE MOT DE PASSE|\n");
    printf("\t|_________________________|==>");
    fflush(stdin);
    gets(adm);
    fflush(stdin);
    while(strcmp(adl,"ADMIN")!=0 || strcmp(adm,"TDSI")!=0)
    {
        printf("\n\tSAISIE INCORRECTE\n");
        printf("\t __________________\n");
        printf("\t|1.SAISIR A NOUVEAU|\n");
        printf("\t|__________________|\n");
        printf("\t _________\n");
        printf("\t|2.QUITTER|\n");
        printf("\t|_________|\n\n\t==>");
        scanf("%d", &re);
        if(re==1)
            {
                printf("\t __________________\n");
                printf("\t|ENTRER VOTRE LOGIN|\n");
                printf("\t|__________________|==>");
                fflush(stdin);
                gets(adl);
                fflush(stdin);
                printf("\t _________________________\n");
                printf("\t|ENTRER VOTRE MOT DE PASSE|\n");
                printf("\t|_________________________|==>");
                fflush(stdin);
                gets(adm);
                fflush(stdin);
                }else
                {
                    return 0;
                }
            }
            system("CLS");
            switch(menu5()){
            case 1:
                system("CLS");
                ajoutetu();break;
            case 2:
                system("CLS");
                supetu();break;
            case 3:
                system("CLS");
                ajoutpr();break;
            case 4:
                system("CLS");
                suppro();break;
            case 5:
                system("CLS");
                listet();break;
            case 6:
                system("CLS");
                listpr();break;
            case 7:
                system("CLS");
                emploi();break;
            case 8:
                return 0;
            }
};
void ajoutetu()
{
    int ne, z;
    printf(" ____________________________________________________\n");
    printf("|ENTRER LE NOMBRE D'ETUDIANTS QUE VOUS VOULEZ AJOUTER|\n");
    printf("|____________________________________________________|\t==>");
    scanf("%d",&ne);
    FILE *f=NULL;
    f=fopen("etudiants.txt","a");
    if(f!=NULL)
        {
           // fprintf(f,"PRENOMS\tNOMS\tNUMERO_ETUDIANT\n");
            //fflush(stdin);
            printf("VEUILLER SAISIR LES INFORMATIONS SUIVANTES\n\n");
            for(z=1;z<=ne; z++ )
                {
                    etudiant etu;
                    printf("\n\tETUDIANT %d\n",z);
                    printf("\t ________________\n");
                    printf("\t|ENTRER LE PRENOM|\n");
                    printf("\t|________________|==>");
                    fflush(stdin);
                    gets(etu.p);
                    printf("\t _____________\n");
                    printf("\t|ENTRER LE NOM|\n");
                    printf("\t|_____________|==>");
                    fflush(stdin);
                    gets(etu.n);
                    printf("\t _________________________\n");
                    printf("\t|ENTRER LE NUMERO ETUDIANT|\n");
                    printf("\t|_________________________|==>");
                    fflush(stdin);
                    gets(etu.num);
                    fprintf(f,"%s\t%s\t%s\n",etu.p,etu.n,etu.num);
                }
            }
            fflush(stdin);
            fclose(f);
            printf("\tL'ETUDIANT A ETE AJOUTE AVEC SUCCES\n");
};
void ajoutpr()
{
    int ne, z;
    printf(" _______________________________________________________\n");
    printf("|ENTRER LE NOMBRE DE PROFESSEURS QUE VOUS VOULEZ AJOUTER|\n");
    printf("|_______________________________________________________|==>");
    scanf("%d",&ne);
    FILE *fp;
    fp=fopen("professeurs.txt","a");
    if(fp!=NULL)
        {
            //fprintf(fp,"PRENOMS\tNOMS\tIDENTIFIANTS\n");
            //fflush(stdin);
            printf("VEUILLER SAISIR LES INFORMATIONS SUIVANTES\n");
            for(z=1;z<=ne; z++ )
                {
                    professeur pro;
                    printf("\n\tPROFESSEUR %d\n",z);
                    printf("\t ________________\n");
                    printf("\t|ENTRER LE PRENOM|\n");
                    printf("\t|________________|==>");
                    fflush(stdin);
                    gets(pro.p);
                    printf("\t _____________\n");
                    printf("\t|ENTRER LE NOM|\n");
                    printf("\t|_____________|==>");
                    fflush(stdin);
                    gets(pro.n);
                    printf("\t ____________________\n");
                    printf("\t|ENTRER L'IDENTIFIANT|\n");
                    printf("\t|____________________|==>");
                    fflush(stdin);
                    gets(pro.num);
                    fprintf(fp,"%s\t%s\t%s\n",pro.p,pro.n,pro.num);
                }
                fflush(stdin);
                fclose(fp);
            }
            printf("\tLE PROFESSEUR A ETE AJOUTE AVEC SUCCES\n");
};
void designe()
{
        printf("\t\t _____________________________________________________\n");
        printf("\t\t|  _________________________________________________  |\n");
        printf("\t\t| |     _______________________________     ___     | |\n");
        printf("\t\t| |    |              |             /  |   |   |    | |\n");
        printf("\t\t| |    |   ________  |   __________/    |  |   |    | |\n");
        printf("\t\t| |    |  |        ||   |                | |   |    | |\n");
        printf("\t\t| |    |  |________||   |_________        ||   |    | |\n");
        printf("\t\t| |    |             |            |        |   |    | |\n");
        printf("\t\t| |    |   ________   |________    |   |       |    | |\n");
        printf("\t\t| |    |  |        |           |    |  ||      |    | |\n");
        printf("\t\t| |    |  |        |   ________|    |  | |     |    | |\n");
        printf("\t\t| |    |  |        |  /            |   |  |    |    | |\n");
        printf("\t\t| |    |__|        |_/_____________|___|   |___|    | |\n");
        printf("\t\t| |_________________________________________________| |\n");
        printf("\t\t|_____________________________________________________|\n\n");
};
void designe1()
{
    printf("\t\t __________________________\n");
    printf("\t\t|**************************|\t|********\n");
    printf("\t\t|**************************|\t|          *\n");
    printf("\t\t|_________    M    ________|\t|            *\n");
    printf("\t\t          |** A **|         \t|              *\n");
    printf("\t\t          |** T **|         \t|                *\n");
    printf("\t\t          |** H **|         \t|  |  |    M   C   *\n");
    printf("\t\t          |**   **|         \t|  |  |    A   R    *\n");
    printf("\t\t          |** C **|         \t|  |  |    T   Y     *\n");
    printf("\t\t          |** R **|         \t|  |  |    H   P     *\n");
    printf("\t\t          |** Y **|         \t|  |  |        T     *\n");
    printf("\t\t          |** P **|         \t|  |  |        O    *\n");
    printf("\t\t          |** T **|         \t|  |  |            *\n");
    printf("\t\t          |** O **|         \t|                 *\n");
    printf("\t\t          |**   **|         \t|                *\n");
    printf("\t\t          |**   **|         \t|               *\n");
    printf("\t\t          |**   **|         \t|              *\n");
    printf("\t\t          *********         \t|************\n");
    printf("\t\t*********************************************************\n");
    printf("\t\t*********************************************************\n");
};
