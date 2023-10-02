#include <stdio.h>

// ifann oi

void main(){
int pilihan;
do{
system("cls");
printf("~~~~~~~~~~BASIC RPG~~~~~~~~~~\n\n");
printf("1.Mulai\n");
printf("2.Exit\n");

printf("\nPilih : ");
scanf("%d",&pilihan);

    switch(pilihan){
        case 1:
            RPG();
            printf("\ntekan apa saja untuk melanjutkan");
            getch();
            break;

        case 2:
            system("cls");
            Pembuat();
            printf("\nTekan apa saja untuk melanjutkan");
            getch();
            exit(0);
            break;

        default:
            printf("Tidak ada opsi");
            printf("\ntekan apa saja untuk melanjutkan");
            getch();


    }
}while(pilihan!=2);
}

void Pembuat(){
	printf("Nama : Tifano Eng Ogotan\n");
	printf("NIM  : 672020019\n");
}

void RPG(){

    int giliran = 1;
    int hpplayer = 100;
    int hpmusuh = 100;
    int serangplayer;
    int serangmusuh;
    int heal = 3;
    int opsi;
    int aimusuh;
    int hpmusuh1;
    int selisihhp;
    int cekhpplayer;
    int cekhpmusuh;
    do{

        if(giliran == 1){
            system("cls");
            fflush(stdin);
            printf("~~~~~~~~~~BASIC RPG~~~~~~~~~~\n\n");
            printf("GILIRAN ANDA!!!!\n");
            printf("HP Anda = %d", hpplayer);
            printf(" -------------------------- HP Musuh = %d\n", hpmusuh);
            printf("1.Serang\n2.Potion (%d/3)\n3.Kabur\n", heal);
            printf("Apa yang akan anda lakukan?\n");
            scanf("%d", &opsi);
            if(opsi == 1){
                serangplayer = rand() % 30;
                hpmusuh = hpmusuh - serangplayer;
                printf("Anda menyerang musuh!\n");
                printf("Musuh terkena %d damage!!\n", serangplayer);
            } else if (opsi == 2 && heal > 0){
                hpplayer = hpplayer + 20;
                heal = heal - 1;
                printf("Anda minum sebuah potion!\n");
                printf("HP anda pulih sebanyak 20!!\n");
            } else if (opsi == 2 && heal == 0){
                printf("Potion sudah habis!!!\n");
                printf("Alhasil anda bengong saja!!!\n");
            } else if (opsi == 3){
                printf("Yah kabur\n");
                hpplayer = hpplayer - hpplayer;
                break;
            } else {
                printf("Pilihan salah! Anda bengong saja didepan musuh!\n");
            }
            printf("=============================\n");
            printf("Sekarang adalah giliran musuh\nPencet Enter key untuk melanjutkan\n");
            giliran = 2;
            getch();
            system("cls");
        }
        if(giliran == 2){
            system("cls");
            fflush(stdin);
            printf("===BASIC RPG===\n\n");
            printf("GILIRAN MUSUH!!!!\n");
            printf("HP Anda = %d", hpplayer);
            printf(" -------------------------- HP Musuh = %d\n", hpmusuh);
            aimusuh = rand() % 3;
            if(aimusuh == 1){
                printf("Musuh melakukan serangan!!\n");
                serangmusuh = rand() % 45;
                hpplayer = hpplayer - serangmusuh;
                printf("Anda terkena %d damage!!\n", serangmusuh);
            } else if(aimusuh == 2){
                printf("Musuh melakukan regenerasi!!\n");
                hpmusuh1 = hpmusuh;
                hpmusuh = hpmusuh + rand() % 20;
                selisihhp = hpmusuh - hpmusuh1;
                printf("HP musuh pulih sebanyak %d!!\n", selisihhp);
            } else{
                printf("Musuh diam saja!\n");
            }
            printf("=============================\n");
            printf("Sekarang adalah giliran anda\nPencet Enter key untuk melanjutkan\n");
            giliran = 1;
            getch();
            system("cls");
        }
    }while(hpplayer >= 0 && hpmusuh >= 0);

    if(hpmusuh <= 0){
        printf("Anda menang!!");
        fflush(stdin);
        getch();
    } else if (hpplayer <= 0){
        printf("Anda kalah!!");
        fflush(stdin);
        getch();
    }
}

