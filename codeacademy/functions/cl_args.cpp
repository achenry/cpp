#include <iostream>

// int main(int argc, char **argv[]) {
int main(int argc, char *argv[]) { // argc = argument count (>1), argv = argument vector
    for(int i = 0; i < argc; i++) {
        std::cout << "arg " << i << ": " << argv[i] << "\n";
    }
    return 0;
}


// ./cl_args Code cademy // 3 args
// ./cl_args "Code cademy" // 2 args, second includes space
// ./cl_args \"Code cademy\" // 3 args, second and third include literal double quotes