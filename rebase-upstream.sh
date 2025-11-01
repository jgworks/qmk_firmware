#!/bin/bash

git fetch upstream
git rebase --onto upstream/master upstream/master master
qmk compile
