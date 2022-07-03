#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
using namespace std;

class old
{
private:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
protected:
      int  gross,deduct,taxableinc,gr;
      int a,b,c,d,e;
public:
    old()
    {

    }
    old(int a , int b , int c)
    {
        gross = a;
        if(c>0)
        {
            gr = a - 50000;
        }
        else
        {
            gr = a;
        }
        deduct = b;
        if(deduct <= 150000)
        {
            taxableinc = gr-deduct;
        }
        else
        {
            taxableinc = gr-150000;
        }
        gotoxy(20,58);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TAX DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,60);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. GROSS TOTAL                   : Rs "<<gross;
        gotoxy(20,62);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. DUDECTIONS                    : Rs "<<deduct;
        if(c>0)
        {
            gotoxy(20,64);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. STANDARD DEDUCTION            : Rs 50000";
        }
        else
        {
            gotoxy(20,64);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. STANDARD DEDUCTION            : Rs 0";
        }
        gotoxy(20,66);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. TAXABLE INCOME                : Rs "<<taxableinc;
        if(taxableinc<=250000)
        {
            gotoxy(20,68);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. TAX ON TOTAL TAXABLE INCOME   : Rs 0";
            gotoxy(20,70);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. HEALTH AND EDUCATION CESS @4% : Rs 0";
            gotoxy(20,72);
            cout<<"\xB2\xB2\xB2\xB2\xB2 7. REBATE U/S 87A                : Rs 0";
            gotoxy(20,74);
            cout<<"\xB2\xB2\xB2\xB2\xB2 8. TOTAL TAX LIABILITY           : Rs 0 (NO TAX TO BE PAID)";
        }
        else if(taxableinc>250000&&taxableinc<=500000)
        {
            a = taxableinc-250000;
            b = (a*5)/100;
            gotoxy(20,68);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. TAX ON TOTAL TAXABLE INCOME   : Rs "<<b;
            gotoxy(20,70);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. HEALTH AND EDUCATION CESS @4% : Rs 0";
            gotoxy(20,72);
            cout<<"\xB2\xB2\xB2\xB2\xB2 7. REBATE U/S 87A                : Rs "<<b;
            gotoxy(20,74);
            cout<<"\xB2\xB2\xB2\xB2\xB2 8. TOTAL TAX LIABILITY           : Rs 0 (NO TAX TO BE PAID)";
        }
        else if(taxableinc>500000&&taxableinc<=1000000)
        {
            a = 12500;
            b = taxableinc-(250000+250000);
            c = (b*20)/100;
            d = a+c;
            e = (d*4)/100;
            gotoxy(20,68);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,70);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,72);
            cout<<"\xB2\xB2\xB2\xB2\xB2 7. REBATE U/S 87A                : Rs 0";
            gotoxy(20,74);
            cout<<"\xB2\xB2\xB2\xB2\xB2 8. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        else
        {
            a = 100000;
            b = taxableinc-(250000+250000+500000);
            c = (b*30)/100;
            d = a+c;
            e = (d*4)/100;
            gotoxy(20,68);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,70);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,72);
            cout<<"\xB2\xB2\xB2\xB2\xB2 7. REBATE U/S 87A                : Rs 0";
            gotoxy(20,74);
            cout<<"\xB2\xB2\xB2\xB2\xB2 8. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        gotoxy(20,77);
        cout<<"\xB2\xB2\xB2\xB2\xB2 IMPORTANT NOTES \xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,79);
        cout<<"\x2191\x2191\x2191\x2191  REBATE U/S 87A : REBATE OF Rs 12,500/- IS AVAILABLE IF TAXABLE INCOME IS UPTO 5,00,000.";
        gotoxy(20,81);
        cout<<"\x2191\x2191\x2191\x2191  TAX ON INCOME OF INDIVIDUALS U/S 115BAC :-"<<endl<<endl;
        cout<<"\t\t\t\t+----------+--------------------------------------------------------------+---------------------+"<<endl;
        cout<<"\t\t\t\t|   S.NO   |                         TOTAL INCOME                         |     RATE OF TAX     |"<<endl;
        cout<<"\t\t\t\t+----------+--------------------------------------------------------------+---------------------+"<<endl;
        cout<<"\t\t\t\t|    1.    |                       UPTO Rs. 2,50,000                      |        NILL         |"<<endl;
        cout<<"\t\t\t\t|    2.    |              FROM Rs. 2,50,001 TO RS. 5,00,000               |      5 per cent     |"<<endl;
        cout<<"\t\t\t\t|    3.    |              FROM Rs. 5,00,001 TO RS. 10,00,000              |      20 per cent    |"<<endl;
        cout<<"\t\t\t\t|    4.    |                      ABOVE Rs. 15,00,000                     |      30 per cent    |"<<endl;
        cout<<"\t\t\t\t+----------+--------------------------------------------------------------+---------------------+"<<endl;
        gotoxy(20,93);
        cout<<"Press any key to exit........>";
        getch();
        system("cls");
        gotoxy(20,5);
        cout<<"\tThank you for using ";
        gotoxy(20,5);
        cout<<"Exiting in 3 second...........>";
        Sleep(3000);
        exit(0);
    }
};

