#include <cstdio>

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      throw 1;
    }
  catch (int ex)
    {
      printf ("Got an exception: %d\n", ex);
    }

  printf ("Done.\n");
  return 0;
}
