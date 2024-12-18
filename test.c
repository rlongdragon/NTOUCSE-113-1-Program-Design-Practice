#include<stdio.h>
void output1(int a[][3],int r) //
{
     int i,j;
     for(j = 0; j < r; ++j) {
         for(i = 0; i < 3; ++i) {
             printf("%d%c",a[j][i],(i<2)?',':'\n');
         }
     }
     return;
}

void output2(int a[][3],int r)
{
     int i,j;
     for(j = 0; j < r; ++j) {
         for(i = 0; i < 3; ++i) {
             printf("%d%c",a[i][j],(i<2)?',':'\n');
         }
     }
     return;
}

int main()
{
     int data[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

     output1(data,3);
     output2(data,3);

     return 0;
}