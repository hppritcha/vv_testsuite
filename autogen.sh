#! /bin/sh

if test ! -d .git && test ! -f cray/sma1/align.c; then
    echo You really need to run this script in the top-level libfabric directory
    exit 1
fi

set -x

autoreconf -ivf
