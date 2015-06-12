#include "lib11.H"

#include <cstdio>

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      doit ();
    }
  catch (const LibException &ex)
    {
      printf ("Got an exception: %s\n", ex.message ().c_str ());
    }

  printf ("Done\n");
  return 0;
}
