#!/bin/bash

make

printf "%s\n\n" "------------------------------------------Running test #1-------------------------------------------" > arrayPassingTimes.txt

./arrayPassing >> arrayPassingTimes.txt

printf "\n\n" >> arrayPassingTimes.txt

printf "%s\n\n" "------------------------------------------Running test #2-------------------------------------------" >> arrayPassingTimes.txt

./arrayPassing >> arrayPassingTimes.txt

printf "\n\n" >> arrayPassingTimes.txt

printf "%s\n\n" "------------------------------------------Running test #3-------------------------------------------" >> arrayPassingTimes.txt

./arrayPassing >> arrayPassingTimes.txt

printf "\n\n" >> arrayPassingTimes.txt

printf "%s\n\n" "------------------------------------------Running test #4-------------------------------------------" >> arrayPassingTimes.txt

./arrayPassing >> arrayPassingTimes.txt

printf "\n\n" >> arrayPassingTimes.txt

printf "%s\n\n" "------------------------------------------Running test #5-------------------------------------------" >> arrayPassingTimes.txt

./arrayPassing >> arrayPassingTimes.txt