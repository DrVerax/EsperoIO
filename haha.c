#include <stdio.h>
int main()
{
int x=0, y=0 ,z=0;
for(int i=0; i<10; i++)
{
x++;
y=x+23;
z=y+123;
}
printf("%d %d %d", x, y, z);
return 0;
}
