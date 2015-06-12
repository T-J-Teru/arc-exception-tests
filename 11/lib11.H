#include <exception>
#include <string>

class LibException : public std::exception
{
private:
  std::string msg;

public:
  LibException (std::string msg);

  ~LibException () throw ();
  const std::string &message () const;
};

extern void doit (void);
