if [ $# -gt 0 ]; then
    case $1 in 
        "--clang"|"-c")
            sudo cp \
                clang/cateye.h \
                /usr/bin/cateye.h
            ;;
        "--python"|"-py")
            sudo cp \
                python/cateye.py \
                ../cateye.py
            ;;
        *)
            echo "No flag by the name of \"$1\" was found."
            ;;
    esac
fi
