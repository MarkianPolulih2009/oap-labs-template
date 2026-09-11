# OAP Labs

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
│   └── screenshots/
└── lab02/
    ├── task1.cpp
    ├── task2.cpp
    ├── division-demo.cpp
    ├── report.md
    └── screenshots/
```

## Лабораторна робота 1

**Тема:** налаштування середовища розробки.

- [Програма `main.cpp`](lab01/main.cpp)
- [Звіт `report.md`](lab01/report.md)
- [Скріншоти запуску та помилок](lab01/screenshots/)

У звіті наведено версії Visual Studio, MSVC і g++, перевірку стандартів
C++98/C++14/C++17, результати запуску та повідомлення компіляторів.

## Лабораторна робота 2

**Тема:** перший проєкт, пошук помилок і цілочисельна арифметика.

- [Завдання 1 — виправлення помилок](lab02/task1.cpp)
- [Завдання 2 — варіант 16](lab02/task2.cpp)
- [Дослід ділення на нуль](lab02/division-demo.cpp)
- [Звіт `report.md`](lab02/report.md)
- [Скріншоти перевірки](lab02/screenshots/)

Варіант 16: за кількістю днів визначити повні тижні та залишок днів.

```text
100 -> 14 weeks 2 days
```

## Збірка і запуск

Для ЛР1:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab01\main.cpp -o lab01.exe
.\lab01.exe
```

Для ЛР2:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic lab02\task1.cpp -o task1.exe
.\task1.exe

g++ -std=c++17 -Wall -Wextra -pedantic lab02\task2.cpp -o task2.exe
.\task2.exe
```

Усі програми перевіряються без попереджень за допомогою `-Wall -Wextra -pedantic`.
Файли `.exe`, `x64/`, `Debug/`, `Release/` та `.vs/` не додаються до Git.

## Репозиторій

[github.com/MarkianPolulih2009/lab02](https://github.com/MarkianPolulih2009/lab02)