class presonaldetails
{
protected:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
public:
        string year;
        string name;
        int age;
        string add;
        string occ;
        string pan;
     void presonaldet()
    {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PERESONAL DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER ASSESSMENT YEAR     : ";
        cin.ignore();
        getline(cin,year);
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER FULL NAME           : ";
        getline(cin,name);
        gotoxy(20,11);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER AGE                 : ";
        cin>>age;
        cin.ignore();
        gotoxy(20,13);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER ADDRESS             : ";
        getline(cin,add);
        gotoxy(20,15);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER OCCUPATION          : ";
        getline(cin,occ);
        gotoxy(20,17);
        cout<<"\xB2\xB2\xB2\xB2\xB2 6. ENTER PAN CARD NUMBER     : ";
        getline(cin,pan);
        gotoxy(20,19);
        cout<<"Press any key to countinue.....";
        getch();
        system("cls");
    }
};

class dispd:public presonaldetails
{
public:
    void dispds()
    {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRESONAL DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER ASSESSMENT YEAR     : "<<year;
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER FULL NAME           : "<<name;
        gotoxy(20,11);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER AGE                 : "<<age;
        gotoxy(20,13);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER ADDRESS             : "<<add;
        gotoxy(20,15);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER OCCUPATION          : "<<occ;
        gotoxy(20,17);
        cout<<"\xB2\xB2\xB2\xB2\xB2 6. ENTER PAN CARD NUMBER     : "<<pan;
    }
};

class inc_ded
{
protected:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    int lic,ppf,nse,tf,ess,mcp,ihe,irh,npe,pdp,aod;
    int A,B,C,D,E;
public:
    int gr,de;
    inc_ded()
    {

    }
    void inc_deds()
    {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INCOME DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER INCOME FROM SCALARY             : Rs ";
        cin>>A;
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER INCOME FROM HOUSE PROPERTY      : Rs ";
        cin>>B;
        gotoxy(20,11);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER INCOME FROM BUSINESS/PROFESSION : Rs ";
        cin>>C;
        gotoxy(20,13);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER INCOME FROM CAPTIAL GAIN        : Rs ";
        cin>>D;
        gotoxy(20,15);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER INCOME FROM ANY OTHER SOURSE    : Rs ";
        cin>>E;
        gotoxy(20,17);
        cout<<"Press any key to countinue.....";
        getch();
        system("cls");
    }
    void ind_dedss()
    {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  DEDUCTIONS  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. LIFE INSURANCE PREMIUM PAID                    : Rs ";
        cin>>lic;
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. CONTRIBUTION TOWARDS PROVIDENT FUND/PPF        : Rs ";
        cin>>ppf;
        gotoxy(20,11);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. INVESTMENT IN NSC + INTREST                    : Rs ";
        cin>>nse;
        gotoxy(20,13);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. TUTION FEES PAID FOR CHILDREN                  : Rs ";
        cin>>tf;
        gotoxy(20,15);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. CONTRIBUTION TOWARD NPF                        : Rs ";
        cin>>npe;
        gotoxy(20,17);
        cout<<"\xB2\xB2\xB2\xB2\xB2 6. INVESTMENT UNDER EQUITY SAVING SCHEME          : Rs ";
        cin>>ess;
        gotoxy(20,19);
        cout<<"\xB2\xB2\xB2\xB2\xB2 7. MEDI-CLAIM PREMIUM                             : Rs ";
        cin>>mcp;
        gotoxy(20,21);
        cout<<"\xB2\xB2\xB2\xB2\xB2 8. INTREST ON LOAN FOR HIGHER EDUCATION           : Rs ";
        cin>>ihe;
        gotoxy(20,23);
        cout<<"\xB2\xB2\xB2\xB2\xB2 9. INTREST ON LOAN TAKEN FOR RESIDENTIAL HOUSE    : Rs ";
        cin>>irh;
        gotoxy(20,25);
        cout<<"\xB2\xB2\xB2\xB2\xB2 10. DEDUCTION IN CASE OF A PERSON WITH DISABILITY : Rs ";
        cin>>pdp;
        gotoxy(20,27);
        cout<<"\xB2\xB2\xB2\xB2\xB2 11. ANY OTHER DEDUCTIONS                          : Rs ";
        cin>>aod;
        gotoxy(20,29);
        cout<<"Press any key to countinue.....";
        getch();
        system("cls");
    }
    void call()
    {
        gr=A+B+C+D+E;
        de=lic+ppf+nse+tf+npe+ess+mcp+ihe+irh+pdp+aod;
        old(gr,de,A);
    }
};

