ldapsearch -Q "uid=z*" cn | grep 'cn' | grep -v '#' | cut -c5- | sort -r -f
