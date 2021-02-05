void prepare_array(int buffer[], int *array[], int row, int column[])
{
	int i, j;
	int counter = 0;
	for(i = 0;i < row;i++)
	{
		array[i] = &(buffer[counter]);
		for(j = 0;j < column[i];j++)
		{
			*(array[i] + j) = buffer[counter];
			counter++;
		}
	}
}