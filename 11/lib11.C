#include "lib11.H"

void
doit (void)
{
  throw LibException ("Exception From Library");
}

LibException::LibException (std::string msg)
  : msg (msg)
{
  /* Nothing.  */
}

LibException::~LibException () throw ()
{
  /* Nothing.  */
}

const std::string &LibException::message () const
{
  return msg;
}

