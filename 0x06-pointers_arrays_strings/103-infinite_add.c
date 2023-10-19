#include "main.h"
#include "main.h"

/**
* infinite_add - Adds two numbers.
* @n1: The first number as a string.
* @n2: The second number as a string.
* @r: The buffer to store the result.
* @size_r: The size of the buffer.
*
* Return: A pointer to the result or 0 if the result cannot be stored in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry = 0;
int i, j, k;

for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;

if (size_r <= len1 || size_r <= len2)
return (0);

i = len1 - 1;
j = len2 - 1;
r[size_r] = '\0';
k = size_r - 1;

while (i >= 0 || j >= 0 || carry)
{
int num1 = (i >= 0) ? n1[i--] - '0' : 0;
int num2 = (j >= 0) ? n2[j--] - '0' : 0;
int sum = num1 + num2 + carry;
r[k--] = (sum % 10) + '0';
carry = sum / 10;
}

if (k < 0)
return (0);

return (r + k + 1);
}

