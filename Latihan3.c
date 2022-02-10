#include<stdio.h>
#include<string.h>

struct mahasiswa {
    char nama[100];
    int NIM;
    float kehadiran;
};


int main(void) {

    int jumlahmhs;
    int i,
        j;
    struct mahasiswa kelas[100];

    printf("Masukkan jumlah mahasiswa yang diinput : \n");
    scanf("%d", &jumlahmhs);

    for (i=0; i<jumlahmhs; i++)
    {
        printf("\nNama : ");
        scanf("%s", &kelas[i].nama);
        printf("\nNIM : ");
        scanf("%d", &kelas[i].NIM);
        printf("\nKehadiran (dalam persen tanpa satuan) : ");
        scanf("%f", &kelas[i].kehadiran);
    }
    printf("\nMahasiswa dengan persentase kehadiran kurang dari 80 adalah\n");

    for (j=0; j<jumlahmhs; j++)
    {
        if (kelas[j].kehadiran < 80)
        {
            printf("Nama : %s\t NIM : %d\n", kelas[j].nama, kelas[j].NIM);
        }

    }

    return 0;

}
