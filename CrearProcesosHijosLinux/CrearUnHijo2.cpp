#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

int
main() {

  pid_t hijo;

  hijo = fork();

  if (hijo == 0) { // Hijo
    execl("/usr/bin/cat", "cat", "-n", "CrearUnHijo.cpp", "CrearUnHijo2.cpp",  NULL);
  }
  else { // Padre
    int status;

    wait(&status);

    if (WIFEXITED(status)) {
      cout << "Con valor de retorno" << WEXITSTATUS(status) << endl;
    }
    else {
      
      cout << "Murio asesinado por" << WTERMSIG(status) << endl;
    }
  }
  return 1;
}
