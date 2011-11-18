#!/bin/sh

echo '====自动git======'
git add .
git ci -m 'fix'
git push
echo '====完成===='
print
