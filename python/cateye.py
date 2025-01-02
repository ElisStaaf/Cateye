from pathlib import Path

CONFIG = Path("./cateye_config.py")

if not CONFIG.is_file():
    print("cateye_config.py doesn't exist!")
    print("Create one and configure to continue!")
    exit

import cateye_config as cfg
import os

def cateye(code: str):
    with open(".cateye.c", "w") as src:
        src.write(code);
        src.close()
    os.system(f"{cfg.compiler()} -o .cateye .cateye.c")
    os.system("./.cateye")
    if not cfg.save_files():
        os.remove(".cateye.c")
        os.remove(".cateye")
