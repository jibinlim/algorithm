#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    long long head = 1;
    long long tail = 10000000;
    long long mid;
    while(head <= tail)
    {
        mid = (head + tail) / 2;
        if(mid * mid > n)
            tail = mid - 1;
        else if(mid * mid < n)
            head = mid + 1;
        else
           	break;
    }
    if(head <= tail)
        answer = (mid + 1) * (mid + 1);
    else
        answer = -1;
    return answer;
}

int main(void)
{
	printf("%lld",solution(49000000000000));
	return (0);
}
