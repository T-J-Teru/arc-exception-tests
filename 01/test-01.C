#include <cstdio>

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      throw 1;
    }
  catch (...)
    {
      printf ("Got an exception\n");
    }

  printf ("Done.\n");
  return 0;
}