class inc:public inc_ded
{
public:
    void disincs()
    {
        gotoxy(20,20);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INCOME DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,22);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER INCOME FROM SCALARY                      : Rs "<<A;
        gotoxy(20,24);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER INCOME FROM HOUSE PROPERTY               : Rs "<<B;
        gotoxy(20,26);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER INCOME FROM BUSINESS/PROFESSION          : Rs "<<C;
        gotoxy(20,28);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER INCOME FROM CAPTIAL GAIN                 : Rs "<<D;
        gotoxy(20,30);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER INCOME FROM ANY OTHER SOURSE             : Rs "<<E;
    }
};

class ded:public inc
{
public:
    void disded()
    {
        gotoxy(20,33);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  DEDUCTIONS  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,35);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. LIFE INSURANCE PREMIUM PAID                    : Rs "<<lic;
        gotoxy(20,37);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. CONTRIBUTION TOWARDS PROVIDENT FUND/PPF        : Rs "<<ppf;
        gotoxy(20,39);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. INVESTMENT IN NSC + INTREST                    : Rs "<<nse;
        gotoxy(20,41);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. TUTION FEES PAID FOR CHILDREN                  : Rs "<<tf;
        gotoxy(20,43);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. CONTRIBUTION TOWARD NPF                        : Rs "<<npe;
        gotoxy(20,45);
        cout<<"\xB2\xB2\xB2\xB2\xB2 6. INVESTMENT UNDER EQUITY SAVING SCHEME          : Rs "<<ess;
        gotoxy(20,47);
        cout<<"\xB2\xB2\xB2\xB2\xB2 7. MEDI-CLAIM PREMIUM                             : Rs "<<mcp;
        gotoxy(20,49);
        cout<<"\xB2\xB2\xB2\xB2\xB2 8. INTREST ON LOAN FOR HIGHER EDUCATION           : Rs "<<ihe;
        gotoxy(20,51);
        cout<<"\xB2\xB2\xB2\xB2\xB2 9. INTREST ON LOAN TAKEN FOR RESIDENTIAL HOUSE    : Rs "<<irh;
        gotoxy(20,53);
        cout<<"\xB2\xB2\xB2\xB2\xB2 10. DEDUCTION IN CASE OF A PERSON WITH DISABILITY : Rs "<<pdp;
        gotoxy(20,55);
        cout<<"\xB2\xB2\xB2\xB2\xB2 11. ANY OTHER DEDUCTIONS                          : Rs "<<aod;
    }
};

