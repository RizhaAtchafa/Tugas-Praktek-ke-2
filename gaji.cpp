#include <iostream>

using namespace std;
main()
{
	char nama[20], golongan;
	int jam;
	long gaji, lembur;
	printf(" \n                                               Program Hiutng Gaji Karyawan\n");
	printf(" \n                                                                Pt MAKMUR\n");
	printf(" \n===========================================================================================================\n\n");
	printf(" Nama Karyawan               : ");
	cin >> nama;
	printf("Golongan (a/b/c/d) : ");
	cin >> golongan;
	printf("Jam kerja : ");
	cin >> jam;
	printf(" \n============================================================================================================\n\n");
	lembur=4000;
	int mylembur=0;
	if (jam>48){
	lembur=jam-48;
	}
	switch(golongan)
	{
		case 'a' :
		gaji = ( jam-lembur) * 5000;
		 break;
		case 'b' :
		gaji = ( jam-lembur) * 7000;
		 break;
		case 'c' :
		gaji = ( jam-lembur) * 8000;
	  	 break;
		case 'd' :
		gaji = ( jam-lembur) * 10000;
		 break;
		   default :
			printf("Golongan tidak tersedia!\n");
			gaji = 0;
			lembur = 0;
}
if (jam>48){
	gaji = gaji+( (jam - 48) * lembur);
}
printf(" \n Karyawan bernama %s  \n",nama);
printf(" \n Total Gaji     : Rp.  %i \n",gaji);
}
	
