#ifndef METICEDU_FIMEXT_H
#define METICEDU_FIMEXT_H

#include <string>

using namespace std;

int write2file(string fname, string text);

void DiePcByTxt();

char *MmrCheck(char old_memory, int old_size, char new_memory, int new_size );

char *resize(const char *str, unsigned size, unsigned new_size);

int** transpose( int** m, unsigned rows, unsigned cols);

#endif
