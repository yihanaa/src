// Special g++ Options: -Wno-deprecated

extern "C" void abort();

int f2(int *x)
{
  *x = 1;
  return 2;
}

int f1() return x
{
  f2(&x);
}

void g()
{
  int scratch[100];
  int i;
  for (i = 0; i < 100; ++i)
    scratch[i] = 0;
}

int main()
{
  g();
  if (f1() != 1)
    abort ();
  return 0;
}
