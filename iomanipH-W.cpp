// Mohammad-Amin Abdolahi
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
     cout << setfill('-') << setw(41) << '\n';
     cout << '|' << "a guid for prefix letters in the table" << '|' << endl;
     cout << '|' << setw(39) << '|' << '\n';
     cout << '|' << setfill(' ') << setw(14) << "prefix" << setw(6) << '|' << setw(13) << "meaning" << setw(6) << '|' << endl;
     cout << '|' << setfill('-') << setw(20) << '+' << setw(19) << '|' << '\n';
     cout << '|' << setfill(' ') << setw(11) << 'U' << setw(9) << '|' << setw(14) << "unSinged" << setw(5) << '|' << endl;
     cout << '|' << setfill('-') << setw(20) << '+' << setw(19) << '|' << '\n';
     cout << '|' << setfill(' ') << setw(11) << 'L' << setw(9) << '|' << setw(11) << "Long" << setw(8) << '|' << endl;
     cout << setfill('-') << setw(41) << '\n' << endl;

     cout << '+' << setfill('-') << setw(91) << "+\n";

     cout << '|' << setfill(' ') << setw(46) << "TABLE" << setw(44) << '|' << endl;

     cout << '+' << setfill('-') << setw(91) << "+\n";

     cout << '|' << setfill(' ') << setw(45) << "data" << setw(45) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(11) << "type" << setw(8) << '|' << setw(14) << "size(byte)" << setw(5) << '|'
          << setw(14) << "min" << setw(12) << '|' << setw(14) << "max" << setw(12) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(11) << "bool" << setw(8) << '|' << setw(10) << sizeof(bool) << setw(9) << '|'
          << setw(13) << '0' << setw(13) << '|' << setw(13) << '1' << setw(13) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(11) << "char" << setw(8) << '|' << setw(10) << sizeof(char) << setw(9) << '|'
          << setw(15) << CHAR_MIN << setw(11) << '|' << setw(14) << CHAR_MAX << setw(12) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(12) << "Uchar" << setw(7) << '|' << setw(10) << sizeof(unsigned char) << setw(9) << '|'
          << setw(13) << 0 << setw(13) << '|' << setw(14) << UCHAR_MAX << setw(12) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(12) << "short" << setw(7) << '|' << setw(10) << sizeof(short) << setw(9) << '|'
          << setw(15) << SHRT_MIN << setw(11) << '|' << setw(15) << SHRT_MAX << setw(11) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(13) << "Ushort" << setw(6) << '|' << setw(10) << sizeof(unsigned short) << setw(9) << '|'
          << setw(13) << 0 << setw(13) << '|' << setw(15) << USHRT_MAX << setw(11) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(10) << "int" << setw(9) << '|' << setw(10) << sizeof(int) << setw(9) << '|'
          << setw(18) << INT_MIN << setw(8) << '|' << setw(18) << INT_MAX << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(11) << "Uint" << setw(8) << '|' << setw(10) << sizeof(unsigned int) << setw(9) << '|'
          << setw(13) << 0 << setw(13) << '|' << setw(18) << UINT_MAX << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(11) << "Lint" << setw(8) << '|' << setw(10) << sizeof(long int) << setw(9) << '|'
          << setw(18) << LONG_MIN << setw(8) << '|' << setw(18) << LONG_MAX << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(12) << "ULint" << setw(7) << '|' << setw(10) << sizeof(unsigned long int) << setw(9) << '|'
          << setw(13) << 0 << setw(13) << '|' << setw(18) << ULONG_MAX << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(12) << "LLint" << setw(7) << '|' << setw(10) << sizeof(long long int) << setw(9) << '|'
          << setw(22) << LONG_LONG_MIN << setw(4) << '|' << setw(22) << LONG_LONG_MAX << setw(4) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(13) << "ULLint" << setw(6) << '|' << setw(10) << sizeof(unsigned long long int) << setw(9) << '|'
          << setw(13) << 0 << setw(13) << '|' << setw(22) << ULONG_LONG_MAX << setw(4) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(12) << "float" << setw(7) << '|' << setw(10) << sizeof(float) << setw(9) << '|'
          << setw(18) << __FLT_MIN__ << setw(8) << '|' << setw(18) << __FLT_MAX__ << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(13) << "double" << setw(6) << '|' << setw(10) << sizeof(double) << setw(9) << '|'
          << setw(18) << __DBL_MIN__ << setw(8) << '|' << setw(18) << __DBL_MAX__ << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(14) << "Ldouble" << setw(5) << '|' << setw(10) << sizeof(long double) << setw(9) << '|'
          << setw(18) << __LDBL_MIN__ << setw(8) << '|' << setw(18) << __LDBL_MAX__ << setw(8) << '|' << endl;

     cout << '+' << setfill('-') << setw(19) << '+' << setw(19) << '+' << setw(26) << '+' << setw(26) << '+' << endl;

     cout << '|' << setfill(' ') << setw(46) << "finish" << setw(44) << '|' << endl;

     cout << '+' << setfill('-') << setw(90) << '+' << endl;

     return 0;
}