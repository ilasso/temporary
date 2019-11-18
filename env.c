#include <stdio.h>
#define UNUSED(argc)(void)(argc)
int main(int argc, char **argv, char** envp)
{
  char** env;

	UNUSED(argc);
	UNUSED(argv);

  for (env = envp; *env != 0; env++)
  {
    char* thisEnv = *env;
    printf("%s\n", thisEnv);    
  }
  return(0);
}
