#include <stdio.h>
#include <string.h>

/*
백준 이것저것
*/

void num11720() {
	int number, i, result = 0;
	char number2[100];
	scanf("%d", &number);
	scanf("%s", number2);

	for (i = 0; i < number; i++)
		result += (number2[i] - '0');

	printf("%d\n", result);

	return 0;
 }

void num2444() {
	/*
	#include <iostream>
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
   int x; 
   cin >> x; 
 
   for (int i = 0; i < x; ++i) { 
      for (int k = x - i - 1; k > 0; --k) { 
         cout << " "; 
      } 
      for (int j = x+i*2; j >= x; --j) { 
         cout << "*"; 
      } 
      cout << endl; 
   } 
   for (int i = 1; i < x; ++i) { 
      for (int k = x - i ; k < x; ++k) { 
         cout << " "; 
      } 
      for (int j = -x + i*2 +1; j < x; ++j) { 
         cout << "*"; 
      } 
      cout << endl; 
   } 
 
   return 0; 
}*/
}

// 상수
void num2908() {
        int x, y, x2, y2;
        int f[2], m[2], l[2], i;
        scanf("%d %d", &x, &y);
        for (i = 0; i < 2; i++) {
            f[0] = x / 100;
            m[0] = (x % 100) / 10;
            l[0] = (x % 100) % 10;
            x2 = ((l[0] * 100) + (m[0] * 10) + f[0]);
            f[1] = y / 100;
            m[1] = (y % 100) / 10;
            l[1] = (y % 100) % 10;
            y2 = ((l[1] * 100) + (m[1] * 10) + f[1]);
        }
        if (x2 > y2) {
            printf("%d", x2);
        }
        else {
            printf("%d", y2);
        }
    }
}
