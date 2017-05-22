#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double pangkatdesimal(double x,int pangkat){
       double hasil=x;
          for(int i=pangkat-1;i>0;i--){
                  hasil=hasil*x;
                  } 
          return hasil;
          }

//Mulyahadi
double mol(double massa,double Mr){
       return massa/Mr;
       }

double moljp(double jp){
     double const avogrado=6.022e+23;
       return jp/avogrado;
       }

double molGas1(double volume){
       return volume/22.4;
       }

double molGas2(double volume1,double volume2, double mol2){
       return volume1*mol2/volume2;
       }

double molGas3(double volume,double P,double T){
       return (volume*P)/(0.082*T);
       }

//ardhi
double waktu_paruh(double massa_a,int waktu_peluruhan,int waktu_paruh){
        int pangkat=waktu_peluruhan/waktu_paruh;
        double massa_b,hasilpangkat=pangkatdesimal(0.5,pangkat);
        massa_b=massa_a*hasilpangkat;
        return massa_b;
	}

bool kestabilan_inti(int n, int p){
        bool stabil=false;
        if(n==p)
        {
            stabil=true;
        }
        return stabil;
	}
double molaritas_larutan(double masa_jenis,double kepekatan, double mr ){
        double kandungan_masa_larutan = (kepekatan/100)*masa_jenis;
        double molaritas =  mol(kandungan_masa_larutan,mr);
        return molaritas;
    }

double molaritas_dari_pengenceran(double V1, double V2, double M1){

        double M2 = (V1*M1)/V2;
        return M2;
    }

double ml_dari_pengenceran(double V1, double M2, double M1 ){
        double V2= (V1*M1)/M2;
        return V2;
    }




//Ryon

double faktor_van_hoff(int n,double alfa)
{
	return 1+(n-1)*alfa;
}

double penurunan_tekanan_uap(double X,double p_nol)
{
	int pilih,n,alfa;
	cout<<"Pilih (1) jika non Elektrolit dan pilih (2) Elektrolit : ";
	cin>>pilih;
	if(pilih==1)
	{
		cout<< X*p_nol;
	}
	else if(pilih==2)
	{
		cout<<"masukkan nilai n = ";
		cin>>n;
		cout<<"masukkan nilai alfa =";
		cin>>alfa;
		cout<< X*p_nol*faktor_van_hoff(n,alfa);
	}
}
double penurunan_titik_beku(double Kf,double m)
{
	int pilih,n,alfa;
	cout<<"Pilih (1) jika non Elektrolit dan pilih (2) Elektrolit : ";
	cin>>pilih;
	if(pilih==1)
	{
		cout<<Kf*m;
	}
	else if(pilih==2)
	{
		cout<<"masukkan nilai n = ";
		cin>>n;
		cout<<"masukkan nilai alfa =";
		cin>>alfa;
		cout<<Kf*m*faktor_van_hoff(n,alfa);
	}
}
double kenaikan_titik_didih(double kb,double m)
{
	int pilih,n,alfa;
	cout<<"Pilih (1) jika non Elektrolit dan pilih (2) Elektrolit : ";
	cin>>pilih;
	if(pilih==1)
	{
		cout<<kb*m;
	}
	else if(pilih==2)
	{
		cout<<"masukkan nilai n = ";
		cin>>n;
		cout<<"masukkan nilai alfa =";
		cin>>alfa;
		cout<<kb*m*faktor_van_hoff(n,alfa);
	}
}
double tekanan_osmotik(double M,double R,double T)
{
	int pilih,n,alfa;
	cout<<"Pilih (1) jika non Elektrolit dan pilih (2) Elektrolit : ";
	cin>>pilih;
	if(pilih==1)
	{
		cout<< M*R*T;
	}
	else if(pilih==2)
	{
		cout<<"masukkan nilai n = ";
		cin>>n;
		cout<<"masukkan nilai alfa =";
		cin>>alfa;
		cout<< M*R*T*faktor_van_hoff(n,alfa);
	}
}

//Nofrizan
double me(double Ar, double n) { //me = massa ekuivalen
	return (Ar/n);
}

double muatan(double I, double t) {
	return (I*t);
}

double faraday1(double Ar, double n, double I, double t) { //Ar = atom relatif; n = muatan ion biloks; I = arus; t = waktu;
	return (me(Ar,n)*(muatan(I,t)/96500));
}

double faraday2(double Ar1, double n1, double G2, double Ar2, double n2) {
	return ((G2*me(Ar1,n1))/me(Ar2,n2));
}

double laju_reaksi(double M1, double V2, double M2) { //V = laju reaksi; M = molaritas; 
	return((V2*M2)/M1);
}

