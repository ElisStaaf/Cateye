#include <cateye.h>

int main() {
    CATEYE(
        def greet(name: str):
            print("Hello, %s!" % name)

        NAMES: list[str] = [
            "Jane", "John", "Jill"
        ]

        for name in NAMES:
            greet(name + " Doe")
    )
    return 0;
}
