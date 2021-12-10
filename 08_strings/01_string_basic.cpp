/* 
    String Basic
*/

#include <iostream>
using namespace std;

int main(){

    char c1[100] = "Hi";                     // character array
    cout << "c1: " << c1 << endl;
    cout << "c1[0]: " << c1[0] << "\n";    
    cout << "c1[1]: " << c1[1] << "\n\n";

    string s0 = "Hi";                        // string
    cout << "s0: " << s0 << endl;
    cout << "s0[0]: " << s0[0] << "\n";
    cout << "s0[1]: " << s0[1] << "\n\n";


    string s1[2] = {"Shyam", "Ram Sharma"};
    cout << "s1: " << s1 << endl;              // print address
    cout << "s1[0]: " << s1[0] << endl;        // print first row
    cout << "s1[1]: " << s1[1] << endl;        // print second row
    cout << "s1[1][0]: " << s1[1][0] << endl;  // print character (at second row & first column)
    cout << "s1[1][1]: " << s1[1][1] << endl;  // print character (at second row & second column)
    cout << "s1[1][3]: " << s1[1][2] << "\n\n";  // print character (at second row & third column)


    string s2[2];                              // String declaration (2 rows)
    s2[0] = "first row";
    s2[1] = "second row";
    cout << "s2: " << s2 << endl;              // print address
    cout << "s2[0]: " << s2[0] << endl;
    cout << "s2[1]: " << s2[1] << "\n\n";


    // Taking Input -------------------------------------------------

    char ch1[100];                             // character
    cout << "Enter elements for character array: ";
    cin >> ch1;
    cout << ch1 << "\n\n";


    string str1;                               // string
    cout << "Enter elements for string: ";
    cin >> str1;
    cout << str1 << "\n\n";

    cin.get();   // to consume extra "\n"


    char ch2[10][100];                      // 2D character Array (10 Rows)
    cout << "Enter character array (Row-1): ";
    cin.getline(ch2[0], 100);    
    cout << ch2[0] << endl;
    cout << "Enter character array (Row-2): ";
    cin.getline(ch2[1], 100);    
    cout << ch2[1] << "\n\n";


    string str2[3];                           // string (3 Rows)
    cout << "Enter your string (Row-1): ";
    getline(cin, str2[0]);
    cout << str2[0] << endl;
    cout << "Enter your string (Row-2): ";
    getline(cin, str2[1]);
    cout << str2[1] << endl;

    return 0;
}