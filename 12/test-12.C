#include <cstdio>
#include <exception>

volatile int i = 1;

int
main ()
{
  printf ("Entering main.\n");
  if (i == 1)
    {
      try
        {
          throw 1;
        }
      catch (const std::exception &ex)
        {
          printf ("Got an exception\n");
        }
      catch (...)
        {
          /* Nothing.  */
        }
    }
  else
    printf ("FAIL!\n");

  printf ("Done.\n");
  return 0;
}
