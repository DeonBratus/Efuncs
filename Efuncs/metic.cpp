/* Файл с возможно полезными функциями,
 * реализованые во время выполнения заданий.
 */
#include <iostream>
#include <cmath>
using namespace std;
// Вычисляет значения корней квадратного уравнения
int SqEquation(int a, int b, int c) {
    int D = b * b - (4 * a * c);
    float x1 = (float) (-b) / (2 * (float) a);
    if (D > 0) {
        cout << x1 + sqrt(D) / (2 * a) << " " << x1 - sqrt(D) / (2 * a) << endl;
    } else if (D == 0) {
        printf("%.2f %.2f", x1,x1);
    } else {
        printf("No real roots");
    }
    return 0;
}
// Проходит по массиву для поиска значения value
bool FindArrValue(int * p, int * q , int value) {
    for(; p != q;++p)
        if(*p == value)
            return true;
        return false;
}
// Определяет максимум в массиве
int Max(int * p, int * q) {
    int MAX = *p;
    for(; p != q; ++p)
        if(*p>MAX)
            MAX = *p;
        return MAX;
}
// Выводит введеные данные в обратном порядке с помощью рекурсии
int RevOrd() {
    int n = 0; scanf("%d", &n);
    if(n == 0) return 0;
    RevOrd(); std::cout << n << " ";
}
// Cчитает количество символов в строке
unsigned StrLen(char *str) {
    char *p = str; int cnt = 0;
    for (; *p != '\0'; ++p) cnt++;
    return cnt;
}
// Склеивает две строки
void StrCat(char *to,  char *from) {
        char *p = to;
        for(;*p != '\0'; ++p) {  }
        *p = *from;
        for(;*p !='\0';++p) *p = *from++;
}
// Выводит из кол-ва секунд время в формате H:MM:SS
void sec2hmc (int seconds)
{
    cout << seconds/3600%24 << ":";
    cout << seconds/60%60/10 << seconds/60%60%10 <<":";
    cout << seconds%60/10    << seconds%60%10    << endl;
}