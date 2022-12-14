#include <stdio.h>
int main() {
    int n1,c, n2,t, max;
  scanf("%d",&t);
  while(t--)
  {c=0;
    scanf("%d",&n2);
    for(n1=1;n1<=n2;n1++)
    {
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            c+=max;
            break;
        }
        ++max;
    }
    }
    printf("%d\n",c);

}
}
