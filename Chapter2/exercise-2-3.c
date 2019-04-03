  #include <stdio.h>

  int htoi(char m[]);
  int lower(int c);
  int hex_a_f_to_int(int c);

 int main()
 {
      int n;
      char s[] = "0xxABC\0";
      n = htoi(s);
      printf("%x", n);

      return 0;
 }

int htoi(char s[])
{
      int i = 0;
      int answer = 0;
      int valid = 1;
      int hex_a_f;

      if (s[i] == '0') {
          ++i;
          if (s[i] == 'x' || s[i] == 'X') {
              ++i;
          } else
               valid = 0;
      } else
           valid = 0;

      while (valid && s[i] != '\0') {

          if (s[i] >= '0' && s[i] <= '9') {
              answer = answer + (s[i] - '0');
          } else {
              s[i] = lower(s[i]);
              hex_a_f = hex_a_f_to_int(s[i]);
              if (hex_a_f == 0) {
                  valid = 0;
              } else {
                   answer = answer + hex_a_f;
              }

          }
          ++i;
      }
      if (!valid) {
            printf("The string isn't valid hex numbern");
            answer = 0;
      }
      return answer;
  }

  int lower(int c)
  {
      if (c >= 'A' && c <='Z')
          return c +'a'-'A';
      else
          return c;
  }

  int hex_a_f_to_int(int c)
  {
      char hex_a_f[] = "abcdef";
      int i;
      int answer = 0;

      for (i = 0; answer == 0 && hex_a_f[i] != '\0'; i++) {
          if (hex_a_f[i] == c) {
              answer = 10 + i;
          }
      }

      return answer;
  }
