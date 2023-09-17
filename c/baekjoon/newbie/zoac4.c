#include <stdio.h>

int main(void)
{
	int h,w,n,m;
	scanf("%d %d %d %d",&h,&w,&n,&m);

	int x = h / (n + 1);
	int y = w / (m + 1);
	if(h % (n + 1) != 0)
		x++;
	if(w % (m + 1) != 0)
		y++;
	printf("%d\n",x * y);
	return (0);
}
