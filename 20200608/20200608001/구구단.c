#include <stdio.h>


int array[9][9]; // 전역변수 선언

int save(int i, int j); // 구구단 저장함수 별도 구현

int main()
{
 int i, j;

 save(i, j); 

 for(i=0;i<9;i++){
  for(j=0;j<9;j++){
   printf("%d  ", array[i][j]); // 이차원 배열에 저장된값 호출
  }
  printf("\n");
 }
 return 0;
}

int save(int i, int j)
{
 for(i=0;i<9;i++){
  for(j=0;j<9;j++){
   array[i][j]=(i+1)*(j+1);
  }
 }
 return 0;
}

# include <stdio.h>
int main(void)
{
    int arr[9];
    int num;
    printf("%d");
    

}

