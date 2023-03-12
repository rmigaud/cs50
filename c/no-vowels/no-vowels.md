## Motivation

If you've been on the internet, you might have seen "leetspeak" (or "l33tsp36k" for our purposes), which involves the subsitituion of symbols for alphanumerical characters, where those symbols somewhat resemble their alphanumerical counterparts. In this lab, you'll write a program to replace certain vowels with digits!

Up until now you've frequently written programs for which you've been provided distribution code. You'll notiice when downloading the "distro" for this problem, you start with nothing more than a couple of commonly used libraries and an empty `main` function. In this problem, you will convert a word, which you will input at the command line, to a corresponding word with numbers replacing vowels.

- No note that the `main` function in the distribution code uses `argc` and `argv`. Be sure to use these!
- Be sure to check for the correct number of command-line arguments before doing anything else in your `main` function.

## Example output

```
$ ./no-vowels hello
h3ll0
```

```
$ ./no-vowels pseudocode
ps3ud0c0d3
```

## Character mapping

```
a=4
e=3
i=1
o=0
```
