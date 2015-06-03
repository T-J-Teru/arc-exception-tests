#include <cstdio>

class Object
{
public:
  Object ()
  {
    printf ("Creating an instance of Object, this = %p\n", this);
  }

  ~Object ()
  {
    printf ("Deleting an instance of Object, this = %p\n", this);
  }
};

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
  Object obj;

  *val = 3;
  printf ("Entering wrapper (val = %d)\n", *val);
  try
    {
      function ();
    }
  catch (...)
    {
      printf ("In catch for wrapper.\n");
      throw 6;
    }

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
