import sys
sys.path.insert(1, "../../python/")
import cateye

cateye("""
#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
}
""")
