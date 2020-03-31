int cbinsearch(int *arr, int size, int value)
{
  int rez1 =0;
  for (int i=0;i<size;i++)
  {
    if (arr[i]=value) rez1++;
  };
  return rez1;
}
