#include<stdio.h>
#include<math.h>
int main()
{   
    float baseprice, gst, answer;
	printf(">> Price of Product with GST @ 12% <<\n");
	printf(" Enter Base Price: ");
	scanf("%f", &baseprice);
	gst = baseprice * 12/100;
	answer = baseprice + gst;
	printf("Base Amount is %f\n", baseprice);
	printf("GST is %f\n", gst);
	printf("The Answer is %f\n", answer);
	return 0;
}
