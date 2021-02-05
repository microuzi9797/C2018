int value(int type, int width, int height, int length)
{
	if(!(type == 79) && !(type == 47) && !(type == 29) && !(type == 82) && !(type == 26) && !(type == 22))
	{
		return -1;
	}
	if(type <= 0 || width <= 0 || height <= 0 || length <= 0)
	{
		return -2;
	}
	else
	{
		int gcd;
		int temp;
		int a, b;
		int i;
		// first
		a = width;
		b = height;
		if(a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		while((a % b) != 0)
		{
			temp = a % b;
			a = b;
			b = temp;
		}
		gcd = b;
		// second
		a = gcd;
		b = length;
		if(a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		while((a % b) != 0)
		{
			temp = a % b;
			a = b;
			b = temp;
		}
		gcd = b;

		int unit = gcd * gcd * gcd;
		int number = (width * height * length) / unit;
		int price;
		if(type == 79)
		{
			price = unit * unit * 30;
		}
		else if(type == 47)
		{
			price = unit * unit * 10;
		}
		else if(type == 29)
		{
			price = unit * unit * 4;
		}
		else if(type == 82)
		{
			price = unit * unit * 5;
		}
		else if(type == 26)
		{
			price = unit * unit * 3;
		}
		else if(type == 22)
		{
			price = unit * unit * 9;
		}
		return price * number;
	}
}