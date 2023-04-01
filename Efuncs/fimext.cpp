#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Cоздает файл с именем fname и текстом text
int write2file(string fname, string text) {
    ofstream fout;
    fout.open(fname);
    fout << text;
    fout.close();
    return 0;
}
// Создает бексонечное кол-во файлов txt
void DiePcByTxt() {
    cout << "Type <Name file> and <Text> and press Enter" << endl;
    string name;
    string text;
    cin >> name;
    cin >> text;
    int p = 0;
    while (true) {
        p++;
        write2file(name + to_string(p) + ".txt", text);
        cout << "Created file: " << name + to_string(p) + ".txt" << endl;
    }
}