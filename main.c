#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C:\Users\Papa NDIAYE\Desktop\TDSI L1 2017\projetC1semestre\fctions_projets.h"
void main()
{
    system("CLS");
    designe();
    //designe1();
    switch (menu1()){
    case 1:
        system("CLS");
        switch (menu2()){
        case 1:
            system("CLS");
            conexetu();break;
        case 2:
            system("CLS");
            conexpr();break;
        case 3:
            system("CLS");
            conexad();break;
        case 4:
                return 0;
       }
       break;
    case 2:
        return 0;
    }
}
