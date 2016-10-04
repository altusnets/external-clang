#!/bin/bash -eu

CLANG_VERSION=$(grep PACKAGE_VERSION $1 | sed -e 's/\#define PACKAGE_VERSION "\(.*\)"/\1/g' | sed -e 's/svn//')
CLANG_VERSION_MAJOR=$(echo ${CLANG_VERSION} | cut -d. -f1)
CLANG_VERSION_MINOR=$(echo ${CLANG_VERSION} | cut -d. -f2)
CLANG_VERSION_PATCHLEVEL=$(echo ${CLANG_VERSION} | cut -d. -f3)
if [[ "${CLANG_VERSION_PATCHLEVEL}" == "" ]]; then
  CLANG_HAS_VERSION_PATCHLEVEL=0
else
  CLANG_HAS_VERSION_PATCHLEVEL=1
fi

sed -e "s#@CLANG_VERSION@#${CLANG_VERSION}#g" \
    -e "s#@CLANG_VERSION_MAJOR@#${CLANG_VERSION_MAJOR}#g" \
    -e "s#@CLANG_VERSION_MINOR@#${CLANG_VERSION_MINOR}#g" \
    -e "s#@CLANG_VERSION_PATCHLEVEL@#${CLANG_VERSION_PATCHLEVEL}#g" \
    -e "s#@CLANG_HAS_VERSION_PATCHLEVEL@#${CLANG_HAS_VERSION_PATCHLEVEL}#g"
