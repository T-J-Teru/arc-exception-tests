#include <cstdio>

volatile int i = 0;

__attribute__ ((noinline))
void
function ()
{
  printf ("Entering function.\n");
  if (i == 0)
    throw 1;
  printf ("Leaving function.\n");
}

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      function ();
    }
  catch (int ex)
    {
      printf ("Got an exception: %d\n", ex);
    }

  printf ("Done.\n");
  return 0;
}
