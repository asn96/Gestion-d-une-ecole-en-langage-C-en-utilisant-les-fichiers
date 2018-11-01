#include <stdio.h>

void main(){
   /* printf("\n\n\n\n\n\n");
    printf("\t _____________________________________________________\n");
    printf("\t|  _________________________________________________  |\n");
    printf("\t| |     ______________ _____________ __     ___     | |\n");
    printf("\t| |    |              |             /  |   |   |    | |\n");
    printf("\t| |    |   ________  |   __________/    |  |   |    | |\n");
    printf("\t| |    |  |        ||   |                | |   |    | |\n");
    printf("\t| |    |  |________||   |_________        ||   |    | |\n");
    printf("\t| |    |   Amad      |   Said     |  Ndiaye|   |    | |\n");
    printf("\t| |    |   ________   |________    |   |       |    | |\n");
    printf("\t| |    |  |        |           |    |  ||      |    | |\n");
    printf("\t| |    |  |        |   ________|    |  | |     |    | |\n");
    printf("\t| |    |  |        |  /            |   |  |    |    | |\n");
    printf("\t| |    |__|        |_/_____________|___|   |___|    | |\n");
    printf("\t| |_________________________________________________| |\n");
    printf("\t|_____________________________________________________|\n");*/

    char a[10], b[10], c[10], d[10], ch[500];
    int i;
    printf("numero\n");
    fflush(stdin);
    gets(d);
    printf("Voici le bulletin de notes\n");
    FILE *f4;
    f4=fopen("bulletin.txt","r");
                       if(f4!=NULL){

                            do{
                                fscanf(f4,"%s %s %s",&a,&b,&c);
                            if(strcmp(d,c)!=0){
                                    fseek(f4,1044L,SEEK_CUR);
                            }
                                 else{
                                    printf("%s\t%s\t%s\n",a,b,c);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);
                                    fseek(f4,1L,SEEK_CUR);
                                    fflush(stdin);
                                    fgets(ch,400,f4);
                                    puts(ch);

                                 }break;
                            }while( feof(f4)!=0);
                       }fclose(f4);
    void main()
{
    printf("\t __________________________\n");
    printf("\t|**************************|\t|********\n");
    printf("\t|**************************|\t|          *\n");
    printf("\t|_________    M    ________|\t|            *\n");
    printf("\t          |** A **|         \t|              *\n");
    printf("\t          |** T **|         \t|                *\n");
    printf("\t          |** H **|         \t|  |  |    M   C   *\n");
    printf("\t          |**   **|         \t|  |  |    A   R    *\n");
    printf("\t          |** C **|         \t|  |  |    T   Y     *\n");
    printf("\t          |** R **|         \t|  |  |    H   P     *\n");
    printf("\t          |** Y **|         \t|  |  |        T     *\n");
    printf("\t          |** P **|         \t|  |  |        O    *\n");
    printf("\t          |** T **|         \t|  |  |            *\n");
    printf("\t          |** O **|         \t|                 *\n");
    printf("\t          |**   **|         \t|                *\n");
    printf("\t          |**   **|         \t|               *\n");
    printf("\t          |**   **|         \t|              *\n");
    printf("\t          *********         \t|************\n");
    printf("*********************************************************\n");
    printf("*********************************************************");
}
}
