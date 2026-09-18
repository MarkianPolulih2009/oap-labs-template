# Лабораторні роботи OAP

Лабораторні роботи з дисципліни **«Програмування (ОАП)»**.

| Поле | Значення |
|---|---|
| Студент | Полуліх Маркіян |
| Група | КІ-21 |
| Варіант | 16 |
| Семестр | 3 (2026–2027) |
| Викладач | Левус Я. |

## Структура репозиторію

```text
oap-labs/
├── README.md
├── .gitignore
├── .clang-format
├── .editorconfig
├── lab01/
│   ├── main.cpp
│   ├── report.md
│   ├── lab01.slnx
│   ├── lab01.vcxproj
│   ├── lab01.vcxproj.filters
│   ├── lab01.vcxproj.user
│   └── screenshots/
├── lab02/
│   ├── task1.cpp
│   ├── task2.cpp
│   ├── division-demo.cpp
│   ├── report.md
│   └── screenshots/
├── lab03/
│   ├── task1.cpp
│   ├── task2.cpp
│   ├── task3.cpp
│   └── report.md
├── lab04/
│   ├── task1.cpp
│   ├── task2.cpp
│   ├── task3.cpp
│   └── report.md
└── .github/
```

## Лабораторна робота 1

**Тема:** налаштування середовища розробки.

- [Програма `main.cpp`](lab01/main.cpp)
- [Звіт `report.md`](lab01/report.md)
- [Скріншоти запуску та помилок](lab01/screenshots/)

У звіті наведено версії Visual Studio, MSVC і g++, перевірку стандартів
C++98, C++14 і C++17, результати запуску та повідомлення компіляторів.

## Лабораторна робота 2

**Тема:** перший проєкт, пошук помилок і цілочисельна арифметика.

- [Завдання 1 — виправлення помилок](lab02/task1.cpp)
- [Завдання 2 — варіант 16](lab02/task2.cpp)
- [Дослід ділення на нуль](lab02/division-demo.cpp)
- [Звіт `report.md`](lab02/report.md)
- [Скріншоти перевірки](lab02/screenshots/)

**Варіант 16:** за заданою кількістю днів визначити кількість повних
тижнів і кількість днів, що залишилися.

```text
100 -> 14 weeks 2 days
```

## Лабораторна робота 3

**Тема:** лінійні програми: формули і форматований вивід.

- [Завдання 1 — трикутник](lab03/task1.cpp)
- [Завдання 2 — варіант 16](lab03/task2.cpp)
- [Завдання 3 — практична задача](lab03/task3.cpp)
- [Звіт `report.md`](lab03/report.md)

**Кілька завдань в одній роботі:** кожна програма містить окремий `main()`
і збирається окремо.

## Лабораторна робота 4

**Тема:** розгалуження: `if/else` і `switch`.

- [Завдання 1 — квадратне рівняння](lab04/task1.cpp)
- [Завдання 2 — варіант 16](lab04/task2.cpp)
- [Завдання 3 — оренда авто](lab04/task3.cpp)
- [Звіт `report.md`](lab04/report.md)

**Кілька завдань в одній роботі:** кожна програма містить окремий `main()`
і збирається окремо.

## Збірка та запуск

### Лабораторна робота 1

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab01\main.cpp -o lab01.exe
.\lab01.exe
```

### Лабораторна робота 2

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab02\task1.cpp -o task1.exe
.\task1.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab02\task2.cpp -o task2.exe
.\task2.exe
```

### Лабораторна робота 3

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab03\task1.cpp -o task1.exe
.\task1.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab03\task2.cpp -o task2.exe
.\task2.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab03\task3.cpp -o task3.exe
.\task3.exe
```

### Лабораторна робота 4

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab04\task1.cpp -o task1.exe
.\task1.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab04\task2.cpp -o task2.exe
.\task2.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab04\task3.cpp -o task3.exe
.\task3.exe
```

Усі програми перевіряються з прапорами `-Wall`, `-Wextra` і `-pedantic`.
Файли `.exe`, каталоги `x64/`, `Debug/`, `Release/` та `.vs/`
не додаються до Git.

## Репозиторій

[github.com/MarkianPolulih2009/oap-labs](https://github.com/MarkianPolulih2009/oap-labs)
