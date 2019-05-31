#include <iostream>
#include <exception>

#include <stdlib.h>

int main(int argc, char **argv)
{

  try
  {
    int *imposibiru = (int *)malloc(10000000000 * sizeof(int));
    std::cout << "teste" << *imposibiru << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  return 0;
}