class disnew
{
protected:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    int A,B,C,D,E;
public:
    int gr,de;
    disnew()
    {

    }
    void ine()
    {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INCOME DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER INCOME FROM SCALARY             : Rs ";
        cin>>A;
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER INCOME FROM HOUSE PROPERTY      : Rs ";
        cin>>B;
        gotoxy(20,11);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER INCOME FROM BUSINESS/PROFESSION : Rs ";
        cin>>C;
        gotoxy(20,13);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER INCOME FROM CAPTIAL GAIN        : Rs ";
        cin>>D;
        gotoxy(20,15);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER INCOME FROM ANY OTHER SOURSE    : Rs ";
        cin>>E;
        gotoxy(20,17);
        cout<<"Press any key to countinue.....";
        getch();
        system("cls");
    }
    void disine()
    {
        gotoxy(20,20);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INCOME DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,22);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. ENTER INCOME FROM SCALARY                      : Rs "<<A;
        gotoxy(20,24);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. ENTER INCOME FROM HOUSE PROPERTY               : Rs "<<B;
        gotoxy(20,26);
        cout<<"\xB2\xB2\xB2\xB2\xB2 3. ENTER INCOME FROM BUSINESS/PROFESSION          : Rs "<<C;
        gotoxy(20,28);
        cout<<"\xB2\xB2\xB2\xB2\xB2 4. ENTER INCOME FROM CAPTIAL GAIN                 : Rs "<<D;
        gotoxy(20,30);
        cout<<"\xB2\xB2\xB2\xB2\xB2 5. ENTER INCOME FROM ANY OTHER SOURSE             : Rs "<<E;
    }
    void vol()
    {
        int gross, taxableinc;
        int a,b,c,d,e,f;
        gross = A+B+C+D+E;
        taxableinc = A+B+C+D+E;
        gotoxy(20,33);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TAX DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,35);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. GROSS TOTAL                   : Rs "<<gross;
        gotoxy(20,37);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. TAXABLE INCOME                : Rs "<<taxableinc;
        if(taxableinc<=250000)
        {
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs 0";
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs 0";
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs 0 (NO TAX TO BE PAID)";
        }
        else if(taxableinc>250000&&taxableinc<=500000)
        {
            a = taxableinc-250000;
            b = (a*5)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<b;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs 0";
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs "<<b;
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs 0 (NO TAX TO BE PAID)";
        }
        else if(taxableinc>500000&&taxableinc<=750000)
        {
            a=12500;
            b=taxableinc-(250000+25000);
            c=(b*10)/100;
            d=a+c;
            e=(d*4)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        else if(taxableinc>750000&&taxableinc<=1000000)
        {
            a=37500;
            b=taxableinc-(250000+250000+250000);
            c=(b*15)/100;
            d=a+c;
            e=(d*4)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        else if(taxableinc>1000000&&taxableinc<=1250000)
        {
            a=75000;
            b=taxableinc-(250000+250000+250000+25000);
            c=(b*20)/100;
            d=a+c;
            e=(d*4)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        else if(taxableinc>1250000&&taxableinc<=1500000)
        {
            a=125000;
            b=taxableinc-(250000+250000+250000+25000+250000);
            c=(b*25)/100;
            d=a+c;
            e=(d*4)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        else
        {
            a=187500;
            b=taxableinc-(250000+250000+250000+25000+250000+250000);
            c=(b*30)/100;
            d=a+c;
            e=(d*4)/100;
            gotoxy(20,39);
            cout<<"\xB2\xB2\xB2\xB2\xB2 3. TAX ON TOTAL TAXABLE INCOME   : Rs "<<d;
            gotoxy(20,41);
            cout<<"\xB2\xB2\xB2\xB2\xB2 4. HEALTH AND EDUCATION CESS @4% : Rs "<<e;
            gotoxy(20,43);
            cout<<"\xB2\xB2\xB2\xB2\xB2 5. REBATE U/S 87A                : Rs 0";
            gotoxy(20,45);
            cout<<"\xB2\xB2\xB2\xB2\xB2 6. TOTAL TAX LIABILITY           : Rs "<<d+e;
        }
        gotoxy(20,49);
        cout<<"\xB2\xB2\xB2\xB2\xB2 IMPORTANT NOTES \xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,51);
        cout<<"\x2191\x2191\x2191\x2191  REBATE U/S 87A : REBATE OF Rs 12,500/- IS AVAILABLE IF TAXABLE INCOME IS UPTO 5,00,000.";
        gotoxy(20,53);
        cout<<"\x2191\x2191\x2191\x2191  TAX ON INCOME OF INDIVIDUALS U/S 115BAC :-"<<endl<<endl;
        cout<<"\t\t\t\t+-----------------------------------------------------------------------------------------------+"<<endl;
        cout<<"\t\t\t\t|   S.NO   |                         TOTAL INCOME                         |     RATE OF TAX     |"<<endl;
        cout<<"\t\t\t\t+-----------------------------------------------------------------------------------------------+"<<endl;
        cout<<"\t\t\t\t|    1.    |                       UPTO Rs. 2,50,000                      |        NILL         |"<<endl;
        cout<<"\t\t\t\t|    2.    |              FROM Rs. 2,50,001 TO RS. 5,00,000               |      5 per cent     |"<<endl;
        cout<<"\t\t\t\t|    3.    |              FROM Rs. 5,00,001 TO RS. 7,50,000               |      10 per cent    |"<<endl;
        cout<<"\t\t\t\t|    4.    |              FROM Rs. 7,50,001 TO RS. 10,00,000              |      15 per cent    |"<<endl;
        cout<<"\t\t\t\t|    5.    |             FROM Rs. 10,00,001 TO RS. 12,50,000              |      20 per cent    |"<<endl;
        cout<<"\t\t\t\t|    6.    |             FROM Rs. 12,50,001 TO RS. 15,00,000              |      25 per cent    |"<<endl;
        cout<<"\t\t\t\t|    7.    |                      ABOVE Rs. 15,00,000                     |      30 per cent    |"<<endl;
        cout<<"\t\t\t\t+-----------------------------------------------------------------------------------------------+"<<endl;
        gotoxy(20,68);
        cout<<"Press any key to exit...........>";
        getch();
        system("cls");
        gotoxy(20,5);
        cout<<"\tThank you for using ";
        gotoxy(20,5);
        cout<<"Exiting in 3 second...........>";
        Sleep(3000);
        exit(0);
    }

};

class ask
{
private:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    int a;
public:
    ask()
        {
        gotoxy(20,5);
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 OPTIONS AVALIBLE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout<<"\xB2\xB2\xB2\xB2\xB2 1. CALCULATE INCOME TAX ";
        gotoxy(20,9);
        cout<<"\xB2\xB2\xB2\xB2\xB2 2. CLOSE APPLICATION ";
        gotoxy(20,13);
        cout<<"Enter your choice : ";
        cin>>a;
        if(a==1)
        {
            int b;
            gotoxy(20,15);
            cout<<"Press any key to countinue.....";
            getch();
            system("cls");
            gotoxy(20,5);
            cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TAX SCHEME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
            gotoxy(20,7);
            cout<<"\xB2\xB2\xB2\xB2\xB2 1. USING OLD TAX SCHEME ";
            gotoxy(20,9);
            cout<<"\xB2\xB2\xB2\xB2\xB2 2. USING NEW TAX SCHEME ";
            gotoxy(20,13);
            cout<<"Enter your choice : ";
            cin>>b;
            gotoxy(20,15);
            cout<<"Press any key to countinue.....";
            getch();
            system("cls");
            if(b==1)
            {
                dispd o2;
                ded o3;
                o2.presonaldet();
                o3.inc_deds();
                o3.ind_dedss();
                o2.dispds();
                o3.disincs();
                o3.disded();
                o3.call();
            }
            else if(b==2)
            {
                dispd o2;
                disnew o3;
                o2.presonaldet();
                o3.ine();
                o2.dispds();
                o3.disine();
                o3.vol();
            }
            else
            {
                exit(0);
            }
        }
        else if(a==2)
        {
                system("cls");
                gotoxy(16,3);
                cout<<"\tThank you for using income tax calculator";
                gotoxy(16,5);
                cout<<"Exiting in 3 second...........>";
                Sleep(3000);
                exit(0);
        }
        else
        {
            gotoxy(20,23);
            cout<<"\aWrong Entry!!Please re-entered correct option";
            getch();
            system("cls");
            ask o;
        }
    }
};

class password
{
private:
    COORD coord = {0, 0};
    void gotoxy (int x, int y)
    {
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
public:
    password()
    {
        int j,i=0,k;
        string us;
        char ch,pass[10];
        char passwords[10]={"jiitnoida"};
        char d[25]=" Password Protected ";
        gotoxy(10,4);
        for(j=0;j<20;j++)
        {
            Sleep(50);
            cout<<"*";
        }
        for(j=0;j<20;j++)
        {
            Sleep(50);
            cout<<d[j];
        }
        for(j=0;j<20;j++)
        {
            Sleep(50);
            printf("*");
        }
        gotoxy(15,7);
        cout<<"Enter Username :";
        cin>>us;
        if(us=="SDF-II@2021")
        {
            gotoxy(15,9);
            cout<<"Enter Password :";
            while(ch!=13)
            {
                ch=getch();
                if(ch!=13 && ch!=8)
                {
                    putch('*');
                    pass[i] = ch;
                    i++;
                }
            }
            pass[i] = '\0';
            if(strcmp(pass,passwords)==0)
            {
                gotoxy(15,11);
                cout<<"Password match";
                gotoxy(15,13);
                cout<<"Press any key to countinue.....";
                getch();
                system("cls");
                ask o1;
            }
            else
            {
                gotoxy(15,16);
                cout<<"\aWarning!! Incorrect Password";
                getch();
                exit(0);
            }
        }
        else
        {
            gotoxy(15,16);
            cout<<"\aWarning!! Incorrect Username";
            getch();
            exit(0);
        }
    }
};

int main()
{
    password o;
    //ask o;
    return 0;
}