//Risaldi
double perubahan_entalpi(double massa, double kalor_jenis, int suhu1, int suhu2) {
       double Q = massa*kalor_jenis*(suhu2-suhu1);//Q = kalor yang dilepas/diserap reaksi
       double H = -Q;//H = Perubahan_entalpi
       return H;
}

double derajat_disosiasi (double mol_terurai, double mol_mula2) {
       return mol_terurai/mol_mula2;
}

int jumlah_proton_neutron_elektron(int nomor_massa, int muatan, int nomor_atom) {
       int proton = nomor_atom;
       int neutron = nomor_massa - nomor_atom;
       int elektron = nomor_atom - muatan;
       cout<<"Jumlah Protonnya :"<<proton<<endl;
       cout<<"Jumlah Neutronnya : "<<neutron<<endl;
       cout<<"Jumlah Elektronnya : "<<elektron<<endl;
}

double molalitas (double mol_zt, double kilogram_pelarut) {
       //mol_zt = mol zat terlarut
       return mol_zt/kilogram_pelarut;
}

double molaritas(double mol_zt, int liter_larutan) {
       //mol_zt = mol zat terlarut
       return mol_zt/liter_larutan;
}

//Hanafi

void namaUnsur(int n){
	switch(n){
		case 1: cout<<"Hidrogen"; break;
		case 2: cout<<"Helium"; break;
		case 3: cout<<"Litium"; break;
		case 4: cout<<"Berilium"; break;
		case 5: cout<<"Boron"; break;
		case 6: cout<<"Karbon"; break;
		case 7: cout<<"Nitrogen"; break;
		case 8: cout<<"Oksigen"; break;
		case 11: cout<<"Natrium"; break;
		case 13: cout<<"Aluminium"; break;
		case 17: cout<<"Klor"; break;
	}
}

void lambangUnsur(int n){
	switch(n){
		case 1: cout<<"H"; break;
		case 2: cout<<"He"; break;
		case 3: cout<<"Li"; break;
		case 4: cout<<"Be"; break;
		case 5: cout<<"B"; break;
		case 6: cout<<"C"; break;
		case 7: cout<<"N"; break;
		case 8: cout<<"O"; break;
		case 11: cout<<"Na"; break;
		case 13: cout<<"Al"; break;
		case 17: cout<<"Cl"; break;
	}
}

// elektron valensi
int eValensi(int n){
	switch(n){
		case 1: return(1); break;
		case 2: return(8); break;
		case 3: return(1); break;
		case 4: return(2); break;
		case 5: return(3); break;
		case 6: return(4); break;
		case 7: return(5); break;
		case 8: return(6); break;
		case 11: return(1); break;
		case 13: return(3); break;
		case 17: return(7); break;
	}
}

void golonganUnsur(int n){
	switch(n){
		case 1: cout<<eValensi(1); break;
		case 2: cout<<eValensi(8); break;
		case 3: cout<<eValensi(1); break;
		case 4: cout<<eValensi(2); break;
		case 5: cout<<eValensi(3); break;
		case 6: cout<<eValensi(4); break;
		case 7: cout<<eValensi(5); break;
		case 8: cout<<eValensi(6); break;
		case 11: cout<<eValensi(1); break;
		case 13: cout<<eValensi(3); break;
		case 17: cout<<eValensi(7); break;
	}
}

// inputkan no atom, misal:
// Hidrogen = 1
// Litium = 3
// Berilium = 4
// Karbon = 6
// Nitrogen = 7
// Oksigen = 8
// Natrium = 11
// Aluminium = 13
// Klor = 17
void senyawa(int a, int b){
	if(eValensi(a)==eValensi(b)){
		lambangUnsur(a);
	}
	else if(eValensi(a)==1&eValensi(b)==7||eValensi(a)==7&eValensi(b)==1||
	  eValensi(a)==2&eValensi(b)==6||eValensi(a)==6&eValensi(b)==2){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(a); lambangUnsur(b);
	}
	else if(eValensi(a)==1&eValensi(b)==6||eValensi(a)==6&eValensi(b)==1){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(a); cout<<"2"; lambangUnsur(b);
	}
	else if(eValensi(a)==1&eValensi(b)==5||eValensi(a)==5&eValensi(b)==1){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(b); lambangUnsur(a); cout<<"3";
	}
	else if(eValensi(a)==1&eValensi(b)==4||eValensi(a)==4&eValensi(b)==1){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(b); lambangUnsur(a); cout<<"4";
	}
	else if(eValensi(a)==2&eValensi(b)==7||eValensi(a)==7&eValensi(b)==2){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(a); lambangUnsur(b); cout<<"2";
	}
	else if(eValensi(a)==3&eValensi(b)==7||eValensi(a)==7&eValensi(b)==3){
		if(a>b){int c;c=a;a=b;b=c;}
		lambangUnsur(a); lambangUnsur(b); cout<<"3";
	}
	else{
		cout<<"!!invalid!!";
	}
}
