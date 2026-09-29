#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int secim;
	int sayi1, sayi2;
	printf("Hesap Makinesine Hos Geldiniz!\n");
	printf("Lutfen Bir Sayi Giriniz\n");
	scanf("%d", &sayi1);
	printf("Lutfen Simdi Ikinci Sayiyi Giriniz\n");
	scanf("%d", &sayi2);
	printf("Tesekkurler Lutfen Simdi Toplama Icin 1 Cikarma Icinse 2 Yaziniz\n");
	scanf("%d", &secim);
	switch (secim) {
	case 1:
		printf("Iste Sonuc:%d", sayi1 + sayi2);
		break;
	case 2:
		printf("Iste Sonuc:%d", sayi1 - sayi2);
		break;
	default:
		printf("Gecersiz Secim Yaptiniz!\n");
		break;
	}
	return 0;
}
