#!/bin/bash
#
# $Id: win32-setup.sh 37313 2011-05-19 21:10:26Z gerald $

# 32-bit wrapper for win-setup.sh.

export DOWNLOAD_TAG="2011-05-19"
export WIRESHARK_TARGET_PLATFORM="win32"

WIN_SETUP=`echo $0 | sed -e s/win32/win/`

exec $WIN_SETUP $@
