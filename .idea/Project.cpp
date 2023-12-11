// Л/Р Программирование на языках Высокого Уровня (C++; C#; C)
// Выполнил студент ВГТУ (Воронежский Государственный Технический Университет)
// ФИТКБ - БИВТ-231
// Давыденко Дмитрий Дмитриевич

/Test

#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #1
/ #1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1 = 2.5;
    double x2 = -4.4;
    double x3 = 0.001;

    double y1 = sin(x1) + 3 * exp(x1);
    double y2 = sin(x2) + 3 * exp(x2);
    double y3 = sin(x3) + 3 * exp(x3);

    cout << "" << y1 << endl;
    cout << "" << y2 << endl;
    cout << "" << y3 << endl;

    return 0;
}

/ #2
#include <iostream>
#include <cmath>

int main()
{
    double x, z;

    std::cout << "";
    std::cin >> x;

    std::cout << "";
    std::cin >> z;

    double y = 15 / log(x) + atan(z / x) * 1 / 5.;

    std::cout << "" << y << std::endl;

    return 0;
}

/ #3
#include <iostream>
#include <cmath>

int main()
{
    double x;
    std::cout << "";
    std::cin >> x;

    double result = sqrt(cos(x) + pow(x, 4.5));

    std::cout << result << std::endl;
    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #2
/ #1
#include <iostream>

int main() {
    int angle;
    std::cout << "";
    std::cin >> angle;

    int hours = angle / 30;  // В одном круге 360 градусов, по 12 часов на круге, значит в одном часе 30 градусов
    int minutes = (angle % 30) * 2;  // В одном часе 60 минут, значит в одном градусе 2 минуты

    std::cout << "" << hours << std::endl;
    std::cout << "" << minutes << std::endl;

    return 0;
}

/ #2
#include <iostream>
using namespace std;

void reverse(int n)
{
    if (n == 0) {
        return;
    } else {
        cout << n % 10;
        reverse(n / 10);
    }
}
//функция "reverse" используется для правильного выполнения задачи

int main()
{
    int number;
    cout << " "; // Ввод четырёхзначного числа
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << " "; // Введено неверное число
        return 0;
    }

    reverseDigits(number);

    return 0;
}

/ #3
#include <iostream>

