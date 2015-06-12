#include <cstdio>
#include <string>
#include <exception>

class TestException : public std::exception
{
private:
  std::string msg;

public:
  TestException (const std::string &str)
    : msg (str)
  {
    printf ("Creating an instance of TestException class.\n");
  }

  ~TestException () throw ()
  {
    printf ("Deleting an instance of TestException class.\n");
  }

  const std::string &message () const
  {
    return msg;
  }
};

int
main ()
{
  printf ("Entering main.\n");
  try
    {
      throw TestException ("message 1");
    }
  catch (const TestException &ex)
    {
      printf ("Got an exception: %s\n", ex.message ().c_str ());
    }

  printf ("Done\n");
  return 0;
}
