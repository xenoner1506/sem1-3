for idx in 1 2 5 5 5 0 3 4
do
    echo $idx
done

g++ 2026/2-sem-lfi/sem04/b02-502-0.cpp
./a.out
g++ 2026/2-sem-lfi/sem04/b02-502-1.cpp
./a.out
g++ 2026/2-sem-lfi/sem04/b02-502-2.cpp
./a.out
g++ 2026/2-sem-lfi/sem04/b02-502-3.cpp
./a.out

for idx in 0 1 2 3
do
    g++ 2026/2-sem-lfi/sem04/b02-502-$idx.cpp -o main.exe
    ./main.exe
done