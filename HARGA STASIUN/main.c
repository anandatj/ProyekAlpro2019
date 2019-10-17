#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

FILE *fp;
void ulang();
void travel();
char*jejak[100];


char* listStasiun[17]={"Bogor","Cilebut","Bojong Gede","Citayam","Depok","Depok Baru",
                    "Pondok Cina","Universitas Indonesia","Universitas Pancasila",
                    "Lenteng Agung","Tanjung Barat","Pasar Minggu","Pasar Minggu Baru",
                    "Duren Kalibata","Cawang","Tebet","Manggarai"};


float jarakStasiun[17]={44.4,36.9,32.6,27.4,22.4,20.7,
                    18.2,17.1,14.9,13.9,11.5,8.5,6.8,
                    5.3,3.9,2.6,0};

    int x,y,total;
    float u;
    int sawal,sakhir;
    int iterasi=0;
    int totalharga=0;
    float totaljarak=0;


float cariJarak(int iawal,int iakhir){
    float jarak;
    if(iawal<iakhir){
        jarak=jarakStasiun[iawal-1]-jarakStasiun[iakhir-1];
    }else{
        jarak=jarakStasiun[iakhir-1]-jarakStasiun[iawal-1];
    }
    totaljarak+=u;
    return jarak;
}

int cariHarga(float jarak){
    int harga=3000;
    if (jarak<=25.0){
        return harga;
    }else{
        harga=harga+(1000*ceil(((jarak-25)/10)));
        return harga;
    }
}

void rekamJejak () {
system("cls");
printf("Anda telah berpindah dari stasiun:\n");
int j=0;
for (j=0;j<=iterasi;j++) {
    printf("\n%s ---menuju---> %s\n", jejak[j],jejak[j+1]);
}
printf ("\n\nAnda menghabiskan: %d Rupiah\ndan menempuh perjalanan sejauh: %.2f KM\n\n\n", totalharga,totaljarak);
    fclose(fp);
    return 0;
}

main(){
    fp=fopen("D:\\Studies\\Electrical Engineering UI\\Algoritma Pemrograman\\Proyek UTS\\HARGA STASIUN - FINAL\\HARGA STASIUN\\TravelHistory.csv","w+");
    time_t now;
    time(&now);
    system ("color a");
    system ("cls");
    fflush(stdin);
    pilihStasiun();
    u=cariJarak(x,y);
    total=cariHarga(u);
    totalharga+=total;
    fflush(stdout);
    jejak [iterasi]=listStasiun[x-1];
    jejak [iterasi+1]=listStasiun[y-1];
    fprintf(fp,"Waktu;Stasiun Awal;Stasiun Tujuan;Harga;Jarak\n");
    printf("Dari stasiun %s ke %s\n\n",listStasiun[x-1],listStasiun[y-1]);
    printf("Jarak %.2f KM\nDengan Biaya Rp %d\n\n",u,total);
    fprintf(fp,"%.24s;%s;%s;%d;%.2f\n",ctime(&now),jejak[iterasi],jejak[iterasi+1],total,u);
    delay(1000);
    ulang();
    }

void travel() {
    time_t now;
    time(&now);
    fflush(stdin);
    sawal=sakhir;
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
        default: printf("\nMasukan yang sesuai dengan pilihan!\n");fflush(stdin); delay(500); return travel();
    }
    delay(100);
    iterasi=iterasi + 1;
    jejak[iterasi+1]=listStasiun[y-1];
    u=cariJarak(sawal,sakhir);
    total=cariHarga(u);
    totalharga+=total;
    printf("Dari stasiun %s ke %s\n\n",jejak[iterasi],jejak[iterasi+1]);
    printf("Jarak %.2f KM\nDengan Biaya Rp %d\n",u,total);
    fprintf(fp,"%.24s;%s;%s;%d;%.2f\n",ctime(&now),jejak[iterasi],jejak[iterasi+1],total,u);
    ulang();

}

void delay(int num)
{
    // Converting time into milli_seconds
    int milli_seconds = num;
    clock_t start_time = clock();
    // looping till required time is achieved
    while (clock() < start_time + milli_seconds) ;
}



