#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/dgdollartest2.png
ICON_DST=../../src/qt/res/icons/dgdollartest2.ico
convert ${ICON_SRC} -resize 16x16 dgdollartest2-16.png
convert ${ICON_SRC} -resize 32x32 dgdollartest2-32.png
convert ${ICON_SRC} -resize 48x48 dgdollartest2-48.png
convert dgdollartest2-16.png dgdollartest2-32.png dgdollartest2-48.png ${ICON_DST}

