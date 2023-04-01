// Изменение размера выделенной области памяти с копирование значений
char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *new_memory = new char[new_size]; // Выделение новой памяти
    for(int i = 0; i < size && i < new_size ; i++)
        new_memory[i] = str[i]; // Копируем данные из старой области в новую
    delete [] str; // Очищаем старую память
    return new_memory; // Возвращаем новую память
}
// Функция возврощает указатель области памяти и инициализирует все значения введенные пользователем
char *MmrCheck(char old_memory, int old_size, char new_memory, int new_size ) {
    char * mmry = new char[old_size]; // Выделяем и инициализируем память размеров для 5 переменных типа char
    for(int i = 0; i<old_size;i++)
        mmry[i] = old_memory; // Заводятся значения в память
    char *m = resize(mmry,old_size, new_size); // присваиваем зачение памяти
    for(int i = 0; i<new_size;i++) // проверка изменения ячеек памяти
        if(m[i] != old_memory)
            m[i] = new_memory;
    return m; // возвращаем указатель на память массива char
}
//Транспонирование матрицы
int** transpose( int** m, unsigned rows, unsigned cols) {
    int **mtrx = new int*[cols]; // Создание cols указателей на указатели
    mtrx[0] = new int[cols*rows];// Создание матрицы указателей в кол-ве cols*rows
    for(int i = 1; i != cols; ++i)
        mtrx[i] = mtrx[i-1] + rows; //Присваиваем указателю началам каждой строки
    for (int i = 0; i < cols; i++)
        for (int j = 0; j < rows; j++) mtrx[i][j] = m[j][i]; // Транспонируем матрицу
    return mtrx;
}