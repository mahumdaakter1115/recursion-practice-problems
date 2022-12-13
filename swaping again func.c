#include <stdio.h>

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;

    return ;
}

int main()
{

  int n;

  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);

  }

  int q;
  scanf("%d",&q);

  while(q--) {
    int x,y;
    scanf("%d%d",&x,&y);

    int idX1=x-1;

    int idX2=y-1;

    swap(&arr[idX1], &arr[idX2]);

  }


    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);

  }

    return 0;


}
