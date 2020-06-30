//Fuction only
//
//
void QKSORT(int min_index, int max_index)
{
	extern double data[N];
	if (max_index <= min_index + 1 && data[min_index] <= data[max_index])
		return;
	double model = data[min_index], temp;
	int begin_index = min_index, terminal_index = max_index;
	if (max_index <= min_index + 1 && data[min_index] <= data[max_index])
		return;
	max_index++;
	while (min_index != max_index)
	{
		for (max_index = max_index - 1;max_index >= min_index;max_index--)
		{
			if (data[max_index]<model || max_index == min_index)
				break;
		}
		if (max_index == min_index)
			break;
		for (min_index = min_index + 1;min_index <= max_index;min_index++)
		{
			if (data[min_index]>model || min_index == max_index)
				break;
		}
		if (max_index != min_index)
		{
			temp = data[min_index];
			data[min_index] = data[max_index];
			data[max_index] = temp;
		}
	}
	data[begin_index] = data[max_index];data[max_index] = model;
	if (begin_index<max_index - 1)
		QKSORT(begin_index, max_index - 1);
	if (max_index + 1<terminal_index)
		QKSORT(max_index + 1, terminal_index);
}
