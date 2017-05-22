#include <iostream>
#include "kimia.h"
#include <conio.h>
#include <ctype.h>
using namespace std;

main()
{
	int pilih,pilih2,pilih3;
    cout<<"pilih materi yang ingin di bahas (masukkan angka urutannya) : "<<endl;
    cout<<"1.Stoikiometri"<<endl;
    cout<<"2.Sifat koligatif larutan"<<endl;
    cout<<"3.Zat Radioaktif"<<endl;
    cout<<"4.Elektrokimia"<<endl;
    cout<<"5.Tabel Periodik"<<endl;
    cin>>pilih;
    if(pilih==1)
    {
    cout<<"Masukkan materi berdasarkan urutan no"<<endl;
		cout<<"1. Mol"<<endl;
		cout<<"2. Mol gas"<<endl;
		cout<<"3. Molaritas larutan"<<endl;
        cout<<"4. Molaritas larutan dari pengenceran"<<endl;
        cout<<"5. Laju reaksi"<<endl;
        cout<<"6. Molalitas"<<endl;
        cout<<"7. Jumlah Proton Elektron dan Neutron"<<endl;
        cout<<"8. Derajat disosiasi"<<endl;
        cout<<"9. Rumus Senyawa"<<endl;
    	cin>>pilih2;
    	switch(pilih2){
                       case 1:
                            double jp,mr,m;
                            cout<<"Hal yang diketahui: "<<endl;
                            cout<<"1. Jumlah partikel"<<endl;
                            cout<<"2. Massa(gram) dan massa relative unsur(Mr atau Ar)"<<endl;
                            
                            cin>>pilih3;
                            switch(pilih3){
                                           case 1:
                                                cout<<"Jumlah partikel = ";cin>>jp;
                                                cout<<"mol = "<<moljp(jp);
                                                break;
                                           case 2:
                                                cout<<"Massa = ";cin>>m;
                                                cout<<"Mr = ";cin>>mr;
                                                cout<<"mol = "<<mol(m,mr);
                                                break;
                                           
                                           default:
                                                   cout<<"Input Salah";
                                           }
                            break;
                       
                       case 2:
                            double v1,v2,n2,P,T;
                            cout<<"Hal yang diketahui: "<<endl;
                            cout<<"1. Volume gas STP"<<endl;
                            cout<<"2. Volume dan mol gas pembanding"<<endl;
                            cout<<"3. Suhu, volume, dan temperatur"<<endl;
                            cin>>pilih3;
                            switch(pilih3){
                                           case 1:
                                                cout<<"volume(L) = ";cin>>v1;
                                                cout<<"mol = "<<molGas1(v1);
                                                break;
                                           case 2:
                                                cout<<"volume 1(L) = ";cin>>v1;
                                                cout<<"volume 2(L) = ";cin>>v2;
                                                cout<<"mol 2 = ";cin>>n2;
                                                cout<<"mol = "<<molGas2(v1,v2,n2);
                                                break;
                                           case 3:
                                                cout<<"temperature(Kelvin) = ";cin>>T;
                                                cout<<"pressure(atm) = ";cin>>P;
                                                cout<<"volume(L) = ";cin>>v1;
                                                cout<<"mol = "<<molGas3(v1,P,T);
                                                break;
                                           default:
                                                   cout<<"Input Salah";
                                           }
                            break;
                           
                       case 3:
                            double kepekatan,massajenis;
                            cout<<"Kepekatan = ";cin>>kepekatan;
                            cout<<"Massa jenis = ";cin>>massajenis;
                            cout<<"Mr = ";cin>>mr;
                            cout<<"Molaritas = "<<molaritas_larutan(massajenis,kepekatan,mr);
                            break;
                       
                       case 4:
                            double m1,m2; 
                            cout<<"Hal yg ditanyakan: "<<endl;
                            cout<<"1. Molaritas setelah pengenceran"<<endl;
                            cout<<"2. Volume setelah pengenceran"<<endl;
                            cin>>pilih3;
                            switch(pilih3){
                                           case 1:
                                                cout<<"Molaritas = ";cin>>m1;
                                                cout<<"Volume1 = ";cin>>v1;
                                                cout<<"Volume2 = ";cin>>v2;
                                                cout<<"Molaritas 2 = "<<molaritas_dari_pengenceran(v1,v2,m1);
                                                break;
                                                
                                           case 2:
                                                cout<<"Molaritas1 = ";cin>>m1;
                                                cout<<"Molaritas2 = ";cin>>m2;
                                                cout<<"Volume1 = ";cin>>v1;
                                                cout<<"Molaritas 2 = "<<ml_dari_pengenceran(v1,m2,m1);
                                                break;
                                           
                                           default:
                                                cout<<"Input salah";
                                           }
                            break;
                            
                       case 5:
                            double V2,M1,M2;
                            cout<<"Molaritas1 = ";cin>>M1;
                            cout<<"Molaritas2 = ";cin>>M2;
                            cout<<"Laju reaksi2 = ";cin>>V2;
                            cout<<"Laju reaksi1 = "<<laju_reaksi(M1,V2,M2);
                            break;
                       
                       case 6:
                            double molzat,kgpelarut;
                            cout<<"Mol zat = ";cin>>molzat;
                            cout<<"Pelarut(kg) = ";cin>>kgpelarut;
                            cout<<"molalitas = "<<molalitas(molzat,kgpelarut);
                            break;
                       
                       case 7:
                            int nomass,muatan,noatom;
                            cout<<"Nomer massa = ";cin>>nomass;
                            cout<<"Muatan = ";cin>>muatan;
                            cout<<"Nomer atom = ";cin>>noatom;
                            jumlah_proton_neutron_elektron(nomass,muatan,noatom);
                            break;
                            
                       case 8:
                            double molterurai,molmula2;
                            cout<<"Mol terurai = ";cin>>molterurai;
                            cout<<"Mol mula-mula = ";cin>>molmula2;
                            cout<<"Derajat disosiasi = "<<derajat_disosiasi(molterurai,molmula2);
                            break;
                            
                       case 9:
                            int unsur1,unsur2;
                            cout<<"Nomer unsur pertama : ";cin>>unsur1;
                            cout<<"Nomer unsur kedua : ";cin>>unsur2;
                            senyawa(unsur1, unsur2);
                            break;
                                                
                       default:
                       cout<<"Input salah";
                       }
	}
	else if(pilih==2)
	{
		
		cout<<"Masukkan materi (berdasarkan urutan no"<<endl;
		cout<<"1. Penurunan tekanan uap"<<endl;
		cout<<"2. penurunan titik beku"<<endl;
		cout<<"3. kenaikan titik didih"<<endl;
		cout<<"4. tekanan osmotik"<<endl;
		cin>>pilih2;
		if(pilih2==1)
		{
			double X,p_nol;
			cout<<"nilai X = ";
			cin>>X;
			cout<<"nilai p_nol = ";
			cin>>p_nol;
			penurunan_tekanan_uap(X,p_nol);
		}
		else if(pilih2==2)
		{
			double Kf,m;
			cout<<"nilai Kf = ";
			cin>>Kf;
			cout<<"nilai m = ";
			cin>>m;
			penurunan_titik_beku(Kf,m);
		}
		else if(pilih2==3)
		{
			double Kb,m;
			cout<<"nilai Kb = ";
			cin>>Kb;
			cout<<"nilai m = ";
			cin>>m;
			kenaikan_titik_didih(Kb,m);
		}
		else if(pilih2==4)
		{
			double M,R,T;
			cout<<"nilai M = ";
			cin>>M;
			cout<<"nilai R = ";
			cin>>R;
			cout<<"nilai T = ";
			cin>>T;
			tekanan_osmotik(M,R,T);
		}
		else
		{
			cout<<"tidak ada pilihan tersebut";
		}

	}
	else if(pilih==3){
             cout<<"Masukkan materi berdasarkan urutan no"<<endl;
		     cout<<"1. Kestabilan inti"<<endl;
		     cout<<"2. Waktu paruh"<<endl;
             cin>>pilih2;
             switch(pilih2){
                            case 1:
                                 int n,p;
                                 cout<<"Jumlah neutron = ";cin>>n;
                                 cout<<"Jumlah proton = ";cin>>p;
                                 if(kestabilan_inti(n,p))cout<<"stabil";
                                 else cout<<"tidak stabil";
                                 break;
                            case 2:
                                 double N0;
                                 int t,tparuh;
                                 cout<<"Massa mula-mula = ";cin>>N0;
                                 cout<<"Waktu peluruhan = ";cin>>t;
                                 cout<<"Waktu paruh = ";cin>>tparuh;
                                 cout<<"Massa tersisa = "<<waktu_paruh(N0,t,tparuh);
                                 break;
                                 
                            default:
                                    cout<<"Input salah";
                            }
             }
       
       else if(pilih==4){
             cout<<"Masukkan materi berdasarkan urutan no"<<endl;
		     cout<<"1. Massa ekuivalen"<<endl;
		     cout<<"2. Muatan listrik"<<endl;
		     cout<<"3. Mol elektron(Faraday)"<<endl;
		     cout<<"4. Mol elektron bila arus sama"<<endl; 
 
             cin>>pilih2;
             switch(pilih2){
                            case 1:
                                 double Ar,n;
                                 cout<<"Ar = ";cin>>Ar;
                                 cout<<"Jumlah mol = ";cin>>n;
                                 cout<<"Massa ekuivalen(e) = "<<me(Ar,n);
                                 break;
                            case 2:
                                 double t,I;
                                 cout<<"Arus = ";cin>>I;
                                 cout<<"Waktu(detik) = ";cin>>t;
                                 cout<<"Muatan = "<<muatan(I,t);
                                 break;
                            case 3:
                                 cout<<"Ar = ";cin>>Ar;
                                 cout<<"Jumlah mol = ";cin>>n;
                                 cout<<"Arus = ";cin>>I;
                                 cout<<"Waktu(detik) = ";cin>>t;
                                 cout<<"Mol elektron = "<<faraday1(Ar,n,I,t);
                                 break;
                            case 4:
                                 double Ar1,n1,Ar2,n2,G2;
                                 cout<<"Ar1 = ";cin>>Ar1;
                                 cout<<"Ar2 = ";cin>>Ar2;
                                 cout<<"n1 = ";cin>>n1;
                                 cout<<"n2 = ";cin>>n2;
                                 cout<<"Mol elektron2 = ";cin>>G2;
                                 cout<<"Mol elektron1 = "<<faraday2(Ar1,n1,G2,Ar2,n2);
                                 break;     
                                 
                            default:
                                    cout<<"Input salah";
                            }
             }
             else if(pilih==5){
             int nounsur;
             cout<<"Masukkan nomer unsur = "<<endl;
             cin>>nounsur;
             cout<<"Nama unsur : ";namaUnsur(nounsur);cout<<endl;
             cout<<"Lambang unsur : ";lambangUnsur(nounsur);cout<<endl;
             cout<<"Golongan unsur : ";golonganUnsur(nounsur);cout<<endl;
             }
             else cout<<"Input salah";
	getch();
}
