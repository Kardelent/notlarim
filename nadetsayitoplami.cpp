                    rastgele girilen n adet say�n�n toplam�

#include <iostream.h>
#include <conio.h>

main()
{
	float toplam=0.0,deger;
	int adet,sayac=0;

	cout<<"kac adet deger/sayi gireceksiniz?(tam sayi giriniz):";
	cin>>adet;
	dongu_basla:
	cout<<"lutfen bir sayi giriniz:";
	cin>>deger;
	toplam=toplam+deger;
	sayac=sayac+1 ;
	if (adet!=sayac) goto dongu_basla;
	cout<<"girilen sayilarin toplami="<<toplam;

	getch() ;
}

#include <iostream.h>
#include <conio.h>

					main()
					{
						float toplam = 0.0, deger;
						int adet, sayac = 0;

						cout << "kac adet deger/sayi gireceksiniz?(tam sayi giriniz):";
						cin >> adet;
					dongu_basla:
						cout << "lutfen " << sayac + 1 << ". sayiyi giriniz:";
						cin >> deger;
						toplam = toplam + deger;
						sayac = sayac + 1;
						if (adet != sayac) goto dongu_basla;
						cout << "girilen sayilarin toplami=" << toplam;

						getch();
					}

#include <iostream.h>
#include <conio.h>

					main()
					{
						float toplam = 0.0, deger;
						int adet, sayac = 0;

						cout << "kac adet deger/sayi gireceksiniz?(tam sayi giriniz):";
						cin >> adet;
					dongu_basla:
						sayac = sayac + 1;
						cout << "lutfen " << sayac << ". sayiyi giriniz:";
						cin >> deger;
						toplam = toplam + deger;

						if (adet != sayac) goto dongu_basla;
						cout << "girilen sayilarin toplami=" << toplam;

						getch();
					}

#include <iostream.h>
#include <conio.h>

					main()
					{
						float toplam = 0.0, deger;
						int adet, sayac = 0;

						cout << "kac adet deger/sayi gireceksiniz?(tam sayi giriniz):";
						cin >> adet;
						sayac = sayac + 1;
					dongu_basla:
						cout << "lutfen " << sayac << ". sayiyi giriniz:";
						cin >> deger;
						toplam = toplam + deger;

						if (adet != sayac) goto dongu_basla;
						cout << "girilen sayilarin toplami=" << toplam;

						getch();
					} "sonsuz d�ng�ye girer. sayac d�ng� i�erisinde birer birer artmal�. sayac� birer birer art�rmak zorunday�m.
						nerede artar? d�ng�n�n i�inde artar"dongu ba�ladan if(adet!=sayac) dahil olmak �zere tekrar eder. bu y�zden saya� cout komutunun �st�ne
						yaz�lamaz.