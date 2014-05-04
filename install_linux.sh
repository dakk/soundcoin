#!/bin/bash

#qmake
#make

#cd src
#make -f makefile.unix

#cd ..

cp soundcoin-qt /usr/local/bin
cp src/soundcoind /usr/local/bin
mkdir -p /usr/local/share/pixmaps/
cp share/dist/soundcoin.png /usr/local/share/pixmaps/
mkdir -p /usr/local/share/applications/
cp share/dist/soundcoin-qt.desktop /usr/local/share/applications/
