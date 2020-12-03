#include <stdio.h>
#include <stdlib.h>
void Titel(){
    printf("----------         ----------                ----------                    ");
    printf("\n  ||                 ||                        ||                        ");
    printf("\n  ||   o   -----     ||    ---  ||   -----     ||    ----      ----      ");
    printf("\n  ||  ||  ||         ||  ||   ||||  ||         ||   ||   ||   |     |    ");
    printf("\n  ||  ||   -----     ||    ---  ||   -----     ||    ----     |  ---     ");
    printf("\n\n");
}
void Spieler1text(){
    printf("\nSpieler1 ist an der Reihe.");
    printf("\nSpieler1 hat das Symbol: 'o'");
    printf("\nWaehle das Feld, das du spielen moechtest:");
}
void Spieler2text(){
    printf("\nSpieler2 ist an der Reihe.");
    printf("\nSpieler2 hat das Symbol: 'x'");
    printf("\nWaehle das Feld, das du spielen moechtest:");
}
void checkWhoWon(char array[7][7]){
        // !Spieler1 hat gewonnen
        //complete first line - Spieler1
        if(((array[1][1] == 'o')&&(array[1][3] == 'o')&&(array[1][5] == 'o'))
        //complete second line - Spieler1
        || ((array[3][1] == 'o')&&(array[3][3] == 'o')&&(array[3][5] == 'o'))
        //complete third line - Spieler1
        || ((array[5][1] == 'o')&&(array[5][3] == 'o')&&(array[5][5] == 'o'))
         //complete Diagonale(left) - Spieler1
        || ((array[1][1] == 'o')&&(array[3][3] == 'o')&&(array[5][5] == 'o'))
      //complete Diagonale(right) - Spieler1
        || ((array[1][5] == 'o')&&(array[3][3] == 'o')&&(array[5][1] == 'o'))
      //complete left side - Spieler1
        || ((array[1][1] == 'o')&&(array[3][1] == 'o')&&(array[5][1] == 'o'))
      //complete middle - Spieler1
        ||((array[1][3] == 'o')&&(array[3][3] == 'o')&&(array[5][3] == 'o'))
      //complete right side - Spieler1
        ||((array[1][5] == 'o')&&(array[3][5] == 'o')&&(array[5][5] == 'o')))
        {
          printf("\n\t**** Spieler2 hat gewonnen! ****");  
    }else if(
     //! Spieler2 hat gewonnen
     //complete first line - Spieler2
     ((array[1][1] == 'x')&&(array[1][3] == 'x')&&(array[1][5] == 'x'))
     //complete second line - Spieler2
     || ((array[3][1] == 'x')&&(array[3][3] == 'x')&&(array[3][5] == 'x'))
     //complete third line - Spieler1
     || ((array[5][1] == 'x')&&(array[5][3] == 'x')&&(array[5][5] == 'x'))
     //complete Diagonale(left) - Spieler1
     || ((array[1][1] == 'x')&&(array[3][3] == 'x')&&(array[5][5] == 'x'))
     //complete Diagonale(right) - Spieler1
     || ((array[1][5] == 'x')&&(array[3][3] == 'x')&&(array[5][1] == 'x'))
     //complete left side - Spieler1
     || ((array[1][1] == 'x')&&(array[3][1] == 'x')&&(array[5][1] == 'x'))
     //complete middle - Spieler1
     ||((array[1][3] == 'x')&&(array[3][3] == 'x')&&(array[5][3] == 'x'))
     //complete right side - Spieler1
     ||((array[1][5] == 'x')&&(array[3][5] == 'x')&&(array[5][5] == 'x')))
     {
        printf("\n\t**** Spieler2 hat gewonnen! ****");
     }
}
int checkWin(char array[7][7]){
    int i, j = 0;
    int end;
            while((i >= 0 && i < 7) && (j >= 0 && j <7)){
                // TODO: Spieler1
                    //complete first line - Spieler1
                    if((array[1][1] == 'o')&&(array[1][3] == 'o')&&(array[1][5] == 'o')
                     //complete second line - Spieler1
                    || (array[3][1] == 'o')&&(array[3][3] == 'o')&&(array[3][5] == 'o')
                    //complete third line - Spieler1
                    || (array[5][1] == 'o')&&(array[5][3] == 'o')&&(array[5][5] == 'o')
                    //complete Diagonale(left) - Spieler1
                    || (array[1][1] == 'o')&&(array[3][3] == 'o')&&(array[5][5] == 'o')
                    //complete Diagonale(right) - Spieler1
                    || (array[1][5] == 'o')&&(array[3][3] == 'o')&&(array[5][1] == 'o')
                    //complete left side - Spieler1
                    || (array[1][1] == 'o')&&(array[3][1] == 'o')&&(array[5][1] == 'o')
                    //complete middle - Spieler1
                    ||(array[1][3] == 'o')&&(array[3][3] == 'o')&&(array[5][3] == 'o')
                    //complete right side - Spieler1
                    ||(array[1][5] == 'o')&&(array[3][5] == 'o')&&(array[5][5] == 'o')
                //TODO: Spieler2
                    //complete first line - Spieler2
                    || (array[1][1] == 'x')&&(array[1][3] == 'x')&&(array[1][5] == 'x')
                    //complete second line - Spieler2
                    || (array[3][1] == 'x')&&(array[3][3] == 'x')&&(array[3][5] == 'x')
                    //complete third line - Spieler1
                    || (array[5][1] == 'x')&&(array[5][3] == 'x')&&(array[5][5] == 'x')
                    //complete Diagonale(left) - Spieler1
                    || (array[1][1] == 'x')&&(array[3][3] == 'x')&&(array[5][5] == 'x')
                    //complete Diagonale(right) - Spieler1
                    || (array[1][5] == 'x')&&(array[3][3] == 'x')&&(array[5][1] == 'x')
                    //complete left side - Spieler1
                    || (array[1][1] == 'x')&&(array[3][1] == 'x')&&(array[5][1] == 'x')
                    //complete middle - Spieler1
                    ||(array[1][3] == 'x')&&(array[3][3] == 'x')&&(array[5][3] == 'x')
                    //complete right side - Spieler1
                    ||(array[1][5] == 'x')&&(array[3][5] == 'x')&&(array[5][5] == 'x'))
                 {
                    end = 1;
                }else{
                    end = 0;
                }
                i++;
                j++; 
             }
           return end;
        }
