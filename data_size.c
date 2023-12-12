// Sources and instruction: https://stackoverflow.com/questions/32542041/what-is-c-c-data-segment-and-stack-size
int main (void) {
    static char buffer[100000000] = {0};
    return 0;
}