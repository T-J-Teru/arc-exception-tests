#include <cstdio>

__attribute__ ((noinline))
void
function ()
{
  throw 1;
}

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      function ();
    }
  catch (...)
    {
      printf ("Got an exception\n");
    }

  printf ("Done.\n");
  return 0;
}
