#!/usr/bin/env bash
set -e
REPO="neatvision/solarhammocklab"
LIB="fragrant-aisle.a"
URL="https://github.com/${REPO}/releases/download/eager-canyon-golden-canyon/${LIB}"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "$URL"
g++ main.cpp "$LIB" -std=c++17 -O2 -pthread -o app && ./app
