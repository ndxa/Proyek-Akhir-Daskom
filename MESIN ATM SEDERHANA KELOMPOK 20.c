//SIMULASI ATM SEDERHANA DENGAN C program

// import library
#include <stdio.h>

//men-declare beberapa variabel dan meng-assign beberapa variabel
unsigned long amount=1000000, deposit, withdraw, cek;
int choice, pin, k, y;
char transaction ='Y';

//main body
void main()
{
	// jika pin yang dimasukan salah, program akan looping terus sampai user memasukan input yang benar
	while (pin != 1111)
	{	printf("= = = = = = = = = Selamat Datang di ATM 'NANAS' = = = = = = = = = = = \n\n");
		printf("SILAHKAN MASUKAN NOMOR PIN (4 DIGIT):");

		//user diminta untuk menginput PIN
		scanf("%d", &pin);
		system("cls");

		// jika user salah menginput pin, user akan diminta lagi untuk menginput pin sampai benar
		if (pin != 1111)
		printf("\nPIN SALAH ! SILAHKAAN COBA LAGI\n\n");
		fflush(stdin);
	}
	do
	{
		printf("= = = = = = = = = Silahkan Pilih Transaksi yang Diinginkan = = = = = = = = = = = \n\n");
		printf("[1] Cek Saldo\n");
		printf("[2] Tarik Tunai\n");
		printf("[3] Deposit Tunai\n");
		printf("[4] Keluar\n");
		printf("[5] Bantuan\n\n");
		printf(" = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
		printf("Masukan Pilihan Anda: ");

		//user diminta untuk memilih menu pada interface
		scanf("%d", &choice);
		switch (choice)

		//pilihan menu yang dipilih user ( cek saldo, tarik tunai, deposit, keluar, dan help)
		{
		case 1:
			printf("\n SALDO Rp : %lu ", amount);
			break;
		case 2:
			printf("\n MASUKKAN JUMLAH TARIK TUNAI: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n MOHON MASUKKAN JUMLAH KELIPATAN 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n SALDO TIDAK CUKUP");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n SILAHKAN AMBIL UANG");
				printf("\n SALDO SAAT INI Rp %lu", amount);
			}
			break;
		case 3:
			printf("\n SILAHKAN MASUKKAN JUMLAH DEPOSIT : Rp ");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("SALDO SAAT INI Rp %lu", amount);
			break;
		case 4:
			y = 1;
			break;
		case 5:
			printf("Option [1] Cek Saldo untuk mengecek saldo Anda ditabungan\n");
			printf("Option [2] Tarik Tunai untuk mengambil uang tunai dari tabungan Anda\n");
			printf("Option [3] Deposit Tunai untuk menyetor dana tunai ke tabungan Anda \n");
			printf("Option [4] Keluar untuk mengakhiri program\n");
			break;
		default:
			printf("\n PILIHAN SALAH");
		}

		//algoritma untuk menentukan program agar tetap berjalan sesuai keinginan user
		if(y==1){
			break;
		}else{
		printf("\n\n\n APAKAH ADA TRANSAKSI LAIN?(Y/N): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		system("cls");

		// jika user memlihin 'N' maka k yang tadi bervalue 0 menjadi 1
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
		}

		// ketika k = 1, negasi dari k adalah 0 dimana while(0) memberhentikan looping
	} while (!k);
    system("cls");
	printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
	printf("\n\n    TERIMA KASIH SUDAH MENGGUNAKAN ATM 'NANAS'\n\n");
	printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
}
