# ЛР02 — Перший проєкт і репозиторій

Лабораторна робота з дисципліни **«Основи алгоритмізації та програмування»**.

| Поле | Значення |
|---|---|
| Студент | Полуліх Маркіян |
| Група | КІ-21 |
| Варіант | 16 |
| Дата | 11 вересня 2026 року |

## Вміст

- [`lab02/task1.cpp`](lab02/task1.cpp) — виправлення помилок у навчальній програмі;
- [`lab02/division-demo.cpp`](lab02/division-demo.cpp) — окремий дослід ділення на нуль;
- [`lab02/task2.cpp`](lab02/task2.cpp) — програма варіанта 16;
- [`lab02/screenshots/`](lab02/screenshots/) — скріншоти перевірки програм;
- [`lab02/report.md`](lab02/report.md) — звіт із поясненнями та тестами.
- [`lab01/main.cpp`](lab01/main.cpp) — програма-візитівка для ЛР1;
- [`lab01/report.md`](lab01/report.md) — звіт до ЛР1.

## Завдання варіанта 16

За заданою кількістю днів програма обчислює кількість повних тижнів і
кількість днів, що залишилися:

```text
100 -> 14 weeks 2 days
```

## Збірка

Для GCC:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic lab02/task1.cpp -o task1
g++ -std=c++17 -Wall -Wextra -pedantic lab02/task2.cpp -o task2
```

Запуск:

```bash
./task2
```

## Репозиторій

[github.com/MarkianPolulih2009/lab02](https://github.com/MarkianPolulih2009/lab02)
