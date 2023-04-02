`|` (**pipe**): **connects the Standard Output of one process to the Standard Input of another process**

A series of small programs connected to each other through pipes is called a pipeline 

`fopen()` function allows you to **create new data streams** other than the 3 given by default (stdin, stdout & stderr). Each data stream is a pointer to a file. Syntax:

```c
/* creating a data stream to read from a file called 'input.txt'*/
FILE *in_file = fopen("input.txt", "r");

/* creating a data stream to write to a file called 'output.txt'*/
FILE *out_file = fopen("output.txt", "w");
```

fopen() takes 2 paameters:
```c
/**
 * fopen takes in only 3 types of modes: 
 * 'w' (writing to a file)
 * 'r' (reading from a file) &
 *  'a' (appending data to the end of a file)
 */
fopen("fileName", "mode");
```
To write & read from the new created data stream use fprinf() & fscanf() just like you would with other files:
```c
fprintf(out_file, "The temperature today is around %dC", temp);

fscanf(in_file, "%d\n", yourAge);
```
It's good praactice to always close a data stream once you're done with it. Do so with `fclose()`
```c
/* closing in_file input data stream */
fclose(in_file);

/* closing out_file output data stream */
fclose(out_file);
```