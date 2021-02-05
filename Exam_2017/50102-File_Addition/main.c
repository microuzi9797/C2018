#include <stdio.h>

int main()
{
	char input1[32], input2[32], output[32];
	scanf("%s %s %s", input1, input2, output);
	FILE *fpinput1;
	FILE *fpinput2;
	FILE *fpoutput;
	fpinput1 = fopen(input1, "rb");
	fpinput2 = fopen(input2, "rb");
	fpoutput = fopen(output, "wb");
	fseek(fpinput1, 0, SEEK_END);
	fseek(fpinput2, 0, SEEK_END);
	long int size1 = ftell(fpinput1);
	long int size2 = ftell(fpinput2);
	if(size1 < size2)
	{
		long tmp = size1;
		size1 = size2;
		size2 = tmp;
		FILE *ptr;
		ptr = fpinput1;
		fpinput1 = fpinput2;
		fpinput2 = ptr;
	}
	int carry = 0,sum;
	for(int i = 0 ;i < size1;++i)
	{
		unsigned char c1, c2;
		fseek(fpinput1, size1 - i - 1, SEEK_SET);
		fread(&c1, sizeof(unsigned char), 1, fpinput1);
		if(i < size2)
		{
			fseek(fpinput2, size2 - i - 1, SEEK_SET);
			fread(&c2, sizeof(unsigned char), 1, fpinput2);
		}
		else
		{
			c2 = 0;
		}
		sum = carry + c1 + c2;
		if(sum > 255)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		fseek(fpoutput, size1 - i - 1, SEEK_SET);
		fwrite(&sum, sizeof(unsigned char), 1, fpoutput);
	}
	fclose(fpinput1);
	fclose(fpinput2);
	fclose(fpoutput);
	return 0;
}