int main() {
    int a, b;
    std::cout << "";
    std::cin >> a >> b;

    int result = (a % b == 0 && b % a == 0) ? 1 : 0; // ? - True, : - False

    std::cout << "" << result << std::endl;

    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #3
/ #1
#include <iostream>
using namespace std;
int main()
{
    // Вводим число
    int number;
    cout << "";
    cin >> number;

    // Меняем 5-й бит на обратное значение
    int mask = 1 << 4;  // Смещаем 1 на 4 позиции влево для получения маски
    int result = number ^ mask; // Используем побитовое исключающее для инверсии 5-го бита

    // Выводим измененное значение 5-го бита
    bool fifthbit = (result >> 4) & 1;
    cout << "" << fifthbit << endl;

    return 0;
}

/ #2
#include <iostream>

int main()
{
    int number = 10;
    number = number << 3; // Умножаем на 8
    std::cout << "" << number << std::endl;

    return 0;
}

/ #3
#include <iostream>
#include <limits> // Библиотека для нахождения макс. числа типа int
using namespace std;
int main()
{
    unsigned int maxNumber = numeric_limits<unsigned int>::max(); // Функция поиска макс. числа с помощью библиотеки limits

    cout << "" << maxNumber << endl; // Вывод макс. числа

    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #4
/ #1
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x; //переменные
    cin >> a >> b >> c; //ввод переменных
    x = a + b + c; //x == sum(a,b,c)
    if ((1 < x) and (x < 10))
        cout << (b - a) << endl;
    else
        cout << (a * b) << endl; //условие задачи через if/else
    return 0;
}

/ #2
#include <iostream>
#include <algorithm> //требуется для нахождения max-элемента
using namespace std;

int main()
{
    int a, b, c, d, f; //переменные
    cin >> a >> b >> c >> d >> f; //ввод значений переменных с клавиатуры
    cout << max({ a,b,c,d,f }); //вывод максимального элемента
    return 0;
}

/ #3
#include <iostream>

void spirit(int start, int end) //функция void (пустота) при вызове функции return прекращает компиляцию
{
    if (start % 2 == 0) //проверка на четность
    {
        std::cout << start << " "; //вывод чисел
    }
    spirit(start + 1, end); //шаг +1
}

int main()
{
    int start = 1; //начало
    int end = 10; //конец
    spirit(start, end); //вызов функции

    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #5
/ #1
#include <iostream>

int main()
{
    int n, k, cnt = 0;
    std::cin >> n >> k;
    for (int i = 0; i<n; i++)
        if (i%k==0)
            cnt = cnt + 1;
    std::cout<<cnt<<std::endl;
    return 0;
}

/ #2
#include <iostream>

int main()
{
    int n, cnt = 0;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
        if (i % 2 != 0)
            cnt = cnt + i;
    std::cout<<cnt<<std::endl;
    return 0;
}

/ #3
#include <iostream>
using namespace std;

int main()
{
    int n = 0, plus = 0, minus = 0, null = 0;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int chislo;
        cout << "";
        cin >> chislo;

        if (chislo > 0)
            plus++;
        if (chislo < 0)
            minus++;
        if (chislo == 0)
            null++;
    }

    cout<<""<<plus<<endl;
    cout<<""<<minus<<endl;
    cout<<""<<null<<endl;

    return 0;
}

/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #6
/ #1
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Проверка на простое число

int main()
{
    int arr[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,89,101};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << " ";
    for (int i = 0; i = size; i++)
        if (isPrime(arr[i]))
        {
            cout << arr[i] << " ";
        }
    return 0;
}

/ #2
#include <iostream>
#include <algorithm>

int main()
{
    const int size = 10; // размер массива
    int arr[size];
    int maxValue, minValue; // мин и макс массива
    int save; // ячейка для хранения разности

    // заполнение массива от 0 до 99
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%100;
    }

    // вывод массива на экран
    std::cout << " ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    // поиск макс и мин значений массива
    maxValue = *std::max_element(arr, arr+size);
    minValue = *std::min_element(arr, arr+size);

    // вычисление разности
    save = maxValue - minValue;
    std::cout << save << std::endl;
    return 0;
}

/ #3
#include <iostream>

const int size = 10;

int main()
{
    int n[size];
    int pluscnt = 0, minuscnt = 0;
    for (int i = 0; i < size; ++i)
    {
        std::cin >> n[i];
    }

    for (int i = 0; i < size; ++i)
    {
        if (n[i] % 3 == 0 && n[i] % 5 == 0)
        {
            if (n[i] > 0)
                pluscnt++;
            if (n[i] < 0)
                minuscnt++;
        }
    }
    std::cout << pluscnt << std::endl;
    std::cout << minuscnt << std::endl;
    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #7
/ #1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10], n = 10;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Сортируем массив, чтобы соседние элементы были рядом
    sort(arr, arr + n);

    // Проверяем есть ли 2 одинаковых значения
    bool found = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << "Error";
    }
    return 0;
}

/ #2
#include <iostream>
using namespace std;

int main()
{
    int arr[15]; // объявляем массив из 15 значений

    // заполняем массив значениями от 1 до 15
    for (int i = 0; i < 15; i++)
    {
        arr[i] = i + 1;
    }

    // получаем адреса с третьего по 10 элементы и выводим значения на экран
    for (int i = 2; i <= 9; i++)
    {
        cout << i + 1 << ": " << &arr[i] << endl;
    }

    return 0;
}

