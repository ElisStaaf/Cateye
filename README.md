# Cateye

Cateye is a set of tools for running python code in c and vice-versa.
It is a pretty useful, yet minimal interopability library.

## Install

```sh
git clone https://github.com/ElisStaaf/Cateye cateye
cd cateye

./install.sh --clang  # Clang (-c)
./install.sh --python # Python (-py)
```

## Usage

### Clang

```c
#include <cateye.h>

int main() {
    CATEYE(
        /* [Your python here] */
    )
}
```

### Python3

`main.py`:
```py
import sys
sys.path.insert("[Path to cateye.py folder]")
import cateye

cateye.cateye("""
[Your C goes here]
""")
```

`cateye_config.py`:
```py
def compiler() -> str:
    return "[Path to C compiler]"

def save_files() -> bool:
    return "[True or False]"
```
