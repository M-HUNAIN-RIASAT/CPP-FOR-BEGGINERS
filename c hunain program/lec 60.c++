//*****************     INPUT AND OUTPUT FROM THE FILES (READING FILES)
#include <iostream>
#include <fstream>
using namespace std;
/*
THE USEFUL CLASSES FOR WORKING WITH THE FILES IN CPP;
1.  fstream  --> base class
2.  ifstream --> derived from base fstream class ____*input file stream
2.  ofstream --> derived from base fstream class ____*output file stream

********    2 WAYS TO OPEN A FILE;
1.USING TEH CONSTRUCTORS
2.USING TEH MEMBER FUNCTION OPEN() OF THE CLASS


*/
int main()
{
     // OPENING FILES BY CONSTRUCTORS ;
    string st = "asalam o alikum GOING TO WRITE IN THIS FILE BY OFSTREAM";
    string st2;
    // OPENING FILE USING CONSTRUCTOR AND WRITING  IT ;
    ofstream out("SAMPLE60.TXT");
    out << st;    //  YE COUT KE TARHA KAM KARTA
    // OPENING FILE USING CONSTRUCTOR AND READING  IT ;
    ifstream in("SUMPLE60.TXT");
    in >> st2;   // YE CIN KE TARHA KAM KARTA  ** SIGN DEKH LAIIN HUNAIN
    cout << st2; // YE COUT KE TARHA KAM KARTA
    // AB AIK DAFA CIN (IN)OR AIK DAFA COUT YANI(ST2) YE AIK LAFAZ KI PRINT KARAE GA TO
    getline(in,st2);
    cout<< st2;
    return 0;
}