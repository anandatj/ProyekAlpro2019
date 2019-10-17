#include <windows.h>
#include <stdio.h>

void ulang() {
    int pilih;
    fflush(stdin);
    printf("\nApakah anda ingin melanjutkan perjalanan?\n1. Iya\n2. Tidak\n");
    scanf("%d",&pilih);
    switch(pilih) {
        case 1: travel();break;
        case 2: rekamJejak();break;
        default: printf("\n\nMasukan sesuai ketentuan!");ulang();
        }
}

    int x,y,total;
    float u;
    int sawal,sakhir;

void pilihStasiun() {
    printf("1. Bogor\n2. Cilebut\n3. Bojong Gede\n4. Citayam\n5. Depok\n");
    printf("6. Depok Baru\n7. Pondok Cina\n8. Universitas Indonesia\n9. Universitas Pancasila\n10. Lenteng Agung\n11. Tanjung Barat\n");
    printf("12. Pasar Minggu\n13. Pasar Minggu Baru\n14. Duren Kalibata\n15. Cawang\n16. Tebet\n17. Manggarai\n\n");
    printf("Masukan stasiun keberangkatan anda: ");
    scanf("%d",&sawal);
    switch (sawal) {
        case 1: x=sawal; break;
        case 2: x=sawal; break;
        case 3: x=sawal; break;
        case 4: x=sawal; break;
        case 5: x=sawal; break;
        case 6: x=sawal; break;
        case 7: x=sawal; break;
        case 8: x=sawal; break;
        case 9: x=sawal; break;
        case 10: x=sawal; break;
        case 11: x=sawal; break;
        case 12: x=sawal; break;
        case 13: x=sawal; break;
        case 14: x=sawal; break;
        case 15: x=sawal; break;
        case 16: x=sawal; break;
        case 17: x=sawal; break;
        default: printf("\nMasukan yang sesuai dengan pilihan!\n");fflush(stdin);delay(500);return main();

    }
    delay(1000);
    system("cls");
    printf("1. Bogor\n2. Cilebut\n3. Bojong Gede\n4. Citayam\n5. Depok\n");
    printf("6. Depok Baru\n7. Pondok Cina\n8. Universitas Indonesia\n9. Universitas Pancasila\n10. Lenteng Agung\n11. Tanjung Barat\n");
    printf("12. Pasar Minggu\n13. Pasar Minggu Baru\n14. Duren Kalibata\n15. Cawang\n16. Tebet\n17. Manggarai\n\n");
    printf("Masukan stasiun tujuan anda: ");
    scanf("%d",&sakhir);
    switch (sakhir) {
        case 1: y=sakhir; break;
        case 2: y=sakhir; break;
        case 3: y=sakhir; break;
        case 4: y=sakhir; break;
        case 5: y=sakhir; break;
        case 6: y=sakhir; break;
        case 7: y=sakhir; break;
        case 8: y=sakhir; break;
        case 9: y=sakhir; break;
        case 10: y=sakhir; break;
        case 11: y=sakhir; break;
        case 12: y=sakhir; break;
        case 13: y=sakhir; break;
        case 14: y=sakhir; break;
        case 15: y=sakhir; break;
        case 16: y=sakhir; break;
        case 17: y=sakhir; break;
        default: printf("\nMasukan yang sesuai dengan pilihan!\n"); fflush(stdin);delay(500); return main();
    }}
