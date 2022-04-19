#!/bin/bash
#this script is to take the backup of files
DEST=/home/ubuntu/backup
SRC=/home/ubuntu
[! -d $DEST] && mkdir -p $DEST
#similar check for the source director existance
[! -d $SRC] && { echo "$SRC does not exist, can not initiate backup to $DEST" exit 1;}
echo "backuping in the directory $DEST"
tar zcvf $DEST/backup.tar.gz $SRC 2>/dev/null
status=$?
[$status -eq 0] && echo "Backup is done" || echo "backup failed"
