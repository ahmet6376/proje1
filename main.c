#include<stdio.h>
#include<string.h>
main() {
	char dizi[99999];
	unsigned long long sayi= 1, maximum =0;
	int i, adim=0, n; //gerekli tan�mlamalar� yap�yoruz
	int *konum;
	konum=&adim;
	printf("\n Hesaplanmasini istedi�iniz ardisik rakam sayisi:   ");
	scanf("%d",&n);
	printf("\n Dizi elemanlarini giriniz:   ");
	fflush(stdin);//ge�ici belle�i s�f�rl�yoruz
	gets(dizi); //girilen de�erleri diziye tan�ml�yoruz
	while(adim < strlen(dizi) - n) {//dizi i�erisinden se�ilen son seriye kadar devam eder
		for(i=0;i<n;i++)
			sayi *= dizi[i + adim] - '0' ;//seri i�erisindeki karakterleri say�sal de�erlerini �arp�yoruz
		if(sayi>maximum)
			maximum = sayi;
		sayi=1;
		adim++;	
	}
	
	printf("%llu",maximum);//maksimum say�m�z�n de�erini yazd�r�yoruz
	printf("\n Serinin Baslangic rakami:%d ",adim);
    printf("\n Serinin Bitis rakami:%d ",adim+13);
    printf("\n Serinin Baslangic Adiminin Konumu %d ",konum);
} 
