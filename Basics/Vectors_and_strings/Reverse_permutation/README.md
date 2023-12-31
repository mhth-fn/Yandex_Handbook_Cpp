## Обратная перестановка ##

На мероприятие приглашены $n$ гостей. Им предлагают занять места с номерами от $1$ до $n$ в зале. Гости занимают эти места в произвольном порядке. Известно, на каком месте сел очередной гость.

Выпишите для каждого очередного места номер гостя, который на него сел.
#### Формат ввода ####
Дано число $n$, а затем $n$ различных чисел $a_{1},a_{2},...,a_{n}$ от 1 до $n$. Число $a_{k}$ — это номер места, на которое сел $k$-й гость.

Число $n$ не превосходит $20000$.
#### Формат вывода ####
Выведите $n$ чисел $b_{1},b_{2},...,b_{n}$ от $1$ до $n$. Число $b_{k}$ должно обозначать номер гостя, который сел на $k$-e место.
#### Пример 1 ####
##### Ввод #####

    5
    1 2 3 5 4

##### Вывод #####

    1 2 3 5 4 

#### Пример 2 ####
##### Ввод #####

    11
    11 6 8 2 10 9 4 7 3 1 5

##### Вывод #####

    10 4 9 7 11 2 8 3 6 5 1 

#### Примечание ####
Если говорить математическим языком, то вам дана [перестановка](https://en.wikipedia.org/wiki/Permutation) и для неё требуется вычислить обратную перестановку.
#### Ограничение памяти ####
64.0 Мб
#### Ограничение времени ####
1 с
