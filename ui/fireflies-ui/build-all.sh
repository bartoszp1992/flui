# Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
#!/usr/bin/env sh

cp -av --no-clobber ../flui/cfg-ff*.h .

UI=fireflies-ui

for TARGET in cfg-*.h ; do
  NAME=$(echo "$TARGET" | perl -ne '/cfg-(.*).h/ && print "$1\n";')
  echo "===== $NAME ====="
  echo ../../../bin/build.sh 85 "$UI" "-DCONFIGFILE=${TARGET}"
  ../../../bin/build.sh 85 "$UI" "-DCONFIGFILE=${TARGET}"
  mv -f "$UI".hex "$UI".$NAME.hex
done
