#ifndef kim_H
#define kim_H

double pangkatdesimal(double x,int pangkat);
       //TABEL PERIODIK
       void namaUnsur(int n);
       void lambangUnsur(int n);
       void golonganUnsur(int n);

    //STOIKIOMETRI
    double mol(double massa, double Mr);
    double moljp(double jp);
    double molGas1(double volume);
    double molGas2(double volume1,double volume2,double mol2);
    double molGas3(double volume,double P, double T);
    double molaritas_larutan(double masa_jenis,double kepekatan, double mr );
    double molaritas_dari_pengenceran(double V1, double V2, double M1);
    double ml_dari_pengenceran(double V1, double M2, double M1 );
    double molalitas (double mol_zt, double kilogram_pelarut);
    double molaritas(double mol_zt, int liter_larutan);
    int jumlah_proton_neutron_elektron(int nomor_massa, int muatan, int nomor_atom);
    double derajat_disosiasi (double mol_terurai, double mol_mula2);
    void senyawa(int a, int b);
    int eValensi(int n);
    

    //SIFAT KOLIGATIF LARUTAN
    double faktor_van_hoff(int n,double alfa);
    double penurunan_tekanan_uap(double X,double p_nol);
    double penurunan_titik_beku(double Kf,double m);
    double kenaikan_titik_didih(double kb,double m);
    double tekanan_osmotik(double M,double R,double T);
    
    //ZAT RADIOAKTIF
    bool kestabilan_inti(int n, int p);
    double waktu_paruh(double massa_a,int waktu_peluruhan,int waktu_paruh);
    
    //ELEKTROKIMIA
    double me(double Ar, double n);
    double muatan(double I, double t);
    double faraday1(double Ar, double n, double I, double t);
    double faraday2(double Ar1, double n1, double G2, double Ar2, double n2);
    
    //LAJU REAKSI
    double laju_reaksi(double M1, double V2, double M2);
    
    //SUHU DAN KALOR
    double perubahan_entalpi(double massa, double kalor_jenis, int suhu1, int suhu2);
    

#endif
