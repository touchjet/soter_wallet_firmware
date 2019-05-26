#!/bin/bash
git reset --hard
v=$(git rev-list --all --count) 
echo "Version : $v"
sed "s/define PATCH_VERSION 1/define PATCH_VERSION $v/g" ../../include/board/board.h > ../../include/board/board.new 
rm ../../include/board/board.h
mv ../../include/board/board.new ../../include/board/board.h
cd armgcc
make -j8
cd ..
nrfutil pkg generate --hw-version 52 --sd-req 0xae --application-version $v --application ./armgcc/_build/nrf52840_xxaa.hex --key-file ../../keys/private.pem app_dfu_$v.zip 
git reset --hard
