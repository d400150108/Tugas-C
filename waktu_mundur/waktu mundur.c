#include <stdio.h>
#include <time.h>

int main() {
	//input
	 int JAM;
	 int MENIT;
   	 int DETIK;
   	 int salah;
	//INPUT DARI KEYBOARD
	 printf("****Masukan Waktunya*****\n");
	 while(salah = 1){
	 printf("-----------------------------------\n");
	 printf("\tJam   : ");scanf("%d",&JAM);
	 printf("\tMenit : ");scanf("%d",&MENIT);
	 printf("\tDetik : ");scanf("%d",&DETIK);
	 printf("-----------------------------------\n");
	if(JAM>23){
		printf("Jam yang anda masukan salah\n");
		printf("Jam 0-23\n");
		salah=1;
	}else if(MENIT>59){
		printf("Menit yang anda masukan salah\n");
		printf("Menit 0-59\n");
		salah=1;
	}else if(DETIK>59){
		printf("Detik yang anda masukan salah\n");
		printf("Detik 0-59\n");
		salah=1;
	}else{
		salah = 0;
	//menghitung waktu
	time_t AWAL=0, AKHIR=0;


	AWAL = time( NULL );
	// time( &AWAL );

	while  ( (JAM != 0) || (MENIT != 0) || (DETIK !=0) ) {

			AKHIR = time( NULL );
			if (AKHIR > AWAL) {
				//proses
				if (DETIK==0) {
					if (MENIT==0) {
						if (JAM==0) {
								//SELESAI
						} else {
							//di sini JAM > 0
							JAM--;
							MENIT = 59;
							DETIK = 59;
						}
					} else {
						//di sini MENIT > 0
						MENIT--;
						DETIK = 59;
					}
				} else {
					//di sini DETIK > 0
					DETIK--;
				}
				//tampilkan WAKTU
				printf(" Waktu Mundur | %02d:%02d:%02d |\n", JAM, MENIT, DETIK);
				AWAL = time( NULL );
				// AWAL = AKHIR;

			}
	}
}
}
	return 0;
}
