# Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
#!/usr/bin/env sh

cp -av ../flui/cfg*.h .

UI=werner

for TARGET in cfg-*.h ; do
  NAME=$(echo "$TARGET" | perl -ne '/cfg-(.*).h/ && print "$1\n";')
  echo "===== $NAME ====="
  ATTINY=$(grep 'ATTINY:' $TARGET | awk '{ print $3 }')
  if [ -z "$ATTINY" ]; then ATTINY=85 ; fi
  echo ../../../bin/build.sh $ATTINY "$UI" "-DCONFIGFILE=${TARGET}"
  ../../../bin/build.sh $ATTINY "$UI" "-DCONFIGFILE=${TARGET}"
  mv -f "$UI".hex "$UI".$NAME.hex
done
