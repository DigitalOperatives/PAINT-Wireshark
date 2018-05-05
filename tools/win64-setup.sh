#!/bin/bash
#
# $Id: win64-setup.sh 37313 2011-05-19 21:10:26Z gerald $

# 64-bit wrapper for win-setup.sh.

export DOWNLOAD_TAG="2011-05-19"
export WIRESHARK_TARGET_PLATFORM="win64"

WIN_SETUP=`echo $0 | sed -e s/win64/win/`

exec $WIN_SETUP $@
