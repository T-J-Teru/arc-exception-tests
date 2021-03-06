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

__attribute__ ((noinline))
void
wrapper (volatile int *val)
{
  *val = 3;
  printf ("Entering wrapper (val = %d)\n", *val);
  function ();
  printf ("Leaving wrapper (val = %d)\n", *val);
}

int
main ()
{
  volatile int val = 4;
  printf ("Entering main (val = %d)\n", val);
  try
    {
      wrapper (&val);
    }
  catch (int ex)
    {
      printf ("Got an exception: %d\n", ex);
    }

  printf ("Done (val = %d)\n", val);
  return 0;
}