/ #3
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {1,-2,3,-4,5};

    int positiveCnt = 0;
    int negativeCnt = 0;

    // Подсчитываем колличество положительных и отрицательных значений в исходном массиве
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
            positiveCnt++;
        else if (arr[i] < 0)
            negativeCnt++;
    }

    int* resultArr; // Указатель на созданный динамический массив

    if (positiveCnt < negativeCnt)
    // Создаем новый динамический массив для отрицательных чисел
    {
        resultArr = new int[negativeCnt];
        int currentindex = 0;

        // Переписываем отрицательные значения исходного массива в новый массив
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] < 0)
            {
                resultArr[currentindex] = arr[i];
                currentindex++;
            }
        }
    }
    else
    // Создаем новый динамический массив для положительных значений
    {
        resultArr = new int[positiveCnt];
        int currentindex = 0;

        // Переписываем положительные значения исходного массива в новый массив
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] > 0)
            {
                resultArr[currentindex] = arr[i];
                currentindex++;
            }
        }
    }
    // Выводим значения нового массива
    for (int i = 0; i < (positiveCnt < negativeCnt ? negativeCnt : positiveCnt); ++i)
    {
        cout << resultArr[i] << " ";
    }
    // Освобождаем выделенную память для динамического массива
    delete[] resultArr;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int A[5], n = 0, m = 0, f = -1, d = -1, k;

    cout << "" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
        if (A[i] > 0)
        {
            n++;
        }
        else if (A[i] < 0)
        {
            m++;
        }
    }

    if (m > n)
        k = m;
    else
        k = n;

    int* B = new int[k];

    if (m > n)
    {
        for (int j = 0; j < m; j++)
        {
            while (f < 5 && f < k - 1)
            {
                f++;
                if (A[f] < 0)
                {
                    B[j] = A[f];
                    break;
                }
            }
        }
    }
    if (m < n)
    {
        for (int j = 0; j < n; j++)
        {
            while (d < 5 && d < k - 1)
            {
                d++;
                if (A[d] > 0)
                {
                    B[j] = A[d];
                    break;
                }
            }
        }
    }

    cout << "";
    for (int i = 0; i < k; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    delete[] B;

    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #8
/ #1
#include <iostream>
using namespace std;

int main()
{
    string s = "jtuyashdygdhasiudaisdiuadniuandiaasdmamsdioamdoimdioaiodumnioadsnmijdnmskjanmdkmdsadpodkmdmjasdnmija";
    int search=0;
    for (int i=0;i<100;i++){
        if (s[i]=='a')
        {
            search++;
        }
    }
    cout << search;
    return 0;
}

/// #2
#include <iostream>
#include <string>


int main()
{
    char symb;
    int maxx = 0;
    int count = 1;
    std::string str = "helloworld";
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > maxx)
        {
            maxx = count;
            symb = str[i];
            count = 1;
        }
    }
    std::cout << symb << std::endl;
    return 0;
}


///// #3
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s[10];
    int maxx=0,min=99999999,itermax=0,itermin=0;
    for (int i=0;i<10;i++)
    {
        cin >> s[i];
        if (s[i].size() < min)
        {
            itermin=i;
            min=s[i].size();
        }
        if (s[i].size() > maxx)
        {
            itermax=i;
            maxx=s[i].size();
        }
    }
    cout << s[itermin] << " " << s[itermax] << " " << s[itermin] << s[itermax];
    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #9
/ #1

#include <iostream>

// Функция для проверки на простое число
bool isPrime (int number)
{
    // Проверка на простоту
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Вывод простых чисел в интервале от 1 до 100
    for (int number = 1; number <= 100; number++)
    {
        if (isPrime(number))
        {
            std::cout << number <<" ";
        }
    }
    return 0;
}

/ #2

#include <iostream>
#include <string>

