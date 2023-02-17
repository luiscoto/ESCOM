#!/bin/bash
gcc 'burbujaMejorado.c' -o 'burbujaMejorado'

./burbujaMejorado 100 <numeros10millones.txt >burbujaMejorado.txt
./burbujaMejorado 1000 <numeros10millones.txt >>burbujaMejorado.txt
./burbujaMejorado 5000 <numeros10millones.txt >>burbujaMejorado.txt
./burbujaMejorado 10000 <numeros10millones.txt >>burbujaMejorado.txt
./burbujaMejorado 50000 <numeros10millones.txt >>burbujaMejorado.txt
./burbujaMejorado 100000 <numeros10millones.txt >>burbujaMejorado.txt
