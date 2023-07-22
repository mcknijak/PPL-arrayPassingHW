# Passing Arrays - Homework #4

## Principles of Programming Languages - CU Denver - Summer 2023

#### By: Jake McKnight

A bash script has been included to run the program 5 times and output the results of each trial to a file called
`arrayPassingTimes.txt`.

*Please note: the file will be over-written with new data each time the script executes.*

## How-to Run

A version of the file that ran on my Linux Ubuntu machine is included as `arrayPassingTimesExample.txt`.

Exact run times may vary from machine to machine.

1. Clone repo into a working directory

```bash
git clone https://github.com/mcknijak/PPL-arrayPassingHW.git
```

2. Use `chmod` to allow run permissions on the `arrayPassingScript.sh` file.

```bash
chmod a+x arrayPassingScript.sh
```

3. Run the Script

```bash
./arrayPassingScript.sh
```

4. Open the newly created [`arrayPassingTimes.txt`](./arrayPassingTimes.txt) file to view the results.


## Discussion

The program uses vectors instead of the vanilla array since I read that vectors would allow for the **HUGE** values we 
are looking to test with a bit easier and it was less likely to run out of memory. I also use two data types to show 
that the results hold with data types of different sizes - 
a char being 1 byte and an int being 4 bytes (may vary a bit depending on the system). The results demonstrate the pass-by-value
approach takes several orders of magnitude longer to be passed into the function since the complete copy must be made.