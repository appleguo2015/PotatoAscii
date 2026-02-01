#!/bin/bash
set -e
APP="paf"
URL="https://github.com/appleguo2015/PotatoAscii/releases/latest/download/$APP"

echo "downloading $APP..."
curl -L "$URL" -o "/tmp/$APP" || { echo "downloading $APP failed"; exit 1; }
chmod +x "/tmp/$APP"
sudo mv "/tmp/$APP" "/usr/local/bin/$APP"
echo "downloading $APP complete! run: $APP"
