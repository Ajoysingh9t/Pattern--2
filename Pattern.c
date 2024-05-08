#include <stdio.h>

int main()

{

int i, j, k, r=0;

for (i = 1; i <= 7; i++)

{

if (i <= 4)

{

r++;

}

else

r--;

k = 4;

for (j = 1; j <= 7; j++)

{

if (j >= r && j <= 8 - r)

{

printf("%d ", k);

}

else

{

if (j < 4)

{

printf("%d ", k);

k--;

}

else{

k++;

printf("%d ", k);
}
}
}

printf("\n");

}

}
