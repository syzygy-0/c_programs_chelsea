/* Computes value of a word in Scrabble */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char c;
  int value = 0;

  printf("Enter a word: ");

  while ((c = getchar()) != '\n') {
      switch (c) {
        case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'L':
        case 'l': case 'N': case 'n': case 'O': case 'o': case 'R': case 'r':
        case 'S': case 's': case 'T': case 't': case 'U': case 'u':
          if (c == 'a' || c == 'e' || c == 'i' || c == 'l' || c == 'n' ||
              c == 'o' || c == 'r' || c =='s' || c == 't' || c == 'u') {
            toupper(c);
          }
          value += 1;
          break;
        case 'D': case 'd': case 'G': case 'g':
          if (c == 'd' || c == 'g') {
            toupper(c);
          }
          value += 2;
          break;
        case 'B': case 'b': case 'C': case 'c': case 'M': case 'm': case 'P':
        case 'p':
          if (c == 'b' || c == 'c' || c == 'm' || c == 'p') {
            toupper(c);
          }
          value += 3;
          break;
        case 'F': case 'f': case 'H': case 'h': case 'V': case 'v': case 'W':
        case 'w': case 'Y': case 'y':
          if (c == 'f' || c == 'h' || c == 'v' || c == 'w' || c == 'y') {
            toupper(c);
          }
          value += 4;
          break;
        case 'K': case 'k':
          if (c == 'k') {
            toupper(c);
          }
          value += 5;
          break;
        case 'J': case 'j': case 'X': case 'x':
          if (c =='j' || c == 'x') {
            toupper(c);
          }
          value += 8;
          break;
        case 'Q': case 'q': case 'Z': case 'z':
          if (c == 'q' || c == 'z') {
            toupper(c);
          }
          value += 10;
          break;
      }
  }

  printf("Scrabble value: %d\n", value);

  return 0;
}
