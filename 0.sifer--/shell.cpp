//
//  Shell
//  Sifer Aseph
//

#include <iostream>
#include <unistd.h>
#include <string>
#include <sstream>

std::string readLine() {
    std::string userInput;
    
    while (true) {
        std::cin >> userInput;
    }
    
    return userInput;
}

void start() {
    int status = 0;
    std::string line;
    char **args;
    
    line = readLine();
    
    while (status) {
        std::cout << "Sifer's Shell >> ";
    }
}

int initializer() {
    pid_t pid = fork();
    int status = 0;
    
    if (pid == -1) {
        std::perror("Fork failed.");
        exit(EXIT_FAILURE);
    } else if (pid >= 0) {
        std::cout << "Fork success: child process.\n";
        _exit(EXIT_SUCCESS);
    } else {
        (void)waitpid(pid, &status, 0);
    }
    return EXIT_SUCCESS;
}

int main(int argc, const char * argv[]) {
    start();
    
    return 0;
}

//system (" ");