int countVowels (const std::string&word)
{
    int count = 0;

    for (char c : word)
    {
        // Приводим символ к нижнему регистру
        char lowercaseChar = tolower(c);
        // Проверка на гласную букву
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string word;
    std::cout << "";
    std::getline(std::cin, word);

    int vowelsCount = countVowels(word);
    std::cout << vowelsCount << std::endl;

    return 0;
}

/// #3

#include <iostream>

int calculateLength(const char* str)
{
    // Возвращаем 0
    if (*str == '\0')
    {
        return 0;
    }

    // прибавляем 1 и переходим к следующему символу
    return 1 + calculateLength(str + 1);
}

int main()
{
    const char* str = "Hello, World!";
    int length = calculateLength(str);
    std::cout << length << std::endl;

    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #10
/ #1
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

struct Student {
    std::string firstName;
    std::string lastName;
    std::string middleName;
    int age;
    std::string residence;
};

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    Student students[] = {
            {"Dmitriy", "Davydenko", "Dmitrievich", 18, "Moscow"},
            {"Nikita", "Efimov", "Alekseevich", 19, "Saint Petersburg"},
            {"Stanislav", "Abramov", "Igorevich", 17, "Yekaterinburg"},
            {"Roman", "Tubol", "Sergeevich", 18, "Kazan"},
            {"Artem", "Aleksashin", "Aleksandrovich", 18, "Nizhny Novgorod"},
            {"Zakhar", "Narizhny", "Denisovich", 19, "Samara"},
            {"Artem", "Popov", "Evgenyevich", 18, "Omsk"},
            {"Denis", "Nedelyaev", "Mikhailovich", 19, "Chelyabinsk"},
            {"Mikhail", "Khanin", "Aleksandrovich", 17, "Ufa"},
            {"Timofey", "Vlasov", "Sergeevich", 18, "Perm"}
    };

    int numStudents = sizeof(students) / sizeof(Student);

    for (int i = 0; i < numStudents; i++)
    {
        // Проверяем, начинается ли фамилия студента с буквы 'A'
        if (students[i].lastName[0] == 'A')
        {
            // Выводим все данные о студенте
            std::cout << "ФИО: " << students[i].lastName << " " << students[i].firstName << " " << students[i].middleName << std::endl;
            std::cout << "Возраст: " << students[i].age << std::endl;
            std::cout << "Место проживания: " << students[i].residence << std::endl;
        }
    }

    return 0;
}

/ #2
#include <iostream>
#include <locale.h>
#include <windows.h>


union Temperature {
    float celsius;
    float kelvin;
    float fahrenheit;
};

void ConvertTemperature(Temperature& temp, char fromFormat, char toFormat)
{
    if (fromFormat == 'C' && toFormat == 'K')
    {
        temp.kelvin = temp.celsius + 273.15;
    }
    else if (fromFormat == 'C' && toFormat == 'F')
    {
        temp.fahrenheit = (temp.celsius * 9/5) + 32;
    }
    else if (fromFormat == 'K' && toFormat == 'C')
    {
        temp.celsius = temp.kelvin - 273.15;
    }
    else if (fromFormat == 'K' && toFormat == 'F')
    {
        temp.fahrenheit = (temp.kelvin - 273.15) * 9/5 + 32;
    }
    else if (fromFormat == 'F' && toFormat == 'C')
    {
        temp.celsius = (temp.fahrenheit - 32) * 5/9;
    }
    else if (fromFormat == 'F' && toFormat == 'K')
    {
        temp.kelvin = (temp.fahrenheit - 32) * 5/9 + 273.15;
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    Temperature temp;

    // Ввод температуры в градусах Цельсия
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> temp.celsius;

    ConvertTemperature(temp, 'C', 'K');
    std::cout << "Температура в Кельвинах: " << temp.kelvin << std::endl;

    ConvertTemperature(temp, 'C', 'F');
    std::cout << "Температура в Фаренгейтах: " << temp.fahrenheit << std::endl;

    return 0;
}

/ #3
#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main()
{
    double angle[6] = {0, 15, 30, 45, 60, 90};
    for (int i = 0; i < 5; i++)
        cout << "sin " << angle[i] << " = " << sin(angle[i] * PI / 180) << endl;
    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #11
/ #1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {5, 2, 9, 1, 3};
    sort(vec.begin(), vec.end());
    for (int i : vec)
    {
        cout << i << " ";
    }
    return 0;
}

/ #2
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <list>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    list<int> numbers = {10, -5, 7, -13, -2, 20, -25};
    cout << "Отрицательные элементы: ";

    for (int num : numbers)
    {
        if (num < 0)
        {
            cout << num << " ";
        }
    }
    return 0;
}

/ #3
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
void removeElement(queue<T>& q, int index)
{
    if (index < 0 || index >= q.size()) {
        cout << "Ошибка: указанный индекс выходит за границы очереди" << endl;
        return;
    }

    vector<T> temp; // Временный вектор для хранения элементов до указанного индекса

    // Извлекаем элементы из очереди до указанного индекса и добавляем во временный вектор
    for (int i = 0; i < index; i++) {
        temp.push_back(q.front());
        q.pop();
    }

    q.pop(); // Удаляем элемент из очереди по указанному индексу

    // Добавляем в очередь элементы, следующие после удаленного элемента (из временного вектора)
    while (!temp.empty()) {
        q.push(temp.front());
        temp.erase(temp.begin());
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int index;
    cout << "Введите индекс элемента, который нужно удалить: ";
    cin >> index;

    removeElement(q, index);

    // Выводим элементы очереди после удаления
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}
/---------------------------------------------------------------------------------------------------------------------
/ Лабораторная #12
/ #1

/ Решение через vector:
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void partialSort(std::vector<T>& arr)
{
    if (arr.size() <= 1) return;

    T pivot = arr[0];
    int i = 1;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[0], arr[i-1]);
}

int main()
{
    vector<int> arr = {5, 3, 8, 2, 1, 6, 4, 7};

    partialSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/ Решение через void:
#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

template<typename T>
void partialSort(T arr[], int size)
{
    T pivot = arr[0]; // первый элемент массива

    // Используем алгоритм "разделение и властвование"
    // Перебираем массив и переставляем элементы так, чтобы все числа, меньше первого, предшествовали ему,
    // а все числа, больше первого, следовали за ним
    int i = 0;
    int j = size;

    while (i < j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Отдельно сортируем элементы, которые меньше первого
    if (j > 0)
        partialSort(arr, j + 1);

    // Отдельно сортируем элементы, которые больше первого
    if (i < size)
        partialSort(arr + i, size - i);
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int arr[] = {5, 3, 8, 2, 1, 6, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    partialSort(arr, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << std::endl;

    return 0;
}

/ #2
#include <iostream>
#include <cmath>
#define PI 3.14159265
#include <locale.h>
#include <windows.h>
using namespace std;

// Функция для вычисления площади треугольника по его сторонам (используется формула Герона)
float findArea(float a, float b, float c)
{
    float p = (a + b + c) / 2; // Полупериметр треугольника
    float area = sqrt(p * (p - a) * (p - b) * (p - c)); // Формула Герона для площади треугольника
    return area;
}

// Функция для вычисления площади круга по радиусу
float findArea(float radius)
{
    float area = PI * radius * radius; // Формула для площади круга
    return area;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    // Площадь треугольника
    float side1, side2, side3;
    cout << "Введите длины сторон треугольника: ";
    cin >> side1 >> side2 >> side3;

    float triangleArea = findArea(side1, side2, side3);
    cout << "Площадь треугольника: " << triangleArea << std::endl;

    // Площадь круга
    float radius;
    cout << "Введите радиус круга: ";
    cin >> radius;

    float circleArea = findArea(radius);
    cout << "Площадь круга: " << circleArea << std::endl;

    return 0;
}

/ Решение через void
#include <iostream>
#include <cmath>
#define PI 3.14159265
#include <locale.h>
#include <windows.h>
using namespace std;

// Функция для вычисления площади треугольника
void calculateArea(double a, double b, double c)
{
    // Проверка на возможность существования треугольника
    if (a + b > c && a + c > b && b + c > a)
    {
        double s = (a + b + c) / 2; // Полупериметр треугольника
        double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона для вычисления площади

        cout << "Площадь треугольника: " << area << endl;
    }
    else
    {
        cout << "Такого треугольника не существует" << endl;
    }
}

// Функция для вычисления площади круга
void calculateArea(double radius)
{
    double area = PI * pow(radius, 2);

    cout << "Площадь круга: " << area << endl;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a, b, c;
    double radius;

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;
    calculateArea(a, b, c);

    cout << "Введите радиус круга: ";
    cin >> radius;
    calculateArea(radius);

    return 0;
}

/ #3
#include <iostream>
#include <vector>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    try
    {
        // Проверяем наличие отрицательных значений в массиве
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                throw "Обнаружено отрицательное значение!";
            }
        }

        // Если отрицательных значений нет, выполняем дальнейшие действия над массивом
        cout << "Обработка данных..." << endl;
        // Реализация обработки данных

        cout << "Данные успешно обработаны." << endl;
    } catch (const char* exception) {
        cerr << "Ошибка: " << exception << endl;
    }

    return 0;
}
/---------------------------------------------------------------------------------------------------------------------