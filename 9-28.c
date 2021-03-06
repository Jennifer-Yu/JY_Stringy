//Jennifer Yu
//9-28-16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leng(char *a) {
  int x = 0;
  while (a[x] != 0) {
    x++;
  }
  return x;
}

char * cop(char *dest, char *source) {
  int x = 0; //index
  while (source[x] != 0) {
    dest[x] = source[x];
    x++;
  }
  dest[x] == 0;
  return dest;
}

char * ncope(char *dest, char *source, int n) {
  int x = 0; //index
  while (n > 0) {
    dest[x] = source[x];
    n--;
    x++;
  }
  dest[x] == 0;
  return dest;
}

char * whiskers(char *dest, char *source) {
  int end = strlen(dest);
  int x = 0; //index
  while (source[x] != 0) {
    dest[end] = source[x];
    x++;
    end++;
  }
  dest[end] == 0;
  return dest;
}

char * nwhiskers(char *dest, char *source, int n) {
  int end = strlen(dest);
  int x = 0; //index
  while (n > 0) {
    dest[end] = source[x];
    x++;
    end++;
    n--;
  }
  dest[end] == 0;
  return dest;
}

int pear( char *s1, char *s2 ) {
  int x = 0;
  while (s1[x] != 0 && s2[x] != 0) {
    if (s1[x] > s2[x]) {
      return 1;
    }
    else if (s1[x] < s2[x]) {
      return -1;
    }
    else {
      x++;
    }
  }
  if (s1[x] != 0) {
    return 1;
  }
  else if (s2[x] != 0) {
    return -1;
  }
  return 0;
}

char * christmas( char *s, char c ) {
  int ctr = 0;
  int found = -1;
  while (ctr < leng(s)) {
    if (s[ctr] == c) {
      found = ctr;
      break;
    }
    ctr++;
  }
  if (found == -1) {
    return 0;
  }
  else {
    char * ret;
    int x = 0;
    while (s[found] != 0) {
      ret[x] = s[found];
      x++;
      found++;
    }
    ret[x] == 0;
    return ret;
  }
}

/**
   char * strawberry( char *s1, char *s2 ) {
       int ctr = 0;
           int found = -1;
	       char *ret = christmas(s1, s2[ctr]);
	           if (ret != 0) {
		           int x = 1;
			           while (x < strlen(s2)) {
				               if (s2[x] != ret[x]) {
					                       break;
							                   }
									               x++;
										               }
											               found == ctr;
												           }
													   }
**/

int main() {

  char wub[50] = "jenniferrulestheworld";
  char lub[30];

  printf("\nSTRLEN\n");
  printf("string: %s\n", wub);
  printf("my strlen: %d\n", leng(wub));
  printf("built-in strlen: %d\n", strlen(wub));

  printf("\nSTRCPY\n");
  printf("empty str: %s\n", lub);
  printf("to be copied: %s\n", wub);
  printf("my strcpy: %s\n", cop(lub, wub));
  printf("after my strcpy: %s\n", lub);
  printf("built-in strcpy: %s\n", strcpy(lub, wub));

  char pepper[50] = "ineedmoresleepplease";
  char pizza[30];

  printf("\nSTRNCPY\n");
  printf("empty str: %s\n", pizza);
  printf("to be copied (BUT set n = 14): %s\n", pepper);
  printf("my strncpy: %s\n", ncope(pizza, pepper, 14));
  printf("after my strncpy: %s\n", pizza);
  printf("built-in strncpy: %s\n", strncpy(pizza, pepper, 14));

  char pie[30] = "heyowassupbro";
  char crust[30] = "nvmidontlikeyou";
  printf("\nSTRCAT\n");
  printf("string 1: %s\n", pie);
  printf("string 2: %s\n", crust);
  printf("my strcat: %s\n", whiskers(pie, crust));
  printf("built-in strcat (repeats procedure): %s\n", strcat(pie, crust));
  printf("concatenated str: %s\n", pie);

  char tub[] = ", obviously dude";
  printf("\nSTRNCAT\n");
  printf("string 1: %s\n", wub);
  printf("string 2 (BUT set n = 11): %s\n", tub);
  printf("my strncat: %s\n", nwhiskers(wub, tub, 11));
  printf("built-in strncat (repeats procedure): %s\n", strncat(wub, tub, 11));
  printf("concatenated str: %s\n", wub);

  char wubba[] = "rules";
  char rubba[] = "abc";
  char zubba[] = "abc";
  char ubba[] = "abcd";

  printf("\nSTRCMP\n");
  printf("string 1: %s\n", wubba);
  printf("string 2: %s\n", rubba);
  printf("my strcmp: %d\n", pear(wubba, rubba));
  printf("built-in strcmp: %d\n", strcmp(wubba, rubba));
  printf("string 1: %s\n", rubba);
  printf("string 2: %s\n", wubba);
  printf("my strcmp: %d\n", pear(rubba, wubba));
  printf("built-in strcmp: %d\n", strcmp(rubba, wubba));
  printf("string 1: %s\n", rubba);
  printf("string 2: %s\n", zubba);
  printf("my strcmp: %d\n", pear(rubba, zubba));
  printf("built-in strcmp: %d\n", strcmp(rubba, zubba));
  printf("string 1: %s\n", ubba);
  printf("string 2: %s\n", zubba);
  printf("my strcmp: %d\n", pear(ubba, zubba));
  printf("built-in strcmp: %d\n", strcmp(ubba, zubba));

  char LOL = 'l';
  char nuh = 'o';
  printf("\nSTRCHR\n");
  printf("string: %s\n", wubba);
  printf("char: %c\n", LOL);
  printf("my strchr: %s\n", christmas(wubba, LOL));
  printf("built-in strchr: %s\n", strchr(wubba, LOL));
  printf("string: %s\n", wubba);
  printf("char: %c\n", nuh);
  printf("my strchr: %s\n", christmas(wubba, nuh));
  printf("built-in strchr: %s\n", strchr(wubba, nuh));



  printf("\n");
  return 0;

}
