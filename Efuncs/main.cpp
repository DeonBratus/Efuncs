#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>
using namespace std;
struct String
{
    explicit String(const char *str = "")
    : size(strlen(str)),str(strcpy(new char[strlen(str) + 1], str)){}
    ~String() { delete [] str; }
    void append( String &other) const
    {
     char *s = new char[size + other.size + 1];
     strcpy(s, str);
     s[size] = other.str[0];
     for(unsigned int i = size + 1; i != other.size + size + 1; i++)
         s[i] = other.str[i - size];
     for(int i = 0; i != other.size + size ; i++)
         str[i] = s[i];
     delete [] s;
        str[other.size + size] = '\0'; //what
    }
 size_t size;
 char *str;
};

int main()
{
    String str("hello");
    String str1("world");
    str.append(str1);
    cout<<str.str;
    return 0;
}