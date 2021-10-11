                    rastgele girilen n adet sayýnýn toplamý

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
					} "sonsuz döngüye girer. sayac döngü içerisinde birer birer artmalý. sayacý birer birer artýrmak zorundayým.
						nerede artar? döngünün içinde artar"dongu baþladan if(adet!=sayac) dahil olmak üzere tekrar eder. bu yüzden sayaç cout komutunun üstüne
						yazýlamaz.