#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

int divs(int n)
{
	uint32_t t = sqrt(n), z = 1, c = 2;
	while (z++ <= t)
		if (!(n % z))
			c += (c / z != z) + 1;
	return c;
}

int main()
{
	uint32_t tri = 0, i = 1, start, end;
	uint16_t tmp, max;
	start = clock();
	while (1)
		if (!((tri += i++) % 2))
			if (max < (tmp = divs(tri)))
        {
          printf("%u: %u\n", tri, tmp);
          if (tmp > 500) break;
          else max = tmp;
        }
	end = clock();
	printf("result is %u\nneeded %ims", tri, (end - start) / 1000 );
}
