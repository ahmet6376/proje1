#include<stdio.h>
#include<string.h>
main() {
	char dizi[99999];
	unsigned long long sayi= 1, maximum =0;
	int i, adim=0, n; //gerekli tanýmlamalarý yapýyoruz
	int *konum;
	konum=&adim;
	printf("\n Hesaplanmasini istediðiniz ardisik rakam sayisi:   ");
	scanf("%d",&n);
	printf("\n Dizi elemanlarini giriniz:   ");
	fflush(stdin);//geçici belleði sýfýrlýyoruz
	gets(dizi); //girilen deðerleri diziye tanýmlýyoruz
	while(adim < strlen(dizi) - n) {//dizi içerisinden seçilen son seriye kadar devam eder
		for(i=0;i<n;i++)
			sayi *= dizi[i + adim] - '0' ;//seri içerisindeki karakterleri sayýsal deðerlerini çarpýyoruz
		if(sayi>maximum)
			maximum = sayi;
		sayi=1;
		adim++;	
	}
	
	printf("%llu",maximum);//maksimum sayýmýzýn deðerini yazdýrýyoruz
	printf("\n Serinin Baslangic rakami:%d ",adim);
    printf("\n Serinin Bitis rakami:%d ",adim+13);
    printf("\n Serinin Baslangic Adiminin Konumu %d ",konum);
} 
