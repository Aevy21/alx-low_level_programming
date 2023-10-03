
// Function to free memory allocated for arguments
void free_arguments(char** args) {
    if (args != NULL) {
        int i = 0;
        while (args[i] != NULL) {
            free(args[i]);
            i++;
        }
        free(args);
    }
}