int main(){
    int Zeile;
    int Spalte;
    int i,j = 0;
    int count = 2;
    char Spieler1 = 'o';
    char Spieler2 = 'x';
    char Vorlage[7][7] = {
        '|','-','|', '-','|', '-', '|', 
        '|','1','|', '1','|', '1', '|',
        '|','-', '|','-','|', '-', '|',
        '|','3', '|','3','|', '3', '|',
        '|','-', '|','-','|', '-', '|',
        '|','5', '|','5','|', '5', '|',
        '|','-','|', '-','|', '-', '|',
    };
    char Spielfeld[7][7] = {
        '|','-','|', '-','|', '-', '|',
        '|',' ','|', ' ','|', ' ', '|',
        '|','-', '|','-','|', '-', '|',
        '|',' ', '|',' ','|', ' ', '|',
        '|','-', '|','-','|', '-', '|',
        '|',' ', '|',' ','|', ' ', '|',
        '|','-','|', '-','|', '-', '|',
        };
    char *p;
//Ausgabe Des Spieltitels
Titel();
//Ausgabe des arrays
printf("array:\n");
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("%c ", Vorlage[i][j]);
        }
        printf("\n");
    }
//loop iterates while the condiion is true: while(condition)
while(checkWin(Spielfeld) == 0){
    if(count % 2 == 0){
    //Spieler1 darf wählen (1)
    Spieler1text();
    printf("\nZeile: ");
    scanf("%d", &Zeile);
    printf("\nSpalte: ");
    scanf("%d", &Spalte);
    p = &Spielfeld[Zeile][Spalte];
    *p = Spieler1;
    //Erneuete Ausgabe des arrays
    for(i=0; i<7; i++){
    for(j=0; j<7; j++){
        printf("%c ", Spielfeld[i][j]);
        }
        printf("\n");
        }
    }else
    {
    //Spieler2 darf wählen (1)
    Spieler2text();
    printf("\nZeile: ");
    scanf("%d", &Zeile);
    printf("\nSpalte: ");
    scanf("%d", &Spalte);
    p = &Spielfeld[Zeile][Spalte];
    *p = Spieler2;
    //Erneuete Ausgabe des arrays
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("%c ", Spielfeld[i][j]);
            }
            printf("\n");
        }
        }
        count++;
    }
checkWhoWon(Spielfeld);
return 0;
}
