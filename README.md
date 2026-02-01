# Potato Ascii
## A Simple Tool By aPpLegUo
It just can show ascii in terminal.

## How To Install
### Main Download Path
### run this ↓
```bash
set -e
APP="paf"
URL="https://github.com/appleguo2015/PotatoAscii/releases/download/potato/$APP"
curl -L "$URL" -o "/tmp/$APP" || { echo "downloading $APP failed"; exit 1; }
chmod +x "/tmp/$APP"
sudo mv "/tmp/$APP" "/usr/local/bin/$APP"
echo -e "\033[32mBy aPpLegUo\033[0m"
```
### run this ↑
1. download it from [here](
    https://github.com/appleguo2015/PotatoAscii/releases
) or bash download.sh at [here](
    https://github.com/appleguo2015/PotatoAscii/blob/master/download.sh
)
``` bash
./download.sh
```

## How To Use
Run it with a file argument:
```bash
paf <file>
```

Examples:
```bash
paf apple.txt
paf potato.txt
paf aPpLegUo.txt
```
